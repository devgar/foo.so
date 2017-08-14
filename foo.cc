#include "foo.hh"

bool Foo::isValid()
{
  return !invalid;
}

void Foo::sayHello()
{
  std::cout << "Hello, world!" << std::endl;
}

const char * yon (bool q)
{
  return q ? "yes" : "not";
}

int main(int argc, char * argv [])
{
  using namespace std;

  cout << "Foo(2, 1) should be valid: " << yon(Foo(2, 1).isValid()) << endl;
  cout << "Foo(2) should be valid: " << yon(Foo(2).isValid()) << endl;
  cout << "Foo() shouldn't be valid: " << yon(Foo().isValid()) << endl;
  return 0;
}
