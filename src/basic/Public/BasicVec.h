#pragma once

#include <array>
#include <cstdint>

// TODO Move to common area
using uint32 = uint32_t;
using int32 = uint32_t;

namespace rsm {
namespace basic {

class Vec3f {
public:

  // can i make default constructors explicit??
  constexpr Vec3f() = default;
  constexpr Vec3f(const Vec3f& rhs) = default;
  constexpr Vec3f& operator=(const Vec3f& rhs) = default;
  constexpr Vec3f(Vec3f&& rhs) = default;
  constexpr Vec3f& operator=(Vec3f&& rhs) = default;

  explicit constexpr Vec3f(float val) noexcept : m_data({val, val, val}) {}

  explicit constexpr Vec3f(float x, float y, float z) noexcept : m_data({x, y, z}) {}

  [[nodiscard]] constexpr auto X() const noexcept { return m_data[0]; }
  [[nodiscard]] constexpr auto Y() const noexcept { return m_data[1]; }
  [[nodiscard]] constexpr auto Z() const noexcept { return m_data[2]; }

  [[nodiscard]] constexpr auto& X() noexcept { return m_data[0]; }
  [[nodiscard]] constexpr auto& Y() noexcept { return m_data[1]; }
  [[nodiscard]] constexpr auto& Z() noexcept { return m_data[2]; }

  [[nodiscard]] constexpr auto& operator[](size_t pos) noexcept { return m_data[pos]; }

  [[nodiscard]] constexpr const auto& operator[](size_t pos) const noexcept { return m_data[pos]; }

  // addition
  // subtraction
  // component-wise div
  // single-element div
  // component-wise mul
  // single-element mul

  // length???

private:
  std::array<float, 3> m_data = {0, 0, 0};
};

class Vec3d {
public:
private:
  std::array<double, 3> m_data;
};

class Vec3u {
public:
private:
  std::array<uint32, 3> m_data;
};

class Vec3i {
public:
private:
  std::array<int32, 3> m_data;
};

class Vec4f {
public:
private:
  std::array<float, 4> m_data;
};

class Vec4d {
public:
private:
  std::array<double, 4> m_data;
};

class Vec4u {
public:
private:
  std::array<uint32, 4> m_data;
};

class Vec4i {
public:
private:
  std::array<int32, 4> m_data;
};

} // namespace basic
} // namespace rsm
