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
 *      Stuff for BeOS.
 *
 *      By Jason Wilkins.
 *
 *      See readme.txt for copyright information.
 */

#include "bealleg.h"
#include "allegro/aintern.h"
#include "allegro/aintbeos.h"

#ifndef ALLEGRO_BEOS
#error something is wrong with the makefile
#endif                

#define MOUSE_THREAD_NAME     "mouse driver"
#define MOUSE_THREAD_PRIORITY 100
#define MOUSE_THREAD_PERIOD   20000 // microseconds, 1/50th of a second

#define CLAMP(low, var, high) (((var) < (low))?(low):(((var) > (high))?(high):(var)))



static thread_id     mouse_thread_id      = -1;
static volatile bool mouse_thread_running = false;

sem_id   be_mouse_view_attached = -1;
BWindow *be_mouse_window        = NULL;
BView   *be_mouse_view          = NULL;

static int be_mouse_x  = 0;
static int be_mouse_y  = 0;
static int be_mouse_b  = 0;

static int be_mickey_x = 0;
static int be_mickey_y = 0;

static int limit_up     = 0;
static int limit_down   = 0;
static int limit_left   = 0;
static int limit_right  = 0;
         


int32 mouse_thread(void *mouse_started)
{
   BPoint cursor(0, 0);
   uint32 buttons;

   set_mouse_position(320, 200);

   release_sem(*(sem_id *)mouse_started);

   for (;;) {
      acquire_sem(be_mouse_view_attached);

      if (mouse_thread_running == false) {
         release_sem(be_mouse_view_attached);
         AL_TRACE("mouse thread exited\n");

         return 0;
      }

      if ((focus_count > 0) && be_mouse_window->Lock()) {
         be_mouse_view->GetMouse(&cursor, &buttons);
         be_mouse_window->Unlock();

         int dx = (int)cursor.x - 320;
         int dy = (int)cursor.y - 240;

         be_mickey_x += dx;
         be_mickey_y += dy;

         be_mouse_x += dx;
         be_mouse_x = CLAMP(limit_left, be_mouse_x, limit_right);

         be_mouse_y += dy;
         be_mouse_y = CLAMP(limit_up,   be_mouse_y, limit_down);

         be_mouse_b = 0;
         be_mouse_b |= (buttons & B_PRIMARY_MOUSE_BUTTON)   ? 1 : 0;
         be_mouse_b |= (buttons & B_SECONDARY_MOUSE_BUTTON) ? 2 : 0;
         be_mouse_b |= (buttons & B_TERTIARY_MOUSE_BUTTON)  ? 4 : 0;

         _mouse_x = be_mouse_x;
         _mouse_y = be_mouse_y;
         _mouse_b = be_mouse_b;

         _handle_mouse_input();

         if (dx != 0 || dy != 0) {
            set_mouse_position(320, 240);
         }
      }

      release_sem(be_mouse_view_attached);

      snooze(MOUSE_THREAD_PERIOD);
   }
}



extern "C" int be_mouse_init(void)
{
   sem_id mouse_started;
   int32  num_buttons;

   mouse_started = create_sem(0, "starting mouse driver...");

   if (mouse_started < 0) {
      goto cleanup;
   }

   mouse_thread_id = spawn_thread(mouse_thread, MOUSE_THREAD_NAME,
                        MOUSE_THREAD_PRIORITY, &mouse_started); 

   if (mouse_thread_id < 0) {
      goto cleanup;
   }

   mouse_thread_running = true;
   resume_thread(mouse_thread_id);
   acquire_sem(mouse_started);
   delete_sem(mouse_started);

   be_mickey_x = 0;
   be_mickey_y = 0;

   be_mouse_x = 0;
   be_mouse_y = 0;
   be_mouse_b = 0;

   limit_up     = 0;
   limit_down   = 0;
   limit_left   = 0;
   limit_right  = 0;

   get_mouse_type(&num_buttons);

   return 2;//num_buttons;

   cleanup: {
      if (mouse_started > 0) {
         delete_sem(mouse_started);
      }

      be_mouse_exit();
      return 0;
   }
}



extern "C" void be_mouse_exit(void)
{
   be_mickey_x = 0;
   be_mickey_y = 0;

   be_mouse_x = 0;
   be_mouse_y = 0;
   be_mouse_b = 0;

   limit_up     = 0;
   limit_down   = 0;
   limit_left   = 0;
   limit_right  = 0;

   mouse_thread_running = false;

   if (mouse_thread_id > 0) {
      release_sem(be_mouse_view_attached);
      wait_for_thread(mouse_thread_id, &ignore_result);
      acquire_sem(be_mouse_view_attached);
      mouse_thread_id = -1;
   }
}



extern "C" void be_mouse_position(int x, int y)
{
   be_mouse_x = x;
   be_mouse_y = y;
}



extern "C" void be_mouse_set_range(int x1, int y1, int x2, int y2)
{
   limit_up     = y1;
   limit_down   = y2;
   limit_left   = x1;
   limit_right  = x2;
}



extern "C" void be_mouse_set_speed(int xspeed, int yspeed)
{
}



extern "C" void be_mouse_get_mickeys(int *mickeyx, int *mickeyy)
{
   if (mickeyx != NULL) {
      *mickeyx = be_mickey_x;
   }

   if (mickeyy != NULL) {
      *mickeyy = be_mickey_y;
   }

   be_mickey_x = 0;
   be_mickey_y = 0;
}
