#include <stdio.h>
#include "console.h"

int main() {
    reset();
    clear();

    setbgcolor(SILVER);
    setcolor(BLACK);
    printf("BLACK");
    reset();
    setcolor(GREY);
    printf("GREY");
    setcolor(MAROON);
    printf("MAROON");
    setcolor(RED);
    printf("RED");
    setcolor(GREEN);
    printf("GREEN");
    setcolor(LIME);
    printf("LIME");
    setcolor(NAVY);
    printf("NAVY");
    setcolor(BLUE);
    printf("BLUE");
    setcolor(OLIVE);
    printf("OLIVE");
    setcolor(YELLOW);
    printf("YELLOW");
    setcolor(PURPLE);
    printf("PURPLE");
    setcolor(PINK);
    printf("PINK");
    setcolor(TEAL);
    printf("TEAL");
    setcolor(AQUA);
    printf("AQUA");
    setcolor(SILVER);
    printf("SILVER");
    setcolor(WHITE);
    printf("WHITE");
    reset();
    printf("\n");

    setcolor(WHITE);
    setbgcolor(BLACK);
    printf("BLACK");
    setbgcolor(GREY);
    printf("GREY");
    setbgcolor(MAROON);
    printf("MAROON");
    setbgcolor(RED);
    printf("RED");
    setbgcolor(GREEN);
    printf("GREEN");
    setbgcolor(LIME);
    printf("LIME");
    setbgcolor(NAVY);
    printf("NAVY");
    setbgcolor(BLUE);
    printf("BLUE");
    setbgcolor(OLIVE);
    printf("OLIVE");
    setbgcolor(YELLOW);
    printf("YELLOW");
    setbgcolor(PURPLE);
    printf("PURPLE");
    setbgcolor(PINK);
    printf("PINK");
    setbgcolor(TEAL);
    printf("TEAL");
    setbgcolor(AQUA);
    printf("AQUA");
    setbgcolor(SILVER);
    printf("SILVER");
    setcolor(BLACK);
    setbgcolor(WHITE);
    printf("WHITE");

    getchar();
    setbgcolor(NAVY);
    setcolor(YELLOW);
    clear();
    printf("Hello World!");
    getchar();
    reset();
    clear();
    return 0;
}
