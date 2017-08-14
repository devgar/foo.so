# FooSo
A c++ exhibition anout sharing libraries.

# Complile library

```
g++ -c -Wall -Werror -fpic foo.cc
```

```
g++ -shared -o libfoo.so foo.o
```
```
g++ -L/route/to/your/lib -Wall -o test main.cc -lfoo
```

```
LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH ./test
```
