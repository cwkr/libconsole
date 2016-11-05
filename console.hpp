/* console.hpp -- console C++98 header file
 *
 * Copyright (C) 2016 Christian Winkler
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef CONSOLE_HPP
#define CONSOLE_HPP

namespace console {
    #include "console.h"
    
    inline std::ostream& clear(std::ostream& stream) {
        stream.flush();
        clear();
        return stream;
    }

    inline std::ostream& reset(std::ostream& stream) {
        stream.flush();
        reset();
        return stream;
    }

    inline std::ostream& black(std::ostream& stream) {
        stream.flush();
        setcolor(BLACK);
        return stream;
    }

    inline std::ostream& navy(std::ostream& stream) {
        stream.flush();
        setcolor(NAVY);
        return stream;
    }

    inline std::ostream& green(std::ostream& stream) {
        stream.flush();
        setcolor(GREEN);
        return stream;
    }

    inline std::ostream& teal(std::ostream& stream) {
        stream.flush();
        setcolor(TEAL);
        return stream;
    }

    inline std::ostream& maroon(std::ostream& stream) {
        stream.flush();
        setcolor(MAROON);
        return stream;
    }

    inline std::ostream& purple(std::ostream& stream) {
        stream.flush();
        setcolor(PURPLE);
        return stream;
    }

    inline std::ostream& olive(std::ostream& stream) {
        stream.flush();
        setcolor(OLIVE);
        return stream;
    }

    inline std::ostream& silver(std::ostream& stream) {
        stream.flush();
        setcolor(SILVER);
        return stream;
    }

    inline std::ostream& grey(std::ostream& stream) {
        stream.flush();
        setcolor(GREY);
        return stream;
    }

    inline std::ostream& blue(std::ostream& stream) {
        stream.flush();
        setcolor(BLUE);
        return stream;
    }

    inline std::ostream& lime(std::ostream& stream) {
        stream.flush();
        setcolor(LIME);
        return stream;
    }

    inline std::ostream& aqua(std::ostream& stream) {
        stream.flush();
        setcolor(AQUA);
        return stream;
    }

    inline std::ostream& red(std::ostream& stream) {
        stream.flush();
        setcolor(RED);
        return stream;
    }

    inline std::ostream& pink(std::ostream& stream) {
        stream.flush();
        setcolor(PINK);
        return stream;
    }

    inline std::ostream& yellow(std::ostream& stream) {
        stream.flush();
        setcolor(YELLOW);
        return stream;
    }

    inline std::ostream& white(std::ostream& stream) {
        stream.flush();
        setcolor(WHITE);
        return stream;
    }

    inline std::ostream& on_black(std::ostream& stream) {
        stream.flush();
        setbgcolor(BLACK);
        return stream;
    }

    inline std::ostream& on_navy(std::ostream& stream) {
        stream.flush();
        setbgcolor(NAVY);
        return stream;
    }

    inline std::ostream& on_green(std::ostream& stream) {
        stream.flush();
        setbgcolor(GREEN);
        return stream;
    }

    inline std::ostream& on_teal(std::ostream& stream) {
        stream.flush();
        setbgcolor(TEAL);
        return stream;
    }

    inline std::ostream& on_maroon(std::ostream& stream) {
        stream.flush();
        setbgcolor(MAROON);
        return stream;
    }

    inline std::ostream& on_purple(std::ostream& stream) {
        stream.flush();
        setbgcolor(PURPLE);
        return stream;
    }

    inline std::ostream& on_olive(std::ostream& stream) {
        stream.flush();
        setbgcolor(OLIVE);
        return stream;
    }

    inline std::ostream& on_silver(std::ostream& stream) {
        stream.flush();
        setbgcolor(SILVER);
        return stream;
    }

    inline std::ostream& on_grey(std::ostream& stream) {
        stream.flush();
        setbgcolor(GREY);
        return stream;
    }

    inline std::ostream& on_blue(std::ostream& stream) {
        stream.flush();
        setbgcolor(BLUE);
        return stream;
    }

    inline std::ostream& on_lime(std::ostream& stream) {
        stream.flush();
        setbgcolor(LIME);
        return stream;
    }

    inline std::ostream& on_aqua(std::ostream& stream) {
        stream.flush();
        setbgcolor(AQUA);
        return stream;
    }

    inline std::ostream& on_red(std::ostream& stream) {
        stream.flush();
        setbgcolor(RED);
        return stream;
    }

    inline std::ostream& on_pink(std::ostream& stream) {
        stream.flush();
        setbgcolor(PINK);
        return stream;
    }

    inline std::ostream& on_yellow(std::ostream& stream) {
        stream.flush();
        setbgcolor(YELLOW);
        return stream;
    }

    inline std::ostream& on_white(std::ostream& stream) {
        stream.flush();
        setbgcolor(WHITE);
        return stream;
    }

    // wide char streams

    inline std::wostream& clear(std::wostream& stream) {
        stream.flush();
        clear();
        return stream;
    }

    inline std::wostream& reset(std::wostream& stream) {
        stream.flush();
        reset();
        return stream;
    }

    inline std::wostream& black(std::wostream& stream) {
        stream.flush();
        setcolor(BLACK);
        return stream;
    }

    inline std::wostream& navy(std::wostream& stream) {
        stream.flush();
        setcolor(NAVY);
        return stream;
    }

    inline std::wostream& green(std::wostream& stream) {
        stream.flush();
        setcolor(GREEN);
        return stream;
    }

    inline std::wostream& teal(std::wostream& stream) {
        stream.flush();
        setcolor(TEAL);
        return stream;
    }

    inline std::wostream& maroon(std::wostream& stream) {
        stream.flush();
        setcolor(MAROON);
        return stream;
    }

    inline std::wostream& purple(std::wostream& stream) {
        stream.flush();
        setcolor(PURPLE);
        return stream;
    }

    inline std::wostream& olive(std::wostream& stream) {
        stream.flush();
        setcolor(OLIVE);
        return stream;
    }

    inline std::wostream& silver(std::wostream& stream) {
        stream.flush();
        setcolor(SILVER);
        return stream;
    }

    inline std::wostream& grey(std::wostream& stream) {
        stream.flush();
        setcolor(GREY);
        return stream;
    }

    inline std::wostream& blue(std::wostream& stream) {
        stream.flush();
        setcolor(BLUE);
        return stream;
    }

    inline std::wostream& lime(std::wostream& stream) {
        stream.flush();
        setcolor(LIME);
        return stream;
    }

    inline std::wostream& aqua(std::wostream& stream) {
        stream.flush();
        setcolor(AQUA);
        return stream;
    }

    inline std::wostream& red(std::wostream& stream) {
        stream.flush();
        setcolor(RED);
        return stream;
    }

    inline std::wostream& pink(std::wostream& stream) {
        stream.flush();
        setcolor(PINK);
        return stream;
    }

    inline std::wostream& yellow(std::wostream& stream) {
        stream.flush();
        setcolor(YELLOW);
        return stream;
    }

    inline std::wostream& white(std::wostream& stream) {
        stream.flush();
        setcolor(WHITE);
        return stream;
    }

    inline std::wostream& on_black(std::wostream& stream) {
        stream.flush();
        setbgcolor(BLACK);
        return stream;
    }

    inline std::wostream& on_navy(std::wostream& stream) {
        stream.flush();
        setbgcolor(NAVY);
        return stream;
    }

    inline std::wostream& on_green(std::wostream& stream) {
        stream.flush();
        setbgcolor(GREEN);
        return stream;
    }

    inline std::wostream& on_teal(std::wostream& stream) {
        stream.flush();
        setbgcolor(TEAL);
        return stream;
    }

    inline std::wostream& on_maroon(std::wostream& stream) {
        stream.flush();
        setbgcolor(MAROON);
        return stream;
    }

    inline std::wostream& on_purple(std::wostream& stream) {
        stream.flush();
        setbgcolor(PURPLE);
        return stream;
    }

    inline std::wostream& on_olive(std::wostream& stream) {
        stream.flush();
        setbgcolor(OLIVE);
        return stream;
    }

    inline std::wostream& on_silver(std::wostream& stream) {
        stream.flush();
        setbgcolor(SILVER);
        return stream;
    }

    inline std::wostream& on_grey(std::wostream& stream) {
        stream.flush();
        setbgcolor(GREY);
        return stream;
    }

    inline std::wostream& on_blue(std::wostream& stream) {
        stream.flush();
        setbgcolor(BLUE);
        return stream;
    }

    inline std::wostream& on_lime(std::wostream& stream) {
        stream.flush();
        setbgcolor(LIME);
        return stream;
    }

    inline std::wostream& on_aqua(std::wostream& stream) {
        stream.flush();
        setbgcolor(AQUA);
        return stream;
    }

    inline std::wostream& on_red(std::wostream& stream) {
        stream.flush();
        setbgcolor(RED);
        return stream;
    }

    inline std::wostream& on_pink(std::wostream& stream) {
        stream.flush();
        setbgcolor(PINK);
        return stream;
    }

    inline std::wostream& on_yellow(std::wostream& stream) {
        stream.flush();
        setbgcolor(YELLOW);
        return stream;
    }

    inline std::wostream& on_white(std::wostream& stream) {
        stream.flush();
        setbgcolor(WHITE);
        return stream;
    }

} // namespace console

#endif // CONSOLE_HPP
