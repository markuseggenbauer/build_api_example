
#include <iostream>

#include "my_using_component.hpp"

int main() {
  auto object = example::My_using_component();
  std::cout << object.get_value() << "\n";
  object.increment();
  std::cout << object.get_value() << "\n";
  object.increment();
  std::cout << object.get_value() << "\n";
  object.increment();
  std::cout << object.get_value() << "\n";
  object.increment();
  std::cout << object.get_value() << "\n";
}
