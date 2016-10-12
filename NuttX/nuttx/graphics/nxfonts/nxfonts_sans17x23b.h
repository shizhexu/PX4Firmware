/****************************************************************************
 * graphics/nxfonts/nxfonts_serif17x23b.h
 *
 *   Copyright (C) 2011-2012 NX Engineering, S.A., All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT}
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING}
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __GRAPHICS_NXFONTS_NXFONTS_SANS17X23B_H
#define __GRAPHICS_NXFONTS_NXFONTS_SANS17X23B_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-Processor Definitions
 ****************************************************************************/

/* Font ID */

#define NXFONT_ID         FONTID_SANS17X23B

/* Ranges of 7-bit and 8-bit fonts */

#define NXFONT_MIN7BIT    33
#define NXFONT_MAX7BIT    126

#define NXFONT_MIN8BIT    161
#define NXFONT_MAX8BIT    255
 
/* Maximum height and width of any glyph in the set */

#define NXFONT_MAXHEIGHT  23
#define NXFONT_MAXWIDTH   17

/* The width of a space */

#define NXFONT_SPACEWIDTH 4

/* exclam (33) */
#define NXFONT_METRICS_33 {1, 2, 11, 1, 6, 0}
#define NXFONT_BITMAP_33 {0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x0, 0xc0, 0xc0}

/* quotedbl (34) */
#define NXFONT_METRICS_34 {1, 5, 3, 1, 6, 0}
#define NXFONT_BITMAP_34 {0xd8, 0xd8, 0x90}

/* numbersign (35) */
#define NXFONT_METRICS_35 {2, 9, 10, 0, 7, 0}
#define NXFONT_BITMAP_35 {0x1b, 0x0, 0x1b, 0x0, 0x1b, 0x0, 0x7f, 0x80, 0x36, 0x0, 0x36, 0x0, 0xff, 0x0, 0x6c, 0x0, 0x6c, 0x0, 0x6c, 0x0}

/* dollar (36) */
#define NXFONT_METRICS_36 {1, 7, 14, 0, 5, 0}
#define NXFONT_BITMAP_36 {0x10, 0x7c, 0xd6, 0xd6, 0xd0, 0xf0, 0x78, 0x1c, 0x16, 0xd6, 0xd6, 0x7c, 0x10, 0x10}

/* percent (37) */
#define NXFONT_METRICS_37 {2, 12, 11, 0, 6, 0}
#define NXFONT_BITMAP_37 {0x78, 0x40, 0xcc, 0xc0, 0xcd, 0x80, 0x79, 0x0, 0x3, 0x0, 0x6, 0x0, 0x4, 0x0, 0xd, 0xe0, 0xb, 0x30, 0x1b, 0x30, 0x11, 0xe0}

/* ampersand (38) */
#define NXFONT_METRICS_38 {2, 9, 10, 1, 7, 0}
#define NXFONT_BITMAP_38 {0x38, 0x0, 0x6c, 0x0, 0x6c, 0x0, 0x38, 0x0, 0x73, 0x0, 0xfb, 0x0, 0xce, 0x0, 0xc6, 0x0, 0xcf, 0x0, 0x7d, 0x80}

/* quotesingle (39) */
#define NXFONT_METRICS_39 {1, 2, 3, 1, 6, 0}
#define NXFONT_BITMAP_39 {0xc0, 0xc0, 0x80}

/* parenleft (40) */
#define NXFONT_METRICS_40 {1, 4, 14, 1, 6, 0}
#define NXFONT_BITMAP_40 {0x30, 0x60, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x60, 0x60, 0x30}

/* parenright (41) */
#define NXFONT_METRICS_41 {1, 4, 14, 0, 6, 0}
#define NXFONT_BITMAP_41 {0xc0, 0x60, 0x60, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x60, 0x60, 0xc0}

/* asterisk (42) */
#define NXFONT_METRICS_42 {1, 5, 4, 0, 6, 0}
#define NXFONT_BITMAP_42 {0x20, 0xf8, 0x70, 0xd8}

/* plus (43) */
#define NXFONT_METRICS_43 {1, 8, 7, 0, 9, 0}
#define NXFONT_BITMAP_43 {0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18}

/* comma (44) */
#define NXFONT_METRICS_44 {1, 3, 3, 0, 15, 0}
#define NXFONT_BITMAP_44 {0x60, 0x60, 0xc0}

/* hyphen (45) */
#define NXFONT_METRICS_45 {1, 3, 1, 0, 12, 0}
#define NXFONT_BITMAP_45 {0xe0}

/* period (46) */
#define NXFONT_METRICS_46 {1, 2, 2, 1, 15, 0}
#define NXFONT_BITMAP_46 {0xc0, 0xc0}

/* slash (47) */
#define NXFONT_METRICS_47 {1, 4, 11, 0, 6, 0}
#define NXFONT_BITMAP_47 {0x10, 0x10, 0x30, 0x20, 0x20, 0x60, 0x40, 0x40, 0xc0, 0x80, 0x80}

/* zero (48) */
#define NXFONT_METRICS_48 {1, 7, 11, 0, 6, 0}
#define NXFONT_BITMAP_48 {0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x6c, 0x38}

/* one (49) */
#define NXFONT_METRICS_49 {1, 4, 11, 1, 6, 0}
#define NXFONT_BITMAP_49 {0x30, 0xf0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30}

/* two (50) */
#define NXFONT_METRICS_50 {1, 7, 11, 0, 6, 0}
#define NXFONT_BITMAP_50 {0x7c, 0xc6, 0xc6, 0x6, 0xe, 0xc, 0x18, 0x30, 0x60, 0xc0, 0xfe}

/* three (51) */
#define NXFONT_METRICS_51 {1, 7, 11, 0, 6, 0}
#define NXFONT_BITMAP_51 {0x7c, 0xc6, 0xc6, 0x6, 0x6, 0x3c, 0x6, 0x6, 0xc6, 0xc6, 0x7c}

/* four (52) */
#define NXFONT_METRICS_52 {1, 8, 11, 0, 6, 0}
#define NXFONT_BITMAP_52 {0x6, 0xe, 0x1e, 0x36, 0x66, 0xc6, 0xc6, 0xff, 0x6, 0x6, 0x6}

/* five (53) */
#define NXFONT_METRICS_53 {1, 7, 11, 0, 6, 0}
#define NXFONT_BITMAP_53 {0x7e, 0x60, 0x60, 0xc0, 0xfc, 0xe, 0x6, 0x6, 0xc6, 0xcc, 0x78}

/* six (54) */
#define NXFONT_METRICS_54 {1, 7, 11, 0, 6, 0}
#define NXFONT_BITMAP_54 {0x3c, 0x66, 0x66, 0xc0, 0xdc, 0xe6, 0xc6, 0xc6, 0xc6, 0xc6, 0x7c}

/* seven (55) */
#define NXFONT_METRICS_55 {1, 7, 11, 0, 6, 0}
#define NXFONT_BITMAP_55 {0xfe, 0x6, 0xc, 0xc, 0x18, 0x18, 0x30, 0x30, 0x60, 0x60, 0x60}

/* eight (56) */
#define NXFONT_METRICS_56 {1, 7, 11, 0, 6, 0}
#define NXFONT_BITMAP_56 {0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 0x7c}

/* nine (57) */
#define NXFONT_METRICS_57 {1, 7, 11, 0, 6, 0}
#define NXFONT_BITMAP_57 {0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x7e, 0x6, 0xc6, 0xcc, 0x78}

/* colon (58) */
#define NXFONT_METRICS_58 {1, 2, 8, 2, 9, 0}
#define NXFONT_BITMAP_58 {0xc0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0xc0, 0xc0}

/* semicolon (59) */
#define NXFONT_METRICS_59 {1, 3, 9, 1, 9, 0}
#define NXFONT_BITMAP_59 {0x60, 0x60, 0x0, 0x0, 0x0, 0x0, 0x60, 0x60, 0xc0}

/* less (60) */
#define NXFONT_METRICS_60 {1, 6, 5, 1, 10, 0}
#define NXFONT_BITMAP_60 {0x1c, 0x70, 0xc0, 0x70, 0x1c}

/* equal (61) */
#define NXFONT_METRICS_61 {1, 7, 3, 1, 11, 0}
#define NXFONT_BITMAP_61 {0xfe, 0x0, 0xfe}

/* greater (62) */
#define NXFONT_METRICS_62 {1, 6, 5, 1, 10, 0}
#define NXFONT_BITMAP_62 {0xe0, 0x38, 0xc, 0x38, 0xe0}

/* question (63) */
#define NXFONT_METRICS_63 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_63 {0x7c, 0xc6, 0xc6, 0x6, 0xc, 0x18, 0x30, 0x30, 0x0, 0x30, 0x30}

/* at (64) */
#define NXFONT_METRICS_64 {2, 13, 12, 0, 6, 0}
#define NXFONT_BITMAP_64 {0xf, 0x80, 0x38, 0xe0, 0x70, 0x70, 0x66, 0xb0, 0xcd, 0x98, 0xd9, 0x98, 0xdb, 0x18, 0xdb, 0x30, 0xce, 0xe0, 0x60, 0x0, 0x31, 0x80, 0x1f, 0x0}

/* A (65) */
#define NXFONT_METRICS_65 {2, 10, 11, 0, 6, 0}
#define NXFONT_BITMAP_65 {0xc, 0x0, 0xc, 0x0, 0x1e, 0x0, 0x12, 0x0, 0x33, 0x0, 0x33, 0x0, 0x61, 0x80, 0x7f, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0}

/* B (66) */
#define NXFONT_METRICS_66 {1, 8, 11, 1, 6, 0}
#define NXFONT_BITMAP_66 {0xfe, 0xc7, 0xc3, 0xc3, 0xc6, 0xfc, 0xc6, 0xc3, 0xc3, 0xc7, 0xfe}

/* C (67) */
#define NXFONT_METRICS_67 {2, 9, 11, 1, 6, 0}
#define NXFONT_BITMAP_67 {0x1f, 0x0, 0x7b, 0x80, 0x60, 0x80, 0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0x60, 0x80, 0x7b, 0x80, 0x1f, 0x0}

/* D (68) */
#define NXFONT_METRICS_68 {2, 9, 11, 1, 6, 0}
#define NXFONT_BITMAP_68 {0xfc, 0x0, 0xc7, 0x0, 0xc3, 0x0, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc3, 0x0, 0xc7, 0x0, 0xfc, 0x0}

/* E (69) */
#define NXFONT_METRICS_69 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_69 {0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe}

/* F (70) */
#define NXFONT_METRICS_70 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_70 {0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* G (71) */
#define NXFONT_METRICS_71 {2, 9, 11, 1, 6, 0}
#define NXFONT_BITMAP_71 {0x1f, 0x0, 0x7b, 0x80, 0x60, 0x80, 0xc0, 0x0, 0xc0, 0x0, 0xc7, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0x61, 0x80, 0x7b, 0x80, 0x1e, 0x80}

/* H (72) */
#define NXFONT_METRICS_72 {1, 8, 11, 1, 6, 0}
#define NXFONT_BITMAP_72 {0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3}

/* I (73) */
#define NXFONT_METRICS_73 {1, 2, 11, 1, 6, 0}
#define NXFONT_BITMAP_73 {0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* J (74) */
#define NXFONT_METRICS_74 {1, 7, 11, 0, 6, 0}
#define NXFONT_BITMAP_74 {0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0xc6, 0xc6, 0xee, 0x7c}

/* K (75) */
#define NXFONT_METRICS_75 {2, 9, 11, 1, 6, 0}
#define NXFONT_BITMAP_75 {0xc3, 0x0, 0xc6, 0x0, 0xcc, 0x0, 0xd8, 0x0, 0xf0, 0x0, 0xf0, 0x0, 0xd8, 0x0, 0xcc, 0x0, 0xc6, 0x0, 0xc3, 0x0, 0xc1, 0x80}

/* L (76) */
#define NXFONT_METRICS_76 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_76 {0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe}

/* M (77) */
#define NXFONT_METRICS_77 {2, 11, 11, 1, 6, 0}
#define NXFONT_BITMAP_77 {0xc0, 0x60, 0xc0, 0x60, 0xe0, 0xe0, 0xe0, 0xe0, 0xf1, 0xe0, 0xd1, 0x60, 0xd1, 0x60, 0xdb, 0x60, 0xca, 0x60, 0xce, 0x60, 0xc4, 0x60}

/* N (78) */
#define NXFONT_METRICS_78 {2, 9, 11, 1, 6, 0}
#define NXFONT_BITMAP_78 {0xc1, 0x80, 0xe1, 0x80, 0xe1, 0x80, 0xd1, 0x80, 0xd9, 0x80, 0xc9, 0x80, 0xcd, 0x80, 0xc5, 0x80, 0xc3, 0x80, 0xc3, 0x80, 0xc1, 0x80}

/* O (79) */
#define NXFONT_METRICS_79 {2, 10, 11, 1, 6, 0}
#define NXFONT_BITMAP_79 {0x1e, 0x0, 0x73, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x61, 0x80, 0x73, 0x80, 0x1e, 0x0}

/* P (80) */
#define NXFONT_METRICS_80 {1, 8, 11, 1, 6, 0}
#define NXFONT_BITMAP_80 {0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* Q (81) */
#define NXFONT_METRICS_81 {2, 10, 11, 1, 6, 0}
#define NXFONT_BITMAP_81 {0x1e, 0x0, 0x73, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc6, 0xc0, 0x63, 0x80, 0x73, 0x80, 0x1e, 0xc0}

/* R (82) */
#define NXFONT_METRICS_82 {2, 9, 11, 1, 6, 0}
#define NXFONT_BITMAP_82 {0xfe, 0x0, 0xc7, 0x0, 0xc3, 0x0, 0xc3, 0x0, 0xc6, 0x0, 0xfe, 0x0, 0xc7, 0x0, 0xc3, 0x0, 0xc3, 0x0, 0xc3, 0x0, 0xc1, 0x80}

/* S (83) */
#define NXFONT_METRICS_83 {1, 8, 11, 1, 6, 0}
#define NXFONT_BITMAP_83 {0x7e, 0xe7, 0xc3, 0xe0, 0x78, 0x1e, 0x7, 0x3, 0xc3, 0xee, 0x7c}

/* T (84) */
#define NXFONT_METRICS_84 {1, 8, 11, 0, 6, 0}
#define NXFONT_BITMAP_84 {0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18}

/* U (85) */
#define NXFONT_METRICS_85 {2, 9, 11, 1, 6, 0}
#define NXFONT_BITMAP_85 {0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0x63, 0x0, 0x3e, 0x0}

/* V (86) */
#define NXFONT_METRICS_86 {2, 10, 11, 0, 6, 0}
#define NXFONT_BITMAP_86 {0xc0, 0xc0, 0xc0, 0xc0, 0x61, 0x80, 0x61, 0x80, 0x73, 0x80, 0x33, 0x0, 0x33, 0x0, 0x1e, 0x0, 0x1e, 0x0, 0xc, 0x0, 0xc, 0x0}

/* W (87) */
#define NXFONT_METRICS_87 {2, 14, 11, 0, 6, 0}
#define NXFONT_BITMAP_87 {0xc3, 0xc, 0xc3, 0xc, 0xc3, 0xc, 0x67, 0x98, 0x64, 0x98, 0x64, 0x98, 0x6c, 0xd8, 0x2c, 0xd0, 0x38, 0x70, 0x18, 0x60, 0x18, 0x60}

/* X (88) */
#define NXFONT_METRICS_88 {2, 9, 11, 0, 6, 0}
#define NXFONT_BITMAP_88 {0xc1, 0x80, 0xc1, 0x80, 0x63, 0x0, 0x36, 0x0, 0x1c, 0x0, 0x1c, 0x0, 0x36, 0x0, 0x63, 0x0, 0x63, 0x0, 0xc1, 0x80, 0xc1, 0x80}

/* Y (89) */
#define NXFONT_METRICS_89 {2, 10, 11, 0, 6, 0}
#define NXFONT_BITMAP_89 {0xc0, 0xc0, 0x61, 0x80, 0x61, 0x80, 0x33, 0x0, 0x33, 0x0, 0x1e, 0x0, 0x1e, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0}

/* Z (90) */
#define NXFONT_METRICS_90 {1, 8, 11, 0, 6, 0}
#define NXFONT_BITMAP_90 {0xff, 0x3, 0x6, 0xc, 0x1c, 0x18, 0x30, 0x70, 0x60, 0xc0, 0xff}

/* bracketleft (91) */
#define NXFONT_METRICS_91 {1, 4, 14, 1, 6, 0}
#define NXFONT_BITMAP_91 {0xf0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xf0}

/* backslash (92) */
#define NXFONT_METRICS_92 {1, 4, 11, 0, 6, 0}
#define NXFONT_BITMAP_92 {0x80, 0x80, 0xc0, 0x40, 0x40, 0x60, 0x20, 0x20, 0x30, 0x10, 0x10}

/* bracketright (93) */
#define NXFONT_METRICS_93 {1, 4, 14, 0, 6, 0}
#define NXFONT_BITMAP_93 {0xf0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0xf0}

/* asciicircum (94) */
#define NXFONT_METRICS_94 {1, 6, 5, 1, 6, 0}
#define NXFONT_BITMAP_94 {0x30, 0x78, 0x48, 0xcc, 0xcc}

/* underscore (95) */
#define NXFONT_METRICS_95 {1, 8, 1, 0, 19, 0}
#define NXFONT_BITMAP_95 {0xff}

/* grave (96) */
#define NXFONT_METRICS_96 {1, 3, 2, 1, 6, 0}
#define NXFONT_BITMAP_96 {0xc0, 0x60}

/* a (97) */
#define NXFONT_METRICS_97 {1, 7, 8, 1, 9, 0}
#define NXFONT_BITMAP_97 {0x78, 0xcc, 0xc, 0x7c, 0xcc, 0xcc, 0xdc, 0x76}

/* b (98) */
#define NXFONT_METRICS_98 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_98 {0xc0, 0xc0, 0xc0, 0xd8, 0xec, 0xc6, 0xc6, 0xc6, 0xc6, 0xec, 0xd8}

/* c (99) */
#define NXFONT_METRICS_99 {1, 6, 8, 1, 9, 0}
#define NXFONT_BITMAP_99 {0x38, 0x6c, 0xcc, 0xc0, 0xc0, 0xcc, 0x6c, 0x38}

/* d (100) */
#define NXFONT_METRICS_100 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_100 {0x6, 0x6, 0x6, 0x36, 0x6e, 0xc6, 0xc6, 0xc6, 0xc6, 0x6e, 0x36}

/* e (101) */
#define NXFONT_METRICS_101 {1, 6, 8, 1, 9, 0}
#define NXFONT_BITMAP_101 {0x78, 0xcc, 0xcc, 0xfc, 0xc0, 0xc0, 0xec, 0x78}

/* f (102) */
#define NXFONT_METRICS_102 {1, 5, 11, 0, 6, 0}
#define NXFONT_BITMAP_102 {0x38, 0x60, 0x60, 0xf0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* g (103) */
#define NXFONT_METRICS_103 {1, 7, 11, 1, 9, 0}
#define NXFONT_BITMAP_103 {0x3a, 0x6e, 0xc6, 0xc6, 0xc6, 0xc6, 0x6e, 0x36, 0x6, 0xce, 0x7c}

/* h (104) */
#define NXFONT_METRICS_104 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_104 {0xc0, 0xc0, 0xc0, 0xdc, 0xee, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6}

/* i (105) */
#define NXFONT_METRICS_105 {1, 2, 11, 1, 6, 0}
#define NXFONT_BITMAP_105 {0xc0, 0xc0, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* j (106) */
#define NXFONT_METRICS_106 {1, 3, 14, 0, 6, 0}
#define NXFONT_BITMAP_106 {0x60, 0x60, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xe0, 0xc0}

/* k (107) */
#define NXFONT_METRICS_107 {1, 6, 11, 1, 6, 0}
#define NXFONT_BITMAP_107 {0xc0, 0xc0, 0xc0, 0xcc, 0xd8, 0xf0, 0xf0, 0xd8, 0xd8, 0xcc, 0xcc}

/* l (108) */
#define NXFONT_METRICS_108 {1, 2, 11, 1, 6, 0}
#define NXFONT_BITMAP_108 {0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* m (109) */
#define NXFONT_METRICS_109 {2, 10, 8, 1, 9, 0}
#define NXFONT_BITMAP_109 {0xdb, 0x80, 0xee, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0}

/* n (110) */
#define NXFONT_METRICS_110 {1, 7, 8, 1, 9, 0}
#define NXFONT_BITMAP_110 {0xdc, 0xee, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6}

/* o (111) */
#define NXFONT_METRICS_111 {1, 7, 8, 1, 9, 0}
#define NXFONT_BITMAP_111 {0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0xc6, 0x6c, 0x38}

/* p (112) */
#define NXFONT_METRICS_112 {1, 7, 11, 1, 9, 0}
#define NXFONT_BITMAP_112 {0xd8, 0xec, 0xc6, 0xc6, 0xc6, 0xc6, 0xec, 0xd8, 0xc0, 0xc0, 0xc0}

/* q (113) */
#define NXFONT_METRICS_113 {1, 7, 11, 1, 9, 0}
#define NXFONT_BITMAP_113 {0x36, 0x6e, 0xc6, 0xc6, 0xc6, 0xc6, 0x6e, 0x36, 0x6, 0x6, 0x6}

/* r (114) */
#define NXFONT_METRICS_114 {1, 5, 8, 1, 9, 0}
#define NXFONT_BITMAP_114 {0xd8, 0xf8, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* s (115) */
#define NXFONT_METRICS_115 {1, 6, 8, 1, 9, 0}
#define NXFONT_BITMAP_115 {0x78, 0xcc, 0xe0, 0x78, 0x1c, 0xc, 0xec, 0x78}

/* t (116) */
#define NXFONT_METRICS_116 {1, 5, 10, 0, 7, 0}
#define NXFONT_BITMAP_116 {0x60, 0x60, 0xf8, 0x60, 0x60, 0x60, 0x60, 0x60, 0x68, 0x30}

/* u (117) */
#define NXFONT_METRICS_117 {1, 7, 8, 1, 9, 0}
#define NXFONT_BITMAP_117 {0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xee, 0x76}

/* v (118) */
#define NXFONT_METRICS_118 {1, 8, 8, 0, 9, 0}
#define NXFONT_BITMAP_118 {0xc3, 0xc3, 0x66, 0x66, 0x24, 0x3c, 0x18, 0x18}

/* w (119) */
#define NXFONT_METRICS_119 {2, 10, 8, 0, 9, 0}
#define NXFONT_BITMAP_119 {0xcc, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0x6d, 0x80, 0x6d, 0x80, 0x33, 0x0, 0x33, 0x0, 0x33, 0x0}

/* x (120) */
#define NXFONT_METRICS_120 {1, 7, 8, 0, 9, 0}
#define NXFONT_BITMAP_120 {0xc6, 0xc6, 0x6c, 0x38, 0x38, 0x6c, 0xc6, 0xc6}

/* y (121) */
#define NXFONT_METRICS_121 {1, 8, 11, 0, 9, 0}
#define NXFONT_BITMAP_121 {0xc3, 0xc3, 0x66, 0x66, 0x24, 0x3c, 0x18, 0x18, 0x18, 0x30, 0x70}

/* z (122) */
#define NXFONT_METRICS_122 {1, 6, 8, 0, 9, 0}
#define NXFONT_BITMAP_122 {0xfc, 0xc, 0x18, 0x30, 0x30, 0x60, 0xc0, 0xfc}

/* braceleft (123) */
#define NXFONT_METRICS_123 {1, 5, 14, 0, 6, 0}
#define NXFONT_BITMAP_123 {0x18, 0x30, 0x30, 0x30, 0x30, 0x60, 0xc0, 0x60, 0x30, 0x30, 0x30, 0x30, 0x30, 0x18}

/* bar (124) */
#define NXFONT_METRICS_124 {1, 1, 14, 2, 6, 0}
#define NXFONT_BITMAP_124 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* braceright (125) */
#define NXFONT_METRICS_125 {1, 5, 14, 1, 6, 0}
#define NXFONT_BITMAP_125 {0xc0, 0x60, 0x60, 0x60, 0x60, 0x30, 0x18, 0x30, 0x60, 0x60, 0x60, 0x60, 0x60, 0xc0}

/* asciitilde (126) */
#define NXFONT_METRICS_126 {1, 7, 3, 1, 11, 0}
#define NXFONT_BITMAP_126 {0x72, 0xde, 0x8c}

/* exclamdown (161) */
#define NXFONT_METRICS_161 {1, 2, 11, 1, 9, 0}
#define NXFONT_BITMAP_161 {0xc0, 0xc0, 0x0, 0x40, 0x40, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* cent (162) */
#define NXFONT_METRICS_162 {1, 7, 10, 0, 8, 0}
#define NXFONT_BITMAP_162 {0x4, 0x3c, 0x6e, 0xc8, 0xd0, 0xd0, 0xe6, 0x66, 0x7c, 0x40}

/* sterling (163) */
#define NXFONT_METRICS_163 {1, 8, 11, 0, 6, 0}
#define NXFONT_BITMAP_163 {0x3c, 0x66, 0x66, 0x60, 0xfc, 0x30, 0x30, 0x30, 0x60, 0xfb, 0xde}

/* currency (164) */
#define NXFONT_METRICS_164 {1, 7, 7, 0, 8, 0}
#define NXFONT_BITMAP_164 {0x82, 0x7c, 0x6c, 0x6c, 0x6c, 0x7c, 0x82}

/* yen (165) */
#define NXFONT_METRICS_165 {1, 8, 11, 0, 6, 0}
#define NXFONT_BITMAP_165 {0xc3, 0xc3, 0xc3, 0x66, 0x66, 0x3c, 0x7e, 0x18, 0x7e, 0x18, 0x18}

/* brokenbar (166) */
#define NXFONT_METRICS_166 {1, 1, 14, 2, 6, 0}
#define NXFONT_BITMAP_166 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* section (167) */
#define NXFONT_METRICS_167 {1, 6, 14, 1, 6, 0}
#define NXFONT_BITMAP_167 {0x78, 0xcc, 0xcc, 0xe0, 0x78, 0xdc, 0xcc, 0xcc, 0xec, 0x78, 0x1c, 0xcc, 0xcc, 0x78}

/* dieresis (168) */
#define NXFONT_METRICS_168 {1, 5, 2, 0, 6, 0}
#define NXFONT_BITMAP_168 {0xd8, 0xd8}

/* copyright (169) */
#define NXFONT_METRICS_169 {2, 10, 11, 1, 6, 0}
#define NXFONT_BITMAP_169 {0x1e, 0x0, 0x61, 0x80, 0x4c, 0x80, 0xd2, 0xc0, 0x90, 0x40, 0x90, 0x40, 0x90, 0x40, 0x92, 0x40, 0x4c, 0x80, 0x61, 0x80, 0x1e, 0x0}

/* ordfeminine (170) */
#define NXFONT_METRICS_170 {1, 5, 7, 0, 6, 0}
#define NXFONT_BITMAP_170 {0x70, 0x90, 0x70, 0xd0, 0xf8, 0x0, 0xf8}

/* guillemotleft (171) */
#define NXFONT_METRICS_171 {1, 7, 5, 1, 10, 0}
#define NXFONT_BITMAP_171 {0x36, 0x6c, 0xd8, 0x6c, 0x36}

/* logicalnot (172) */
#define NXFONT_METRICS_172 {1, 7, 4, 1, 11, 0}
#define NXFONT_BITMAP_172 {0xfe, 0xfe, 0x2, 0x2}

/* hyphen (173) */
#define NXFONT_METRICS_173 {1, 3, 1, 0, 12, 0}
#define NXFONT_BITMAP_173 {0xe0}

/* registered (174) */
#define NXFONT_METRICS_174 {2, 10, 11, 1, 6, 0}
#define NXFONT_BITMAP_174 {0x1e, 0x0, 0x61, 0x80, 0x5c, 0x80, 0x92, 0x40, 0x92, 0x40, 0x9c, 0x40, 0x92, 0x40, 0x92, 0x40, 0x52, 0x80, 0x61, 0x80, 0x1e, 0x0}

/* macron (175) */
#define NXFONT_METRICS_175 {1, 5, 1, 0, 7, 0}
#define NXFONT_BITMAP_175 {0xf8}

/* degree (176) */
#define NXFONT_METRICS_176 {1, 4, 4, 1, 6, 0}
#define NXFONT_BITMAP_176 {0x60, 0x90, 0x90, 0x60}

/* plusminus (177) */
#define NXFONT_METRICS_177 {1, 8, 9, 0, 8, 0}
#define NXFONT_BITMAP_177 {0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18, 0x0, 0xff}

/* twosuperior (178) */
#define NXFONT_METRICS_178 {1, 4, 6, 0, 6, 0}
#define NXFONT_BITMAP_178 {0x60, 0xb0, 0x30, 0x60, 0xc0, 0xf0}

/* threesuperior (179) */
#define NXFONT_METRICS_179 {1, 4, 6, 0, 6, 0}
#define NXFONT_BITMAP_179 {0x60, 0xb0, 0x60, 0x30, 0xb0, 0x60}

/* acute (180) */
#define NXFONT_METRICS_180 {1, 3, 2, 1, 6, 0}
#define NXFONT_BITMAP_180 {0x60, 0xc0}

/* mu (181) */
#define NXFONT_METRICS_181 {1, 7, 11, 1, 9, 0}
#define NXFONT_BITMAP_181 {0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xee, 0xf6, 0xc0, 0xc0, 0xc0}

/* paragraph (182) */
#define NXFONT_METRICS_182 {1, 8, 14, 0, 6, 0}
#define NXFONT_BITMAP_182 {0x3f, 0x7a, 0xfa, 0xfa, 0xfa, 0x7a, 0x3a, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa}

/* periodcentered (183) */
#define NXFONT_METRICS_183 {1, 2, 2, 1, 12, 0}
#define NXFONT_BITMAP_183 {0xc0, 0xc0}

/* cedilla (184) */
#define NXFONT_METRICS_184 {1, 5, 3, 0, 17, 0}
#define NXFONT_BITMAP_184 {0x18, 0xd8, 0x70}

/* onesuperior (185) */
#define NXFONT_METRICS_185 {1, 3, 6, 0, 6, 0}
#define NXFONT_BITMAP_185 {0x60, 0xe0, 0x60, 0x60, 0x60, 0x60}

/* ordmasculine (186) */
#define NXFONT_METRICS_186 {1, 5, 7, 0, 6, 0}
#define NXFONT_BITMAP_186 {0x70, 0xd8, 0xd8, 0xd8, 0x70, 0x0, 0xf8}

/* guillemotright (187) */
#define NXFONT_METRICS_187 {1, 7, 5, 1, 10, 0}
#define NXFONT_BITMAP_187 {0xd8, 0x6c, 0x36, 0x6c, 0xd8}

/* onequarter (188) */
#define NXFONT_METRICS_188 {2, 12, 11, 0, 6, 0}
#define NXFONT_BITMAP_188 {0x61, 0x80, 0xe1, 0x80, 0x63, 0x0, 0x63, 0x0, 0x66, 0x0, 0x66, 0x20, 0x6, 0x60, 0xc, 0xe0, 0xd, 0x60, 0x19, 0xf0, 0x18, 0x60}

/* onehalf (189) */
#define NXFONT_METRICS_189 {2, 11, 11, 0, 6, 0}
#define NXFONT_BITMAP_189 {0x61, 0x80, 0xe1, 0x80, 0x63, 0x0, 0x63, 0x0, 0x66, 0x0, 0x66, 0xc0, 0x7, 0x60, 0xc, 0x60, 0xc, 0xc0, 0x19, 0x80, 0x19, 0xe0}

/* threequarters (190) */
#define NXFONT_METRICS_190 {2, 12, 11, 0, 6, 0}
#define NXFONT_BITMAP_190 {0x61, 0x80, 0xb1, 0x80, 0x63, 0x0, 0x33, 0x0, 0xb6, 0x0, 0x66, 0x20, 0x6, 0x60, 0xc, 0xe0, 0xd, 0x60, 0x19, 0xf0, 0x18, 0x60}

/* questiondown (191) */
#define NXFONT_METRICS_191 {1, 7, 11, 1, 9, 0}
#define NXFONT_BITMAP_191 {0x18, 0x18, 0x0, 0x18, 0x18, 0x30, 0x60, 0xc0, 0xc6, 0xc6, 0x7c}

/* Agrave (192) */
#define NXFONT_METRICS_192 {2, 10, 14, 0, 3, 0}
#define NXFONT_BITMAP_192 {0x18, 0x0, 0xc, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x1e, 0x0, 0x12, 0x0, 0x33, 0x0, 0x33, 0x0, 0x61, 0x80, 0x7f, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0}

/* Aacute (193) */
#define NXFONT_METRICS_193 {2, 10, 14, 0, 3, 0}
#define NXFONT_BITMAP_193 {0x6, 0x0, 0xc, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x1e, 0x0, 0x12, 0x0, 0x33, 0x0, 0x33, 0x0, 0x61, 0x80, 0x7f, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0}

/* Acircumflex (194) */
#define NXFONT_METRICS_194 {2, 10, 14, 0, 3, 0}
#define NXFONT_BITMAP_194 {0xe, 0x0, 0x1b, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x1e, 0x0, 0x12, 0x0, 0x33, 0x0, 0x33, 0x0, 0x61, 0x80, 0x7f, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0}

/* Atilde (195) */
#define NXFONT_METRICS_195 {2, 10, 14, 0, 3, 0}
#define NXFONT_BITMAP_195 {0xd, 0x0, 0x16, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x1e, 0x0, 0x12, 0x0, 0x33, 0x0, 0x33, 0x0, 0x61, 0x80, 0x7f, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0}

/* Adieresis (196) */
#define NXFONT_METRICS_196 {2, 10, 14, 0, 3, 0}
#define NXFONT_BITMAP_196 {0x33, 0x0, 0x33, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x1e, 0x0, 0x12, 0x0, 0x33, 0x0, 0x33, 0x0, 0x61, 0x80, 0x7f, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0}

/* Aring (197) */
#define NXFONT_METRICS_197 {2, 10, 14, 0, 3, 0}
#define NXFONT_BITMAP_197 {0xc, 0x0, 0x12, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0x1e, 0x0, 0x12, 0x0, 0x33, 0x0, 0x33, 0x0, 0x61, 0x80, 0x7f, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0}

/* AE (198) */
#define NXFONT_METRICS_198 {2, 14, 11, 0, 6, 0}
#define NXFONT_BITMAP_198 {0xf, 0xfc, 0xf, 0x0, 0x1b, 0x0, 0x13, 0x0, 0x33, 0x0, 0x33, 0xf8, 0x63, 0x0, 0x7f, 0x0, 0x63, 0x0, 0xc3, 0x0, 0xc3, 0xfc}

/* Ccedilla (199) */
#define NXFONT_METRICS_199 {2, 9, 14, 1, 6, 0}
#define NXFONT_BITMAP_199 {0x1f, 0x0, 0x7b, 0x80, 0x60, 0x80, 0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0x60, 0x80, 0x7b, 0x80, 0x1f, 0x0, 0x6, 0x0, 0x36, 0x0, 0x1c, 0x0}

/* Egrave (200) */
#define NXFONT_METRICS_200 {1, 7, 14, 1, 3, 0}
#define NXFONT_BITMAP_200 {0x30, 0x18, 0x0, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe}

/* Eacute (201) */
#define NXFONT_METRICS_201 {1, 7, 14, 1, 3, 0}
#define NXFONT_BITMAP_201 {0xc, 0x18, 0x0, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe}

/* Ecircumflex (202) */
#define NXFONT_METRICS_202 {1, 7, 14, 1, 3, 0}
#define NXFONT_BITMAP_202 {0x1c, 0x36, 0x0, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe}

/* Edieresis (203) */
#define NXFONT_METRICS_203 {1, 7, 14, 1, 3, 0}
#define NXFONT_BITMAP_203 {0x6c, 0x6c, 0x0, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe}

/* Igrave (204) */
#define NXFONT_METRICS_204 {1, 3, 14, 0, 3, 0}
#define NXFONT_BITMAP_204 {0xc0, 0x60, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* Iacute (205) */
#define NXFONT_METRICS_205 {1, 3, 14, 1, 3, 0}
#define NXFONT_BITMAP_205 {0x60, 0xc0, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* Icircumflex (206) */
#define NXFONT_METRICS_206 {1, 5, 14, 0, 3, 0}
#define NXFONT_BITMAP_206 {0x70, 0xd8, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* Idieresis (207) */
#define NXFONT_METRICS_207 {1, 5, 14, 0, 3, 0}
#define NXFONT_BITMAP_207 {0xd8, 0xd8, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* Eth (208) */
#define NXFONT_METRICS_208 {2, 10, 11, 0, 6, 0}
#define NXFONT_BITMAP_208 {0x7e, 0x0, 0x63, 0x80, 0x61, 0x80, 0x60, 0xc0, 0x60, 0xc0, 0xf8, 0xc0, 0x60, 0xc0, 0x60, 0xc0, 0x61, 0x80, 0x63, 0x80, 0x7e, 0x0}

/* Ntilde (209) */
#define NXFONT_METRICS_209 {2, 9, 14, 1, 3, 0}
#define NXFONT_BITMAP_209 {0x1a, 0x0, 0x2c, 0x0, 0x0, 0x0, 0xc1, 0x80, 0xe1, 0x80, 0xe1, 0x80, 0xd1, 0x80, 0xd9, 0x80, 0xc9, 0x80, 0xcd, 0x80, 0xc5, 0x80, 0xc3, 0x80, 0xc3, 0x80, 0xc1, 0x80}

/* Ograve (210) */
#define NXFONT_METRICS_210 {2, 10, 14, 1, 3, 0}
#define NXFONT_BITMAP_210 {0x18, 0x0, 0xc, 0x0, 0x0, 0x0, 0x1e, 0x0, 0x73, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x61, 0x80, 0x73, 0x80, 0x1e, 0x0}

/* Oacute (211) */
#define NXFONT_METRICS_211 {2, 10, 14, 1, 3, 0}
#define NXFONT_BITMAP_211 {0x6, 0x0, 0xc, 0x0, 0x0, 0x0, 0x1e, 0x0, 0x73, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x61, 0x80, 0x73, 0x80, 0x1e, 0x0}

/* Ocircumflex (212) */
#define NXFONT_METRICS_212 {2, 10, 14, 1, 3, 0}
#define NXFONT_BITMAP_212 {0xe, 0x0, 0x1b, 0x0, 0x0, 0x0, 0x1e, 0x0, 0x73, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x61, 0x80, 0x73, 0x80, 0x1e, 0x0}

/* Otilde (213) */
#define NXFONT_METRICS_213 {2, 10, 14, 1, 3, 0}
#define NXFONT_BITMAP_213 {0xd, 0x0, 0x16, 0x0, 0x0, 0x0, 0x1e, 0x0, 0x73, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x61, 0x80, 0x73, 0x80, 0x1e, 0x0}

/* Odieresis (214) */
#define NXFONT_METRICS_214 {2, 10, 14, 1, 3, 0}
#define NXFONT_BITMAP_214 {0x33, 0x0, 0x33, 0x0, 0x0, 0x0, 0x1e, 0x0, 0x73, 0x80, 0x61, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x61, 0x80, 0x73, 0x80, 0x1e, 0x0}

/* multiply (215) */
#define NXFONT_METRICS_215 {1, 8, 7, 0, 9, 0}
#define NXFONT_BITMAP_215 {0xc3, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0xc3}

/* Oslash (216) */
#define NXFONT_METRICS_216 {2, 12, 11, 0, 6, 0}
#define NXFONT_BITMAP_216 {0xf, 0x30, 0x39, 0xe0, 0x30, 0xc0, 0x61, 0xe0, 0x63, 0x60, 0x66, 0x60, 0x6c, 0x60, 0x78, 0x60, 0x30, 0xc0, 0x79, 0xc0, 0xcf, 0x0}

/* Ugrave (217) */
#define NXFONT_METRICS_217 {2, 9, 14, 1, 3, 0}
#define NXFONT_BITMAP_217 {0x18, 0x0, 0xc, 0x0, 0x0, 0x0, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0x63, 0x0, 0x3e, 0x0}

/* Uacute (218) */
#define NXFONT_METRICS_218 {2, 9, 14, 1, 3, 0}
#define NXFONT_BITMAP_218 {0x6, 0x0, 0xc, 0x0, 0x0, 0x0, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0x63, 0x0, 0x3e, 0x0}

/* Ucircumflex (219) */
#define NXFONT_METRICS_219 {2, 9, 14, 1, 3, 0}
#define NXFONT_BITMAP_219 {0x1c, 0x0, 0x36, 0x0, 0x0, 0x0, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0x63, 0x0, 0x3e, 0x0}

/* Udieresis (220) */
#define NXFONT_METRICS_220 {2, 9, 14, 1, 3, 0}
#define NXFONT_BITMAP_220 {0x63, 0x0, 0x63, 0x0, 0x0, 0x0, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0x63, 0x0, 0x3e, 0x0}

/* Yacute (221) */
#define NXFONT_METRICS_221 {2, 10, 14, 0, 3, 0}
#define NXFONT_BITMAP_221 {0x6, 0x0, 0xc, 0x0, 0x0, 0x0, 0xc0, 0xc0, 0x61, 0x80, 0x61, 0x80, 0x33, 0x0, 0x33, 0x0, 0x1e, 0x0, 0x1e, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0}

/* Thorn (222) */
#define NXFONT_METRICS_222 {1, 8, 11, 1, 6, 0}
#define NXFONT_BITMAP_222 {0xc0, 0xc0, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe, 0xc0, 0xc0, 0xc0}

/* germandbls (223) */
#define NXFONT_METRICS_223 {1, 6, 11, 1, 6, 0}
#define NXFONT_BITMAP_223 {0x78, 0xcc, 0xcc, 0xcc, 0xd8, 0xd8, 0xcc, 0xcc, 0xcc, 0xcc, 0xd8}

/* agrave (224) */
#define NXFONT_METRICS_224 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_224 {0x30, 0x18, 0x0, 0x78, 0xcc, 0xc, 0x7c, 0xcc, 0xcc, 0xdc, 0x76}

/* aacute (225) */
#define NXFONT_METRICS_225 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_225 {0x18, 0x30, 0x0, 0x78, 0xcc, 0xc, 0x7c, 0xcc, 0xcc, 0xdc, 0x76}

/* acircumflex (226) */
#define NXFONT_METRICS_226 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_226 {0x38, 0x6c, 0x0, 0x78, 0xcc, 0xc, 0x7c, 0xcc, 0xcc, 0xdc, 0x76}

/* atilde (227) */
#define NXFONT_METRICS_227 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_227 {0x34, 0x58, 0x0, 0x78, 0xcc, 0xc, 0x7c, 0xcc, 0xcc, 0xdc, 0x76}

/* adieresis (228) */
#define NXFONT_METRICS_228 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_228 {0x6c, 0x6c, 0x0, 0x78, 0xcc, 0xc, 0x7c, 0xcc, 0xcc, 0xdc, 0x76}

/* aring (229) */
#define NXFONT_METRICS_229 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_229 {0x30, 0x48, 0x30, 0x78, 0xcc, 0xc, 0x7c, 0xcc, 0xcc, 0xdc, 0x76}

/* ae (230) */
#define NXFONT_METRICS_230 {2, 11, 8, 1, 9, 0}
#define NXFONT_BITMAP_230 {0x7b, 0xc0, 0xce, 0x60, 0xc, 0x60, 0x7f, 0xe0, 0xcc, 0x0, 0xcc, 0x0, 0xde, 0x60, 0x77, 0xc0}

/* ccedilla (231) */
#define NXFONT_METRICS_231 {1, 7, 11, 1, 9, 0}
#define NXFONT_BITMAP_231 {0x3c, 0x66, 0xc6, 0xc0, 0xc0, 0xc6, 0x66, 0x3c, 0x18, 0x58, 0x70}

/* egrave (232) */
#define NXFONT_METRICS_232 {1, 6, 11, 1, 6, 0}
#define NXFONT_BITMAP_232 {0x60, 0x30, 0x0, 0x78, 0xcc, 0xcc, 0xfc, 0xc0, 0xc0, 0xec, 0x78}

/* eacute (233) */
#define NXFONT_METRICS_233 {1, 6, 11, 1, 6, 0}
#define NXFONT_BITMAP_233 {0x18, 0x30, 0x0, 0x78, 0xcc, 0xcc, 0xfc, 0xc0, 0xc0, 0xec, 0x78}

/* ecircumflex (234) */
#define NXFONT_METRICS_234 {1, 6, 11, 1, 6, 0}
#define NXFONT_BITMAP_234 {0x38, 0x6c, 0x0, 0x78, 0xcc, 0xcc, 0xfc, 0xc0, 0xc0, 0xec, 0x78}

/* edieresis (235) */
#define NXFONT_METRICS_235 {1, 6, 11, 1, 6, 0}
#define NXFONT_BITMAP_235 {0x6c, 0x6c, 0x0, 0x78, 0xcc, 0xcc, 0xfc, 0xc0, 0xc0, 0xec, 0x78}

/* igrave (236) */
#define NXFONT_METRICS_236 {1, 3, 11, 0, 6, 0}
#define NXFONT_BITMAP_236 {0xc0, 0x60, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* iacute (237) */
#define NXFONT_METRICS_237 {1, 3, 11, 1, 6, 0}
#define NXFONT_BITMAP_237 {0x60, 0xc0, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* icircumflex (238) */
#define NXFONT_METRICS_238 {1, 5, 11, 0, 6, 0}
#define NXFONT_BITMAP_238 {0x70, 0xd8, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* idieresis (239) */
#define NXFONT_METRICS_239 {1, 5, 11, 0, 6, 0}
#define NXFONT_BITMAP_239 {0xd8, 0xd8, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* eth (240) */
#define NXFONT_METRICS_240 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_240 {0x6c, 0x38, 0x48, 0x3c, 0x6c, 0xc6, 0xc6, 0xc6, 0xc6, 0x6c, 0x38}

/* ntilde (241) */
#define NXFONT_METRICS_241 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_241 {0x34, 0x58, 0x0, 0xdc, 0xee, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6}

/* ograve (242) */
#define NXFONT_METRICS_242 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_242 {0x30, 0x18, 0x0, 0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0xc6, 0x6c, 0x38}

/* oacute (243) */
#define NXFONT_METRICS_243 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_243 {0x18, 0x30, 0x0, 0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0xc6, 0x6c, 0x38}

/* ocircumflex (244) */
#define NXFONT_METRICS_244 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_244 {0x38, 0x6c, 0x0, 0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0xc6, 0x6c, 0x38}

/* otilde (245) */
#define NXFONT_METRICS_245 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_245 {0x34, 0x58, 0x0, 0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0xc6, 0x6c, 0x38}

/* odieresis (246) */
#define NXFONT_METRICS_246 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_246 {0x6c, 0x6c, 0x0, 0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0xc6, 0x6c, 0x38}

/* divide (247) */
#define NXFONT_METRICS_247 {1, 8, 7, 0, 9, 0}
#define NXFONT_BITMAP_247 {0x18, 0x18, 0x0, 0xff, 0x0, 0x18, 0x18}

/* oslash (248) */
#define NXFONT_METRICS_248 {1, 7, 8, 1, 9, 0}
#define NXFONT_BITMAP_248 {0x3a, 0x6c, 0xce, 0xd6, 0xd6, 0xe6, 0x6c, 0xb8}

/* ugrave (249) */
#define NXFONT_METRICS_249 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_249 {0x30, 0x18, 0x0, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xee, 0x76}

/* uacute (250) */
#define NXFONT_METRICS_250 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_250 {0xc, 0x18, 0x0, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xee, 0x76}

/* ucircumflex (251) */
#define NXFONT_METRICS_251 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_251 {0x38, 0x6c, 0x0, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xee, 0x76}

/* udieresis (252) */
#define NXFONT_METRICS_252 {1, 7, 11, 1, 6, 0}
#define NXFONT_BITMAP_252 {0x6c, 0x6c, 0x0, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xee, 0x76}

/* yacute (253) */
#define NXFONT_METRICS_253 {1, 8, 14, 0, 6, 0}
#define NXFONT_BITMAP_253 {0xc, 0x18, 0x0, 0xc3, 0xc3, 0x66, 0x66, 0x24, 0x3c, 0x18, 0x18, 0x18, 0x30, 0x70}

/* thorn (254) */
#define NXFONT_METRICS_254 {1, 7, 14, 1, 6, 0}
#define NXFONT_BITMAP_254 {0xc0, 0xc0, 0xc0, 0xd8, 0xec, 0xc6, 0xc6, 0xc6, 0xc6, 0xec, 0xd8, 0xc0, 0xc0, 0xc0}

/* ydieresis (255) */
#define NXFONT_METRICS_255 {1, 8, 14, 0, 6, 0}
#define NXFONT_BITMAP_255 {0x36, 0x36, 0x0, 0xc3, 0xc3, 0x66, 0x66, 0x24, 0x3c, 0x18, 0x18, 0x18, 0x30, 0x70}

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C" {
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
}
#endif

#endif /* __GRAPHICS_NXFONTS_NXFONTS_SANS17X23B_H */
