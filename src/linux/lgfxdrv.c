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
 *      Linux console video driver list.
 *
 *      By George Foot.
 *
 *      See readme.txt for copyright information.
 */


#include "allegro.h"


/* list the available drivers */
_DRIVER_INFO _linux_gfx_driver_list[] =
{
#ifdef ALLEGRO_LINUX_FBCON
   {  GFX_FBCON,    &gfx_fbcon,    TRUE  },
#endif
#ifdef ALLEGRO_LINUX_VBEAF
   {  GFX_VBEAF,    &gfx_vbeaf,    TRUE  },
#endif
#ifdef ALLEGRO_LINUX_VGA
   {  GFX_VGA,      &gfx_vga,      TRUE  },
   {  GFX_MODEX,    &gfx_modex,    TRUE  },
#endif
#ifdef ALLEGRO_LINUX_GGI
   {  GFX_GGI,      &gfx_ggi,      FALSE },
#endif
#ifdef ALLEGRO_LINUX_SVGALIB
   {  GFX_SVGALIB,  &gfx_svgalib,  FALSE },
#endif
   {  0,            NULL,          0     }
};

