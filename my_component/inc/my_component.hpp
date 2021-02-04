#ifndef _MY_COMPONENT_HPP_
#define _MY_COMPONENT_HPP_

#include <memory>
#include <string>

namespace example {

class My_component {
 public:
  static My_component make();
  ~My_component();

  void set_value(std::string const& value);
  std::string get_value() const;

 private:
  struct Detail;
  std::unique_ptr<Detail> m_priv;

  My_component(std::unique_ptr<Detail>&& priv);
};

}  // namespace example

#endif  //_MY_COMPONENT_HPP_
