/*         ______   ___    ___
 *        /\  _  \ /\_ \  /\_ \
 *        \ \ \L\ \\//\ \ \//\ \      __     __   _ __   ___
 *         \ \  __ \ \ \ \  \ \ \   /'__`\ /'_ `\/\`'__\/ __`\
 *          \ \ \/\ \ \_\ \_ \_\ \_/\  __//\ \L\ \ \ \//\ \L\ \
 *           \ \_\ \_\/\____\/\____\ \____\ \____ \ \_\\ \____/
 *            \/_/\/_/\/____/\/____/\/____/\/___L\ \/_/ \/___/
 *                                           /\____/
 *                                           \_/__/
 *
 *      GTK native dialog implementation.
 *
 *      See LICENSE.txt for copyright information.
 */

#include <gtk/gtk.h>

#include "allegro5/allegro.h"
#include "allegro5/allegro_native_dialog.h"
#include "allegro5/internal/aintern_native_dialog.h"
#include "gtk_dialog.h"
#include "gtk_xgtk.h"

#if GTK_CHECK_VERSION(2, 4, 0) && !defined(ALLEGRO_CFG_NATIVE_DIALOG_FORCE_OLD_GTK)

/* [nd_gtk thread] */
gboolean _al_create_gtk_file_dialog(gpointer data)
{
   GTK_FILE_DIALOG_MESSAGE *msg = data;
   ALLEGRO_DISPLAY *display = msg->display;
   ALLEGRO_NATIVE_DIALOG *fd = msg->dialog;
   bool save = fd->flags & ALLEGRO_FILECHOOSER_SAVE;
   gint result;

   GtkWidget *window;

   window =
      gtk_file_chooser_dialog_new(al_cstr(fd->title),
                                  NULL,
                                  save ? GTK_FILE_CHOOSER_ACTION_SAVE : GTK_FILE_CHOOSER_ACTION_OPEN,
                                  GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
                                  save ? GTK_STOCK_SAVE : GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT, NULL);

   _al_gtk_make_transient(display, window);

   if (fd->fc_initial_path) {
      gtk_file_chooser_set_filename(GTK_FILE_CHOOSER(window),
         al_path_cstr(fd->fc_initial_path, ALLEGRO_NATIVE_PATH_SEP));
   }

   if (fd->flags & ALLEGRO_FILECHOOSER_MULTIPLE)
      gtk_file_chooser_set_select_multiple(GTK_FILE_CHOOSER(window), true);

   /* FIXME: Move all this filter parsing stuff into a common file. */
   if (al_ustr_size(fd->fc_patterns) > 0) {
      GtkFileFilter* filter = gtk_file_filter_new();
      int start = 0;
      int end = 0;
      bool is_mime_type = false;
      while (true) {
         int32_t c = al_ustr_get(fd->fc_patterns, end);
         if (c < 0 || c == ';') {
            if (end - start > 0) {
               ALLEGRO_USTR* pattern = al_ustr_dup_substr(fd->fc_patterns, start, end);
               if (is_mime_type) {
                  gtk_file_filter_add_mime_type(filter, al_cstr(pattern));
               }
               else {
                  gtk_file_filter_add_pattern(filter, al_cstr(pattern));
               }
               al_ustr_free(pattern);
            }
            start = end + 1;
            is_mime_type = false;
         }
         if (c == '/')
            is_mime_type = true;
         if (c < 0)
            break;
         end += al_utf8_width(c);
      }

      gtk_file_filter_set_name(filter, "All supported files");
      gtk_file_chooser_add_filter(GTK_FILE_CHOOSER(window), filter);
   }

   result = gtk_dialog_run(GTK_DIALOG(window));
   if (result == GTK_RESPONSE_ACCEPT) {
      GSList* filenames = gtk_file_chooser_get_filenames(GTK_FILE_CHOOSER(window));
      int i;
      GSList* iter;

      fd->fc_path_count = g_slist_length(filenames);
      fd->fc_paths = al_malloc(fd->fc_path_count * sizeof(void *));
      for (i = 0, iter = filenames; i < (int)fd->fc_path_count; i++, iter = g_slist_next(iter)) {
         fd->fc_paths[i] = al_create_path((const char*)iter->data);
         g_free(iter->data);
      }
      g_slist_free(filenames);
   }

   gtk_widget_destroy(window);

   ASSERT(fd->async_queue);
   g_async_queue_push(fd->async_queue, ACK_CLOSED);

   return FALSE;
}

#endif
/* vim: set sts=3 sw=3 et: */
