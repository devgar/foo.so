#include <iostream>
#include <sstream>
#include <string>

class Foo
{
  int x, y;
  bool invalid;

public:
  Foo(int x, int y): x(x), y(y) {}
  Foo(int x): x(x), y(x) {}
  Foo(): invalid(true) {}

  bool isValid();
  void sayHello();
  std::string data();
};
