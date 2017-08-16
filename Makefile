# A simple makefile

default: main

foo.o: foo.cc
	g++ -c -Wall -Werror -fpic foo.cc

libfoo.so : foo.o
	g++ -shared -o libfoo.so foo.o

main: libfoo.so
	g++ -L. -Wall -o test main.cc -lfoo

clean.o:
	rm -rf *.o

clean:
	rm -rf *.o *.so *.out test main
