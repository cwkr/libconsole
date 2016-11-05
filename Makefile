CC=gcc
CFLAGS=-O2
CXXFLAGS=-O2

all: demo demo2

demo: console.o demo.o
		$(CC) $(CFLAGS) demo.o console.o $(LDFLAGS) -o demo

demo2: console.o
		$(CXX) -std=c++98 $(CXXFLAGS) demo2.cpp console.o $(LDFLAGS) -o demo2

.c.o:
		$(CC) -c -std=c89 -pedantic $(CFLAGS) $< -o $@

clean:
		$(RM) -v *.o demo demo2
