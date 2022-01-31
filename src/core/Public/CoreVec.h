#pragma once

#include <array>

namespace rsm {
namespace core {

// TODO
// * constrain number of elements from 2-4??? concepts?
// * constraint data type to int, uint, float, double
// * what can i make constexpr?
// * [[nodiscard]]
// * explicit constructors
// * debug build functionality for bounds checking

template <class DataType, size_t NumElements>
class Vec {
public:
private:

  // prefer std::array or C-array? probably std::array, might have some error-checks
  //std::array<DataType, NumElements> m_data;
  DataType m_data[NumElements];

  // TODO Can I declare elements based on the VALUE of NumElements
  // alternatively, can I have special xyzw methods based on component count?
};

} // namespace basic
} // namespace rsm
