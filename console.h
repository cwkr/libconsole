/* console.h -- console C89 header file
 *
 * Copyright (C) 2016 Christian Winkler
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef CONSOLE_H
#define CONSOLE_H

#ifdef __cplusplus
extern "C" {
#endif

enum Color {
    BLACK,
    NAVY,
    GREEN,
    TEAL,
    MAROON,
    PURPLE,
    OLIVE,
    SILVER,
    GREY,
    BLUE,
    LIME,
    AQUA,
    RED,
    PINK,
    YELLOW,
    WHITE
};

/* clear console content */
void clear();
/* reset foreground and background color */
void reset();
/* set foreground color */
void setcolor(enum Color color);
/* set background color */
void setbgcolor(enum Color color);
/* set cursor position */
void setcurpos(int x, int y);

#ifdef __cplusplus
}
#endif

#endif /* CONSOLE_H */
