
#include "my_using_component.hpp"

namespace example {

My_using_component::My_using_component() { m_other.set_value(std::to_string(m_counter)); }

void My_using_component::increment() {
  m_counter++;
  m_other.set_value(std::to_string(m_counter));
}

std::string My_using_component::get_value() const { return m_other.get_value(); }

}  // namespace example
