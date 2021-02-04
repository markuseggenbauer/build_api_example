#ifndef _MY_USING_COMPONENT_HPP_
#define _MY_USING_COMPONENT_HPP_

#include <string>

#include "my_component.hpp"

namespace example {

class My_using_component {
 public:
  My_using_component();
  std::string get_value() const;
  void increment();

 private:
  unsigned int m_counter{};
  My_component m_other{My_component::make()};
};

}  // namespace example

#endif  //_MY_USING_COMPONENT_HPP_
