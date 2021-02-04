#ifndef _MY_COMPONENT_MOCK_HPP_
#define _MY_COMPONENT_MOCK_HPP_

#include "gmock/gmock.h"
#include "my_component.hpp"

namespace example {

class My_component::Detail {
 public:
  MOCK_METHOD(void, set_value, (std::string const&));
  MOCK_METHOD(std::string, get_value, (), (const));
};

}  // namespace example

#endif  // _MY_COMPONENT_MOCK_HPP_
