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
 *      The default 8x8 font. This must only be included once, from text.c.
 *
 *      Contains characters:
 *
 *          ASCII          (0x0020 to 0x007F)
 *          Latin-1        (0x00A1 to 0x00FF)
 *          Extended-A     (0x0100 to 0x017F)
 *
 *      See readme.txt for copyright information.
 */



/* standard ASCII characters (0x20 to 0x7F) */
static FONT_GLYPH f_0x20 = { 8, 8, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0x21 = { 8, 8, { 0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00 } };
static FONT_GLYPH f_0x22 = { 8, 8, { 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0x23 = { 8, 8, { 0x6C, 0x6C, 0xFE, 0x6C, 0xFE, 0x6C, 0x6C, 0x00 } };
static FONT_GLYPH f_0x24 = { 8, 8, { 0x18, 0x7E, 0xC0, 0x7C, 0x06, 0xFC, 0x18, 0x00 } };
static FONT_GLYPH f_0x25 = { 8, 8, { 0x00, 0xC6, 0xCC, 0x18, 0x30, 0x66, 0xC6, 0x00 } };
static FONT_GLYPH f_0x26 = { 8, 8, { 0x38, 0x6C, 0x38, 0x76, 0xDC, 0xCC, 0x76, 0x00 } };
static FONT_GLYPH f_0x27 = { 8, 8, { 0x30, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0x28 = { 8, 8, { 0x18, 0x30, 0x60, 0x60, 0x60, 0x30, 0x18, 0x00 } };
static FONT_GLYPH f_0x29 = { 8, 8, { 0x60, 0x30, 0x18, 0x18, 0x18, 0x30, 0x60, 0x00 } };
static FONT_GLYPH f_0x2A = { 8, 8, { 0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00 } };
static FONT_GLYPH f_0x2B = { 8, 8, { 0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00 } };
static FONT_GLYPH f_0x2C = { 8, 8, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30 } };
static FONT_GLYPH f_0x2D = { 8, 8, { 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0x2E = { 8, 8, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00 } };
static FONT_GLYPH f_0x2F = { 8, 8, { 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00 } };
static FONT_GLYPH f_0x30 = { 8, 8, { 0x7C, 0xCE, 0xDE, 0xF6, 0xE6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x31 = { 8, 8, { 0x30, 0x70, 0x30, 0x30, 0x30, 0x30, 0xFC, 0x00 } };
static FONT_GLYPH f_0x32 = { 8, 8, { 0x78, 0xCC, 0x0C, 0x38, 0x60, 0xCC, 0xFC, 0x00 } };
static FONT_GLYPH f_0x33 = { 8, 8, { 0x78, 0xCC, 0x0C, 0x38, 0x0C, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x34 = { 8, 8, { 0x1C, 0x3C, 0x6C, 0xCC, 0xFE, 0x0C, 0x1E, 0x00 } };
static FONT_GLYPH f_0x35 = { 8, 8, { 0xFC, 0xC0, 0xF8, 0x0C, 0x0C, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x36 = { 8, 8, { 0x38, 0x60, 0xC0, 0xF8, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x37 = { 8, 8, { 0xFC, 0xCC, 0x0C, 0x18, 0x30, 0x30, 0x30, 0x00 } };
static FONT_GLYPH f_0x38 = { 8, 8, { 0x78, 0xCC, 0xCC, 0x78, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x39 = { 8, 8, { 0x78, 0xCC, 0xCC, 0x7C, 0x0C, 0x18, 0x70, 0x00 } };
static FONT_GLYPH f_0x3A = { 8, 8, { 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00 } };
static FONT_GLYPH f_0x3B = { 8, 8, { 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30 } };
static FONT_GLYPH f_0x3C = { 8, 8, { 0x18, 0x30, 0x60, 0xC0, 0x60, 0x30, 0x18, 0x00 } };
static FONT_GLYPH f_0x3D = { 8, 8, { 0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0x3E = { 8, 8, { 0x60, 0x30, 0x18, 0x0C, 0x18, 0x30, 0x60, 0x00 } };
static FONT_GLYPH f_0x3F = { 8, 8, { 0x3C, 0x66, 0x0C, 0x18, 0x18, 0x00, 0x18, 0x00 } };
static FONT_GLYPH f_0x40 = { 8, 8, { 0x7C, 0xC6, 0xDE, 0xDE, 0xDC, 0xC0, 0x7C, 0x00 } };
static FONT_GLYPH f_0x41 = { 8, 8, { 0x30, 0x78, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0x00 } };
static FONT_GLYPH f_0x42 = { 8, 8, { 0xFC, 0x66, 0x66, 0x7C, 0x66, 0x66, 0xFC, 0x00 } };
static FONT_GLYPH f_0x43 = { 8, 8, { 0x3C, 0x66, 0xC0, 0xC0, 0xC0, 0x66, 0x3C, 0x00 } };
static FONT_GLYPH f_0x44 = { 8, 8, { 0xF8, 0x6C, 0x66, 0x66, 0x66, 0x6C, 0xF8, 0x00 } };
static FONT_GLYPH f_0x45 = { 8, 8, { 0xFE, 0x62, 0x68, 0x78, 0x68, 0x62, 0xFE, 0x00 } };
static FONT_GLYPH f_0x46 = { 8, 8, { 0xFE, 0x62, 0x68, 0x78, 0x68, 0x60, 0xF0, 0x00 } };
static FONT_GLYPH f_0x47 = { 8, 8, { 0x3C, 0x66, 0xC0, 0xC0, 0xCE, 0x66, 0x3A, 0x00 } };
static FONT_GLYPH f_0x48 = { 8, 8, { 0xCC, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0xCC, 0x00 } };
static FONT_GLYPH f_0x49 = { 8, 8, { 0x78, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x4A = { 8, 8, { 0x1E, 0x0C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x4B = { 8, 8, { 0xE6, 0x66, 0x6C, 0x78, 0x6C, 0x66, 0xE6, 0x00 } };
static FONT_GLYPH f_0x4C = { 8, 8, { 0xF0, 0x60, 0x60, 0x60, 0x62, 0x66, 0xFE, 0x00 } };
static FONT_GLYPH f_0x4D = { 8, 8, { 0xC6, 0xEE, 0xFE, 0xFE, 0xD6, 0xC6, 0xC6, 0x00 } };
static FONT_GLYPH f_0x4E = { 8, 8, { 0xC6, 0xE6, 0xF6, 0xDE, 0xCE, 0xC6, 0xC6, 0x00 } };
static FONT_GLYPH f_0x4F = { 8, 8, { 0x38, 0x6C, 0xC6, 0xC6, 0xC6, 0x6C, 0x38, 0x00 } };
static FONT_GLYPH f_0x50 = { 8, 8, { 0xFC, 0x66, 0x66, 0x7C, 0x60, 0x60, 0xF0, 0x00 } };
static FONT_GLYPH f_0x51 = { 8, 8, { 0x7C, 0xC6, 0xC6, 0xC6, 0xD6, 0x7C, 0x0E, 0x00 } };
static FONT_GLYPH f_0x52 = { 8, 8, { 0xFC, 0x66, 0x66, 0x7C, 0x6C, 0x66, 0xE6, 0x00 } };
static FONT_GLYPH f_0x53 = { 8, 8, { 0x7C, 0xC6, 0xE0, 0x78, 0x0E, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x54 = { 8, 8, { 0xFC, 0xB4, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x55 = { 8, 8, { 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xFC, 0x00 } };
static FONT_GLYPH f_0x56 = { 8, 8, { 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x00 } };
static FONT_GLYPH f_0x57 = { 8, 8, { 0xC6, 0xC6, 0xC6, 0xC6, 0xD6, 0xFE, 0x6C, 0x00 } };
static FONT_GLYPH f_0x58 = { 8, 8, { 0xC6, 0xC6, 0x6C, 0x38, 0x6C, 0xC6, 0xC6, 0x00 } };
static FONT_GLYPH f_0x59 = { 8, 8, { 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x5A = { 8, 8, { 0xFE, 0xC6, 0x8C, 0x18, 0x32, 0x66, 0xFE, 0x00 } };
static FONT_GLYPH f_0x5B = { 8, 8, { 0x78, 0x60, 0x60, 0x60, 0x60, 0x60, 0x78, 0x00 } };
static FONT_GLYPH f_0x5C = { 8, 8, { 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x02, 0x00 } };
static FONT_GLYPH f_0x5D = { 8, 8, { 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x00 } };
static FONT_GLYPH f_0x5E = { 8, 8, { 0x10, 0x38, 0x6C, 0xC6, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0x5F = { 8, 8, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF } };
static FONT_GLYPH f_0x60 = { 8, 8, { 0x30, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0x61 = { 8, 8, { 0x00, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00 } };
static FONT_GLYPH f_0x62 = { 8, 8, { 0xE0, 0x60, 0x60, 0x7C, 0x66, 0x66, 0xDC, 0x00 } };
static FONT_GLYPH f_0x63 = { 8, 8, { 0x00, 0x00, 0x78, 0xCC, 0xC0, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x64 = { 8, 8, { 0x1C, 0x0C, 0x0C, 0x7C, 0xCC, 0xCC, 0x76, 0x00 } };
static FONT_GLYPH f_0x65 = { 8, 8, { 0x00, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 } };
static FONT_GLYPH f_0x66 = { 8, 8, { 0x38, 0x6C, 0x64, 0xF0, 0x60, 0x60, 0xF0, 0x00 } };
static FONT_GLYPH f_0x67 = { 8, 8, { 0x00, 0x00, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 } };
static FONT_GLYPH f_0x68 = { 8, 8, { 0xE0, 0x60, 0x6C, 0x76, 0x66, 0x66, 0xE6, 0x00 } };
static FONT_GLYPH f_0x69 = { 8, 8, { 0x30, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x6A = { 8, 8, { 0x0C, 0x00, 0x1C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78 } };
static FONT_GLYPH f_0x6B = { 8, 8, { 0xE0, 0x60, 0x66, 0x6C, 0x78, 0x6C, 0xE6, 0x00 } };
static FONT_GLYPH f_0x6C = { 8, 8, { 0x70, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x6D = { 8, 8, { 0x00, 0x00, 0xCC, 0xFE, 0xFE, 0xD6, 0xD6, 0x00 } };
static FONT_GLYPH f_0x6E = { 8, 8, { 0x00, 0x00, 0xB8, 0xCC, 0xCC, 0xCC, 0xCC, 0x00 } };
static FONT_GLYPH f_0x6F = { 8, 8, { 0x00, 0x00, 0x78, 0xCC, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x70 = { 8, 8, { 0x00, 0x00, 0xDC, 0x66, 0x66, 0x7C, 0x60, 0xF0 } };
static FONT_GLYPH f_0x71 = { 8, 8, { 0x00, 0x00, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0x1E } };
static FONT_GLYPH f_0x72 = { 8, 8, { 0x00, 0x00, 0xDC, 0x76, 0x62, 0x60, 0xF0, 0x00 } };
static FONT_GLYPH f_0x73 = { 8, 8, { 0x00, 0x00, 0x7C, 0xC0, 0x70, 0x1C, 0xF8, 0x00 } };
static FONT_GLYPH f_0x74 = { 8, 8, { 0x10, 0x30, 0xFC, 0x30, 0x30, 0x34, 0x18, 0x00 } };
static FONT_GLYPH f_0x75 = { 8, 8, { 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x76, 0x00 } };
static FONT_GLYPH f_0x76 = { 8, 8, { 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x00 } };
static FONT_GLYPH f_0x77 = { 8, 8, { 0x00, 0x00, 0xC6, 0xC6, 0xD6, 0xFE, 0x6C, 0x00 } };
static FONT_GLYPH f_0x78 = { 8, 8, { 0x00, 0x00, 0xC6, 0x6C, 0x38, 0x6C, 0xC6, 0x00 } };
static FONT_GLYPH f_0x79 = { 8, 8, { 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 } };
static FONT_GLYPH f_0x7A = { 8, 8, { 0x00, 0x00, 0xFC, 0x98, 0x30, 0x64, 0xFC, 0x00 } };
static FONT_GLYPH f_0x7B = { 8, 8, { 0x1C, 0x30, 0x30, 0xE0, 0x30, 0x30, 0x1C, 0x00 } };
static FONT_GLYPH f_0x7C = { 8, 8, { 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00 } };
static FONT_GLYPH f_0x7D = { 8, 8, { 0xE0, 0x30, 0x30, 0x1C, 0x30, 0x30, 0xE0, 0x00 } };
static FONT_GLYPH f_0x7E = { 8, 8, { 0x76, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0x7F = { 8, 8, { 0x00, 0x10, 0x38, 0x6C, 0xC6, 0xC6, 0xFE, 0x00 } };



/* list of ASCII characters */
static void *ascii_data[] =
{
   &f_0x20, &f_0x21, &f_0x22, &f_0x23, &f_0x24, &f_0x25, &f_0x26, &f_0x27, 
   &f_0x28, &f_0x29, &f_0x2A, &f_0x2B, &f_0x2C, &f_0x2D, &f_0x2E, &f_0x2F,
   &f_0x30, &f_0x31, &f_0x32, &f_0x33, &f_0x34, &f_0x35, &f_0x36, &f_0x37, 
   &f_0x38, &f_0x39, &f_0x3A, &f_0x3B, &f_0x3C, &f_0x3D, &f_0x3E, &f_0x3F,
   &f_0x40, &f_0x41, &f_0x42, &f_0x43, &f_0x44, &f_0x45, &f_0x46, &f_0x47, 
   &f_0x48, &f_0x49, &f_0x4A, &f_0x4B, &f_0x4C, &f_0x4D, &f_0x4E, &f_0x4F,
   &f_0x50, &f_0x51, &f_0x52, &f_0x53, &f_0x54, &f_0x55, &f_0x56, &f_0x57, 
   &f_0x58, &f_0x59, &f_0x5A, &f_0x5B, &f_0x5C, &f_0x5D, &f_0x5E, &f_0x5F,
   &f_0x60, &f_0x61, &f_0x62, &f_0x63, &f_0x64, &f_0x65, &f_0x66, &f_0x67, 
   &f_0x68, &f_0x69, &f_0x6A, &f_0x6B, &f_0x6C, &f_0x6D, &f_0x6E, &f_0x6F,
   &f_0x70, &f_0x71, &f_0x72, &f_0x73, &f_0x74, &f_0x75, &f_0x76, &f_0x77, 
   &f_0x78, &f_0x79, &f_0x7A, &f_0x7B, &f_0x7C, &f_0x7D, &f_0x7E, &f_0x7F
};



/* ANSI Latin-1 characters (0xA1 to 0xFF) */
static FONT_GLYPH f_0xA1 = { 8, 8, { 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00 } };
static FONT_GLYPH f_0xA2 = { 8, 8, { 0x18, 0x18, 0x7E, 0xC0, 0xC0, 0x7E, 0x18, 0x18 } };
static FONT_GLYPH f_0xA3 = { 8, 8, { 0x38, 0x6C, 0x64, 0xF0, 0x60, 0xE6, 0xFC, 0x00 } };
static FONT_GLYPH f_0xA4 = { 8, 8, { 0x00, 0xC6, 0x7C, 0xC6, 0xC6, 0x7C, 0xC6, 0x00 } };
static FONT_GLYPH f_0xA5 = { 8, 8, { 0xCC, 0xCC, 0x78, 0xFC, 0x30, 0xFC, 0x30, 0x30 } };
static FONT_GLYPH f_0xA6 = { 8, 8, { 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00 } };
static FONT_GLYPH f_0xA7 = { 8, 8, { 0x3E, 0x61, 0x3C, 0x66, 0x66, 0x3C, 0x86, 0x7C } };
static FONT_GLYPH f_0xA8 = { 8, 8, { 0x00, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0xA9 = { 8, 8, { 0x7E, 0x81, 0x9D, 0xA1, 0xA1, 0x9D, 0x81, 0x7E } };
static FONT_GLYPH f_0xAA = { 8, 8, { 0x3C, 0x6C, 0x6C, 0x3E, 0x00, 0x7E, 0x00, 0x00 } };
static FONT_GLYPH f_0xAB = { 8, 8, { 0x00, 0x33, 0x66, 0xCC, 0x66, 0x33, 0x00, 0x00 } };
static FONT_GLYPH f_0xAC = { 8, 8, { 0x00, 0x00, 0x00, 0xFC, 0x0C, 0x0C, 0x00, 0x00 } };
static FONT_GLYPH f_0xAD = { 8, 8, { 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0xAE = { 8, 8, { 0x7E, 0x81, 0xB9, 0xA5, 0xB9, 0xA5, 0x81, 0x7E } };
static FONT_GLYPH f_0xAF = { 8, 8, { 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0xB0 = { 8, 8, { 0x38, 0x6C, 0x6C, 0x38, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0xB1 = { 8, 8, { 0x30, 0x30, 0xFC, 0x30, 0x30, 0x00, 0xFC, 0x00 } };
static FONT_GLYPH f_0xB2 = { 8, 8, { 0x70, 0x18, 0x30, 0x60, 0x78, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0xB3 = { 8, 8, { 0x78, 0x0C, 0x38, 0x0C, 0x78, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0xB4 = { 8, 8, { 0x0C, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0xB5 = { 8, 8, { 0x00, 0x00, 0x33, 0x33, 0x66, 0x7E, 0xC0, 0x80 } };
static FONT_GLYPH f_0xB6 = { 8, 8, { 0x7F, 0xDB, 0xDB, 0x7B, 0x1B, 0x1B, 0x1B, 0x00 } };
static FONT_GLYPH f_0xB7 = { 8, 8, { 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0xB8 = { 8, 8, { 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x0C, 0x38 } };
static FONT_GLYPH f_0xB9 = { 8, 8, { 0x18, 0x38, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00 } };
static FONT_GLYPH f_0xBA = { 8, 8, { 0x38, 0x6C, 0x6C, 0x38, 0x00, 0x7C, 0x00, 0x00 } };
static FONT_GLYPH f_0xBB = { 8, 8, { 0x00, 0xCC, 0x66, 0x33, 0x66, 0xCC, 0x00, 0x00 } };
static FONT_GLYPH f_0xBC = { 8, 8, { 0xC3, 0xC6, 0xCC, 0xDB, 0x37, 0x6F, 0xCF, 0x03 } };
static FONT_GLYPH f_0xBD = { 8, 8, { 0xC3, 0xC6, 0xCC, 0xDE, 0x33, 0x66, 0xCC, 0x0F } };
static FONT_GLYPH f_0xBE = { 8, 8, { 0xE1, 0x32, 0xE4, 0x3A, 0xF6, 0x2A, 0x5F, 0x86 } };
static FONT_GLYPH f_0xBF = { 8, 8, { 0x30, 0x00, 0x30, 0x60, 0xC0, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0xC0 = { 8, 8, { 0x18, 0x0C, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x00 } };
static FONT_GLYPH f_0xC1 = { 8, 8, { 0x30, 0x60, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x00 } };
static FONT_GLYPH f_0xC2 = { 8, 8, { 0x7C, 0x82, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x00 } };
static FONT_GLYPH f_0xC3 = { 8, 8, { 0x76, 0xDC, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x00 } };
static FONT_GLYPH f_0xC4 = { 8, 8, { 0xC6, 0x00, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x00 } };
static FONT_GLYPH f_0xC5 = { 8, 8, { 0x10, 0x28, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x00 } };
static FONT_GLYPH f_0xC6 = { 8, 8, { 0x3E, 0x6C, 0xCC, 0xFE, 0xCC, 0xCC, 0xCE, 0x00 } };
static FONT_GLYPH f_0xC7 = { 8, 8, { 0x78, 0xCC, 0xC0, 0xCC, 0x78, 0x18, 0x0C, 0x78 } };
static FONT_GLYPH f_0xC8 = { 8, 8, { 0x30, 0x18, 0xFE, 0xC0, 0xFC, 0xC0, 0xFE, 0x00 } };
static FONT_GLYPH f_0xC9 = { 8, 8, { 0x0C, 0x18, 0xFE, 0xC0, 0xFC, 0xC0, 0xFE, 0x00 } };
static FONT_GLYPH f_0xCA = { 8, 8, { 0x7C, 0x82, 0xFE, 0xC0, 0xFC, 0xC0, 0xFE, 0x00 } };
static FONT_GLYPH f_0xCB = { 8, 8, { 0xC6, 0x00, 0xFE, 0xC0, 0xFC, 0xC0, 0xFE, 0x00 } };
static FONT_GLYPH f_0xCC = { 8, 8, { 0x30, 0x18, 0x3C, 0x18, 0x18, 0x18, 0x3C, 0x00 } };
static FONT_GLYPH f_0xCD = { 8, 8, { 0x0C, 0x18, 0x3C, 0x18, 0x18, 0x18, 0x3C, 0x00 } };
static FONT_GLYPH f_0xCE = { 8, 8, { 0x3C, 0x42, 0x3C, 0x18, 0x18, 0x18, 0x3C, 0x00 } };
static FONT_GLYPH f_0xCF = { 8, 8, { 0x66, 0x00, 0x3C, 0x18, 0x18, 0x18, 0x3C, 0x00 } };
static FONT_GLYPH f_0xD0 = { 8, 8, { 0xF8, 0x6C, 0x66, 0xF6, 0x66, 0x6C, 0xF8, 0x00 } };
static FONT_GLYPH f_0xD1 = { 8, 8, { 0xFC, 0x00, 0xCC, 0xEC, 0xFC, 0xDC, 0xCC, 0x00 } };
static FONT_GLYPH f_0xD2 = { 8, 8, { 0x30, 0x18, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0xD3 = { 8, 8, { 0x18, 0x30, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0xD4 = { 8, 8, { 0x7C, 0x82, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0xD5 = { 8, 8, { 0x76, 0xDC, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0xD6 = { 8, 8, { 0xC6, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0xD7 = { 8, 8, { 0x00, 0xC6, 0x6C, 0x38, 0x6C, 0xC6, 0x00, 0x00 } };
static FONT_GLYPH f_0xD8 = { 8, 8, { 0x3A, 0x6C, 0xCE, 0xD6, 0xE6, 0x6C, 0xB8, 0x00 } };
static FONT_GLYPH f_0xD9 = { 8, 8, { 0x60, 0x30, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0xDA = { 8, 8, { 0x18, 0x30, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0xDB = { 8, 8, { 0x7C, 0x82, 0x00, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0xDC = { 8, 8, { 0xC6, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0xDD = { 8, 8, { 0x0C, 0x18, 0x66, 0x66, 0x3C, 0x18, 0x3C, 0x00 } };
static FONT_GLYPH f_0xDE = { 8, 8, { 0xE0, 0x60, 0x7C, 0x66, 0x66, 0x7C, 0x60, 0xF0 } };
static FONT_GLYPH f_0xDF = { 8, 8, { 0x78, 0xCC, 0xCC, 0xD8, 0xCC, 0xC6, 0xCC, 0x00 } };
static FONT_GLYPH f_0xE0 = { 8, 8, { 0xE0, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0xE1 = { 8, 8, { 0x1C, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0xE2 = { 8, 8, { 0x7E, 0xC3, 0x3C, 0x06, 0x3E, 0x66, 0x3F, 0x00 } };
static FONT_GLYPH f_0xE3 = { 8, 8, { 0x76, 0xDC, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0xE4 = { 8, 8, { 0xCC, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0xE5 = { 8, 8, { 0x30, 0x30, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0xE6 = { 8, 8, { 0x00, 0x00, 0x7F, 0x0C, 0x7F, 0xCC, 0x7F, 0x00 } };
static FONT_GLYPH f_0xE7 = { 8, 8, { 0x00, 0x00, 0x78, 0xC0, 0xC0, 0x78, 0x0C, 0x38 } };
static FONT_GLYPH f_0xE8 = { 8, 8, { 0xE0, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 } };
static FONT_GLYPH f_0xE9 = { 8, 8, { 0x1C, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 } };
static FONT_GLYPH f_0xEA = { 8, 8, { 0x7E, 0xC3, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00 } };
static FONT_GLYPH f_0xEB = { 8, 8, { 0xCC, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 } };
static FONT_GLYPH f_0xEC = { 8, 8, { 0xE0, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0xED = { 8, 8, { 0x38, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0xEE = { 8, 8, { 0x7C, 0xC6, 0x38, 0x18, 0x18, 0x18, 0x3C, 0x00 } };
static FONT_GLYPH f_0xEF = { 8, 8, { 0xCC, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0xF0 = { 8, 8, { 0x08, 0x3C, 0x08, 0x7C, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0xF1 = { 8, 8, { 0x00, 0xF8, 0x00, 0xF8, 0xCC, 0xCC, 0xCC, 0x00 } };
static FONT_GLYPH f_0xF2 = { 8, 8, { 0x00, 0xE0, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0xF3 = { 8, 8, { 0x00, 0x1C, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0xF4 = { 8, 8, { 0x78, 0xCC, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0xF5 = { 8, 8, { 0x76, 0xDC, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0xF6 = { 8, 8, { 0x00, 0xCC, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0xF7 = { 8, 8, { 0x30, 0x30, 0x00, 0xFC, 0x00, 0x30, 0x30, 0x00 } };
static FONT_GLYPH f_0xF8 = { 8, 8, { 0x00, 0x02, 0x7C, 0xCE, 0xD6, 0xE6, 0x7C, 0x80 } };
static FONT_GLYPH f_0xF9 = { 8, 8, { 0x00, 0xE0, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0xFA = { 8, 8, { 0x00, 0x1C, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0xFB = { 8, 8, { 0x78, 0xCC, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0xFC = { 8, 8, { 0x00, 0xCC, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0xFD = { 8, 8, { 0x18, 0x30, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 } };
static FONT_GLYPH f_0xFE = { 8, 8, { 0xF0, 0x60, 0x7C, 0x66, 0x7C, 0x60, 0xF0, 0x00 } };
static FONT_GLYPH f_0xFF = { 8, 8, { 0x00, 0xCC, 0x00, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 } };



/* list of Latin-1 characters */
static void *latin1_data[] =
{
	    &f_0xA1, &f_0xA2, &f_0xA3, &f_0xA4, &f_0xA5, &f_0xA6, &f_0xA7, 
   &f_0xA8, &f_0xA9, &f_0xAA, &f_0xAB, &f_0xAC, &f_0xAD, &f_0xAE, &f_0xAF,
   &f_0xB0, &f_0xB1, &f_0xB2, &f_0xB3, &f_0xB4, &f_0xB5, &f_0xB6, &f_0xB7, 
   &f_0xB8, &f_0xB9, &f_0xBA, &f_0xBB, &f_0xBC, &f_0xBD, &f_0xBE, &f_0xBF,
   &f_0xC0, &f_0xC1, &f_0xC2, &f_0xC3, &f_0xC4, &f_0xC5, &f_0xC6, &f_0xC7, 
   &f_0xC8, &f_0xC9, &f_0xCA, &f_0xCB, &f_0xCC, &f_0xCD, &f_0xCE, &f_0xCF,
   &f_0xD0, &f_0xD1, &f_0xD2, &f_0xD3, &f_0xD4, &f_0xD5, &f_0xD6, &f_0xD7, 
   &f_0xD8, &f_0xD9, &f_0xDA, &f_0xDB, &f_0xDC, &f_0xDD, &f_0xDE, &f_0xDF,
   &f_0xE0, &f_0xE1, &f_0xE2, &f_0xE3, &f_0xE4, &f_0xE5, &f_0xE6, &f_0xE7, 
   &f_0xE8, &f_0xE9, &f_0xEA, &f_0xEB, &f_0xEC, &f_0xED, &f_0xEE, &f_0xEF,
   &f_0xF0, &f_0xF1, &f_0xF2, &f_0xF3, &f_0xF4, &f_0xF5, &f_0xF6, &f_0xF7, 
   &f_0xF8, &f_0xF9, &f_0xFA, &f_0xFB, &f_0xFC, &f_0xFD, &f_0xFE, &f_0xFF
};



/* Extended-A characters (0x100 to 0x17F) */
static FONT_GLYPH f_0x100 = { 8, 8, { 0xFE, 0x00, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x00 } };
static FONT_GLYPH f_0x101 = { 8, 8, { 0xFC, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0x102 = { 8, 8, { 0x82, 0x7C, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x00 } };
static FONT_GLYPH f_0x103 = { 8, 8, { 0xC3, 0x7E, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0x104 = { 8, 8, { 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x1C, 0x30, 0x1E } };
static FONT_GLYPH f_0x105 = { 8, 8, { 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x7E, 0x30, 0x1C } };
static FONT_GLYPH f_0x106 = { 8, 8, { 0x0C, 0x18, 0x7C, 0xC6, 0xC0, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x107 = { 8, 8, { 0x1C, 0x00, 0x78, 0xCC, 0xC0, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x108 = { 8, 8, { 0x7C, 0x82, 0x7C, 0xC6, 0xC0, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x109 = { 8, 8, { 0x7E, 0xC3, 0x78, 0xCC, 0xC0, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x10A = { 8, 8, { 0x10, 0x00, 0x7C, 0xC6, 0xC0, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x10B = { 8, 8, { 0x10, 0x00, 0x78, 0xCC, 0xC0, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x10C = { 8, 8, { 0x6C, 0x38, 0x7C, 0xC6, 0xC0, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x10D = { 8, 8, { 0x6C, 0x38, 0x78, 0xCC, 0xC0, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x10E = { 8, 8, { 0x6C, 0x38, 0xF8, 0x66, 0x66, 0x66, 0xF8, 0x00 } };
static FONT_GLYPH f_0x10F = { 8, 8, { 0xBC, 0x4C, 0x0C, 0x7C, 0xCC, 0xCC, 0x76, 0x00 } };
static FONT_GLYPH f_0x110 = { 8, 8, { 0xF8, 0x6C, 0x66, 0xF6, 0x66, 0x6C, 0xF8, 0x00 } };
static FONT_GLYPH f_0x111 = { 8, 8, { 0x08, 0x3C, 0x08, 0x7C, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x112 = { 8, 8, { 0xFE, 0x00, 0xFE, 0xC0, 0xFC, 0xC0, 0xFE, 0x00 } };
static FONT_GLYPH f_0x113 = { 8, 8, { 0xFC, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 } };
static FONT_GLYPH f_0x114 = { 8, 8, { 0x6C, 0x38, 0xFE, 0xC0, 0xFC, 0xC0, 0xFE, 0x00 } };
static FONT_GLYPH f_0x115 = { 8, 8, { 0x6C, 0x38, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 } };
static FONT_GLYPH f_0x116 = { 8, 8, { 0x10, 0x00, 0xFE, 0xC0, 0xFC, 0xC0, 0xFE, 0x00 } };
static FONT_GLYPH f_0x117 = { 8, 8, { 0x10, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 } };
static FONT_GLYPH f_0x118 = { 8, 8, { 0xFE, 0xC0, 0xFC, 0xC0, 0xFE, 0x18, 0x30, 0x1C } };
static FONT_GLYPH f_0x119 = { 8, 8, { 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x38, 0x0C } };
static FONT_GLYPH f_0x11A = { 8, 8, { 0x6C, 0x38, 0xFE, 0xC0, 0xFC, 0xC0, 0xFE, 0x00 } };
static FONT_GLYPH f_0x11B = { 8, 8, { 0x6C, 0x38, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 } };
static FONT_GLYPH f_0x11C = { 8, 8, { 0x7C, 0x82, 0x7C, 0xC6, 0xC0, 0xCE, 0x7E, 0x00 } };
static FONT_GLYPH f_0x11D = { 8, 8, { 0x7E, 0xC3, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 } };
static FONT_GLYPH f_0x11E = { 8, 8, { 0x82, 0x7C, 0x7C, 0xC6, 0xC0, 0xCE, 0x7E, 0x00 } };
static FONT_GLYPH f_0x11F = { 8, 8, { 0xC3, 0x7E, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 } };
static FONT_GLYPH f_0x120 = { 8, 8, { 0x10, 0x00, 0x7C, 0xC6, 0xC0, 0xCE, 0x7E, 0x00 } };
static FONT_GLYPH f_0x121 = { 8, 8, { 0x10, 0x00, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 } };
static FONT_GLYPH f_0x122 = { 8, 8, { 0x7C, 0xC6, 0xC0, 0xCE, 0x7E, 0x18, 0x0C, 0x78 } };
static FONT_GLYPH f_0x123 = { 8, 8, { 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8, 0x0C, 0x38 } };
static FONT_GLYPH f_0x124 = { 8, 8, { 0x78, 0x84, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0x00 } };
static FONT_GLYPH f_0x125 = { 8, 8, { 0xEE, 0x7B, 0x6C, 0x76, 0x66, 0x66, 0xE6, 0x00 } };
static FONT_GLYPH f_0x126 = { 8, 8, { 0xCC, 0xFE, 0xCC, 0xFC, 0xCC, 0xCC, 0xCC, 0x00 } };
static FONT_GLYPH f_0x127 = { 8, 8, { 0xE0, 0xFE, 0x6C, 0x76, 0x66, 0x66, 0xE6, 0x00 } };
static FONT_GLYPH f_0x128 = { 8, 8, { 0x76, 0xDC, 0x78, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x129 = { 8, 8, { 0x76, 0xDC, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x12A = { 8, 8, { 0x78, 0x00, 0x78, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x12B = { 8, 8, { 0x78, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x12C = { 8, 8, { 0x84, 0x78, 0x78, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x12D = { 8, 8, { 0xC6, 0x7C, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x12E = { 8, 8, { 0x78, 0x30, 0x30, 0x30, 0x78, 0x18, 0x30, 0x1E } };
static FONT_GLYPH f_0x12F = { 8, 8, { 0x30, 0x00, 0x70, 0x30, 0x30, 0x78, 0x30, 0x1C } };
static FONT_GLYPH f_0x130 = { 8, 8, { 0x10, 0x00, 0x78, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x131 = { 8, 8, { 0x00, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x132 = { 8, 8, { 0xEE, 0x42, 0x42, 0x42, 0x52, 0x52, 0xEC, 0x00 } };
static FONT_GLYPH f_0x133 = { 8, 8, { 0x42, 0x00, 0xC6, 0x42, 0x42, 0x42, 0xE2, 0x0C } };
static FONT_GLYPH f_0x134 = { 8, 8, { 0x7C, 0x82, 0x0C, 0x0C, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x135 = { 8, 8, { 0x7C, 0xC6, 0x1C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78 } };
static FONT_GLYPH f_0x136 = { 8, 8, { 0xE6, 0x6C, 0x78, 0x6C, 0xE6, 0x30, 0x18, 0xF0 } };
static FONT_GLYPH f_0x137 = { 8, 8, { 0xE0, 0x66, 0x6C, 0x78, 0x6C, 0xE6, 0x30, 0xE0 } };
static FONT_GLYPH f_0x138 = { 8, 8, { 0x00, 0x00, 0xE6, 0x6C, 0x78, 0x6C, 0xE6, 0x00 } };
static FONT_GLYPH f_0x139 = { 8, 8, { 0xF3, 0x66, 0x60, 0x60, 0x62, 0x66, 0xFE, 0x00 } };
static FONT_GLYPH f_0x13A = { 8, 8, { 0x73, 0x36, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x13B = { 8, 8, { 0xF0, 0x60, 0x62, 0x66, 0xFE, 0x18, 0x0C, 0x78 } };
static FONT_GLYPH f_0x13C = { 8, 8, { 0x70, 0x30, 0x30, 0x30, 0x30, 0x78, 0x0C, 0x38 } };
static FONT_GLYPH f_0x13D = { 8, 8, { 0xF5, 0x66, 0x60, 0x60, 0x62, 0x66, 0xFE, 0x00 } };
static FONT_GLYPH f_0x13E = { 8, 8, { 0x75, 0x36, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x13F = { 8, 8, { 0xF0, 0x60, 0x64, 0x60, 0x62, 0x66, 0xFE, 0x00 } };
static FONT_GLYPH f_0x140 = { 8, 8, { 0x70, 0x30, 0x30, 0x32, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x141 = { 8, 8, { 0xF0, 0x60, 0x70, 0x60, 0xE2, 0x66, 0xFE, 0x00 } };
static FONT_GLYPH f_0x142 = { 8, 8, { 0x70, 0x30, 0x38, 0x30, 0x70, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x143 = { 8, 8, { 0x0C, 0x18, 0xCC, 0xEC, 0xFC, 0xDC, 0xCC, 0x00 } };
static FONT_GLYPH f_0x144 = { 8, 8, { 0x1C, 0x00, 0xB8, 0xCC, 0xCC, 0xCC, 0xCC, 0x00 } };
static FONT_GLYPH f_0x145 = { 8, 8, { 0xCC, 0xEC, 0xFC, 0xDC, 0xCC, 0x30, 0x18, 0xF0 } };
static FONT_GLYPH f_0x146 = { 8, 8, { 0x00, 0xB8, 0xCC, 0xCC, 0xCC, 0xCC, 0x30, 0xE0 } };
static FONT_GLYPH f_0x147 = { 8, 8, { 0x6C, 0x38, 0xCC, 0xEC, 0xFC, 0xDC, 0xCC, 0x00 } };
static FONT_GLYPH f_0x148 = { 8, 8, { 0x6C, 0x38, 0xB8, 0xCC, 0xCC, 0xCC, 0xCC, 0x00 } };
static FONT_GLYPH f_0x149 = { 8, 8, { 0xC0, 0x80, 0x5C, 0x66, 0x66, 0x66, 0x66, 0x00 } };
static FONT_GLYPH f_0x14A = { 8, 8, { 0x00, 0xCC, 0xEC, 0xFC, 0xDC, 0xCC, 0x0C, 0x38 } };
static FONT_GLYPH f_0x14B = { 8, 8, { 0x00, 0xB8, 0xCC, 0xCC, 0xCC, 0xCC, 0x0C, 0x38 } };
static FONT_GLYPH f_0x14C = { 8, 8, { 0xFE, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x14D = { 8, 8, { 0x00, 0xFC, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x14E = { 8, 8, { 0x6C, 0x38, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x14F = { 8, 8, { 0x6C, 0x38, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x150 = { 8, 8, { 0x36, 0x6C, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x151 = { 8, 8, { 0x36, 0x6C, 0x00, 0x78, 0xCC, 0xCC, 0x78, 0x00 } };
static FONT_GLYPH f_0x152 = { 8, 8, { 0x7E, 0xDA, 0x88, 0x8C, 0x88, 0xDA, 0x7E, 0x00 } };
static FONT_GLYPH f_0x153 = { 8, 8, { 0x00, 0x00, 0x6C, 0x92, 0x9E, 0x90, 0x6C, 0x00 } };
static FONT_GLYPH f_0x154 = { 8, 8, { 0x0C, 0x18, 0xFC, 0x66, 0x7C, 0x6C, 0xE6, 0x00 } };
static FONT_GLYPH f_0x155 = { 8, 8, { 0x0C, 0x18, 0xDC, 0x76, 0x62, 0x60, 0xF0, 0x00 } };
static FONT_GLYPH f_0x156 = { 8, 8, { 0xFC, 0x66, 0x7C, 0x6C, 0xE6, 0x30, 0x18, 0xF0 } };
static FONT_GLYPH f_0x157 = { 8, 8, { 0x00, 0xDC, 0x76, 0x62, 0x60, 0xF0, 0x30, 0xE0 } };
static FONT_GLYPH f_0x158 = { 8, 8, { 0x6C, 0x38, 0xFC, 0x66, 0x7C, 0x6C, 0xE6, 0x00 } };
static FONT_GLYPH f_0x159 = { 8, 8, { 0x6C, 0x38, 0xDC, 0x76, 0x62, 0x60, 0xF0, 0x00 } };
static FONT_GLYPH f_0x15A = { 8, 8, { 0x0C, 0x18, 0x7C, 0xE0, 0x78, 0x0E, 0x7C, 0x00 } };
static FONT_GLYPH f_0x15B = { 8, 8, { 0x0C, 0x18, 0x7C, 0xC0, 0x70, 0x1C, 0xF8, 0x00 } };
static FONT_GLYPH f_0x15C = { 8, 8, { 0x7C, 0x82, 0x7C, 0xE0, 0x78, 0x0E, 0x7C, 0x00 } };
static FONT_GLYPH f_0x15D = { 8, 8, { 0x7C, 0xC6, 0x7C, 0xC0, 0x70, 0x1C, 0xF8, 0x00 } };
static FONT_GLYPH f_0x15E = { 8, 8, { 0x7C, 0xE0, 0x78, 0x0E, 0x7C, 0x18, 0x0C, 0x78 } };
static FONT_GLYPH f_0x15F = { 8, 8, { 0x00, 0x7C, 0xC0, 0x70, 0x1C, 0xF8, 0x0C, 0x38 } };
static FONT_GLYPH f_0x160 = { 8, 8, { 0x6C, 0x38, 0x7C, 0xE0, 0x78, 0x0E, 0x7C, 0x00 } };
static FONT_GLYPH f_0x161 = { 8, 8, { 0x6C, 0x38, 0x7C, 0xC0, 0x70, 0x1C, 0xF8, 0x00 } };
static FONT_GLYPH f_0x162 = { 8, 8, { 0xFC, 0x30, 0x30, 0x30, 0x78, 0x18, 0x0C, 0x38 } };
static FONT_GLYPH f_0x163 = { 8, 8, { 0x10, 0x30, 0xFC, 0x30, 0x34, 0x18, 0x0C, 0x38 } };
static FONT_GLYPH f_0x164 = { 8, 8, { 0x6C, 0x38, 0xFC, 0x30, 0x30, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x165 = { 8, 8, { 0x12, 0x3A, 0xFC, 0x30, 0x30, 0x34, 0x18, 0x00 } };
static FONT_GLYPH f_0x166 = { 8, 8, { 0xFC, 0xB4, 0x30, 0x30, 0xFC, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x167 = { 8, 8, { 0x10, 0x30, 0xFC, 0x30, 0xFC, 0x34, 0x18, 0x00 } };
static FONT_GLYPH f_0x168 = { 8, 8, { 0x76, 0xDC, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x169 = { 8, 8, { 0x76, 0xDC, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0x16A = { 8, 8, { 0xFE, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x16B = { 8, 8, { 0x00, 0xFE, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0x16C = { 8, 8, { 0x6C, 0x38, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x16D = { 8, 8, { 0x6C, 0x38, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0x16E = { 8, 8, { 0x38, 0x6C, 0xFE, 0xD6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x16F = { 8, 8, { 0x38, 0x6C, 0x38, 0xDC, 0xCC, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0x170 = { 8, 8, { 0x36, 0x6C, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00 } };
static FONT_GLYPH f_0x171 = { 8, 8, { 0x36, 0x6C, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x00 } };
static FONT_GLYPH f_0x172 = { 8, 8, { 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x30, 0x60, 0x3C } };
static FONT_GLYPH f_0x173 = { 8, 8, { 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x7E, 0x18, 0x0E } };
static FONT_GLYPH f_0x174 = { 8, 8, { 0x7C, 0x82, 0xC6, 0xC6, 0xD6, 0xFE, 0x6C, 0x00 } };
static FONT_GLYPH f_0x175 = { 8, 8, { 0x7C, 0xC6, 0x00, 0xC6, 0xD6, 0xFE, 0x6C, 0x00 } };
static FONT_GLYPH f_0x176 = { 8, 8, { 0x7C, 0x82, 0xCC, 0xCC, 0x78, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x177 = { 8, 8, { 0x7C, 0xC6, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 } };
static FONT_GLYPH f_0x178 = { 8, 8, { 0xCC, 0x00, 0xCC, 0xCC, 0x78, 0x30, 0x78, 0x00 } };
static FONT_GLYPH f_0x179 = { 8, 8, { 0x0C, 0x18, 0xFE, 0x8C, 0x18, 0x32, 0xFE, 0x00 } };
static FONT_GLYPH f_0x17A = { 8, 8, { 0x0C, 0x18, 0xFC, 0x98, 0x30, 0x64, 0xFC, 0x00 } };
static FONT_GLYPH f_0x17B = { 8, 8, { 0x10, 0x00, 0xFE, 0x8C, 0x18, 0x32, 0xFE, 0x00 } };
static FONT_GLYPH f_0x17C = { 8, 8, { 0x10, 0x00, 0xFC, 0x98, 0x30, 0x64, 0xFC, 0x00 } };
static FONT_GLYPH f_0x17D = { 8, 8, { 0x6C, 0x38, 0xFE, 0x8C, 0x18, 0x32, 0xFE, 0x00 } };
static FONT_GLYPH f_0x17E = { 8, 8, { 0x6C, 0x38, 0xFC, 0x98, 0x30, 0x64, 0xFC, 0x00 } };
static FONT_GLYPH f_0x17F = { 8, 8, { 0x38, 0x6C, 0x64, 0xE0, 0x60, 0x60, 0xE0, 0x00 } };



/* list of Extended-A characters */
static void *extended_a_data[] =
{
   &f_0x100, &f_0x101, &f_0x102, &f_0x103, &f_0x104, &f_0x105, &f_0x106, &f_0x107, 
   &f_0x108, &f_0x109, &f_0x10A, &f_0x10B, &f_0x10C, &f_0x10D, &f_0x10E, &f_0x10F,
   &f_0x110, &f_0x111, &f_0x112, &f_0x113, &f_0x114, &f_0x115, &f_0x116, &f_0x117, 
   &f_0x118, &f_0x119, &f_0x11A, &f_0x11B, &f_0x11C, &f_0x11D, &f_0x11E, &f_0x11F,
   &f_0x120, &f_0x121, &f_0x122, &f_0x123, &f_0x124, &f_0x125, &f_0x126, &f_0x127, 
   &f_0x128, &f_0x129, &f_0x12A, &f_0x12B, &f_0x12C, &f_0x12D, &f_0x12E, &f_0x12F,
   &f_0x130, &f_0x131, &f_0x132, &f_0x133, &f_0x134, &f_0x135, &f_0x136, &f_0x137, 
   &f_0x138, &f_0x139, &f_0x13A, &f_0x13B, &f_0x13C, &f_0x13D, &f_0x13E, &f_0x13F,
   &f_0x140, &f_0x141, &f_0x142, &f_0x143, &f_0x144, &f_0x145, &f_0x146, &f_0x147, 
   &f_0x148, &f_0x149, &f_0x14A, &f_0x14B, &f_0x14C, &f_0x14D, &f_0x14E, &f_0x14F,
   &f_0x150, &f_0x151, &f_0x152, &f_0x153, &f_0x154, &f_0x155, &f_0x156, &f_0x157, 
   &f_0x158, &f_0x159, &f_0x15A, &f_0x15B, &f_0x15C, &f_0x15D, &f_0x15E, &f_0x15F,
   &f_0x160, &f_0x161, &f_0x162, &f_0x163, &f_0x164, &f_0x165, &f_0x166, &f_0x167, 
   &f_0x168, &f_0x169, &f_0x16A, &f_0x16B, &f_0x16C, &f_0x16D, &f_0x16E, &f_0x16F,
   &f_0x170, &f_0x171, &f_0x172, &f_0x173, &f_0x174, &f_0x175, &f_0x176, &f_0x177, 
   &f_0x178, &f_0x179, &f_0x17A, &f_0x17B, &f_0x17C, &f_0x17D, &f_0x17E, &f_0x17F
};



/* linked list of character ranges */
static FONT extended_a_font = 
{
   TRUE,                /* mono */
   0x100,               /* start character */
   0x17F,               /* end character */
   extended_a_data,     /* glyph table */
   NULL,                /* next range pointer */
   NULL,                /* render hook */
   NULL,                /* width hook */
   NULL                 /* height hook */
};



static FONT latin1_font = 
{
   TRUE,                /* mono */
   0xA1,                /* start character */
   0xFF,                /* end character */
   latin1_data,         /* glyph table */
   &extended_a_font,    /* next range pointer */
   NULL,                /* render hook */
   NULL,                /* width hook */
   NULL                 /* height hook */
};



FONT _default_font = 
{ 
   TRUE,                /* mono */
   0x20,                /* start character */
   0x7F,                /* end character */
   ascii_data,          /* glyph table */
   &latin1_font,        /* next range pointer */
   NULL,                /* render hook */
   NULL,                /* width hook */
   NULL                 /* height hook */
};

