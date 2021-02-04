
#include "my_component.hpp"

namespace example {

struct My_component::Detail {
  Detail(std::string const& prefix) : prefix{prefix}, value{} {}
  std::string prefix;
  std::string value;
};

My_component::My_component(std::unique_ptr<Detail>&& priv) : m_priv{std::move(priv)} {}
My_component::~My_component() = default;

void My_component::set_value(std::string const& value) { m_priv->value = value; }

std::string My_component::get_value() const { return m_priv->prefix + m_priv->value; }

My_component My_component::make() {
  return My_component{std::make_unique<My_component::Detail>("My_component: ")};
}

}  // namespace example
