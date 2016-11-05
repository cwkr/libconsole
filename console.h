#ifndef CONSOLE_HEADER
#define CONSOLE_HEADER

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

#ifdef __cplusplus
}
#endif

#endif
