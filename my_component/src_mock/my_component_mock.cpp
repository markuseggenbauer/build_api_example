
#include "my_component_mock.hpp"

#include "gmock/gmock.h"

namespace example {

My_component::My_component(std::unique_ptr<Detail>&& priv) : m_priv{std::move(priv)} {}
My_component::~My_component() = default;

void My_component::set_value(std::string const& value) { m_priv->set_value(value); }

std::string My_component::get_value() const { return m_priv->get_value(); }

My_component My_component::make() { return My_component(std::make_unique<My_component::Detail>()); }

}  // namespace example
