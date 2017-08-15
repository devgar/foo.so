#include "foo.hh"

bool Foo::isValid()
{
  return !invalid;
}

void Foo::sayHello()
{
  std::cout << "Hello, world!" << std::endl;
}

std::string Foo::data()
{
  std::ostringstream out;
  out << "(" << x << ", " << y << ")";
  return out.str();
}

const char * yon (bool q)
{
  return q ? "yes" : "not";
}

int main(int argc, char * argv [])
{
  using namespace std;
  cout << "Foo" << Foo(9, -2).data() << endl;
  cout << "Foo(2, 1) should be valid: " << yon(Foo(2, 1).isValid()) << endl;
  cout << "Foo(2) should be valid: " << yon(Foo(2).isValid()) << endl;
  cout << "Foo() shouldn't be valid: " << yon(Foo().isValid()) << endl;
  return 0;
}
