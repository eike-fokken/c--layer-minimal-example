#include "test.hpp"
#include <iostream>

double A::a() { return var; }

int main() {
  A x;
  std::cout << x.a() << std::endl;
}
