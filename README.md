# libconsole

A C/C++ library for colored console output using ANSI/VT100 Escape sequences or the Windows API


## Getting Started

### Compiling demos

Run `make` on Linux or using MinGW or `nmake -f Makefile.win` when using Visual C++

### Installing

Just copy `console.c`, `console.h` and _optionally_ `console.hpp` to your project and include them into your build system

### Usage Example

```c
#include <stdio.h>
#include "console.h"

int main() {
    clear(); // clear screen
    setcolor(LIME); // set foreground color to light green
    printf("Hello world"); // print text using stdio.h
    return 0;
}
```

See [demo.c](demo.c) and [demo2.cpp](demo2.cpp) for more examples


## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
