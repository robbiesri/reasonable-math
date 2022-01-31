#include "doctest/doctest.h"

#include "BasicVec.h"

TEST_CASE("Vectors can be constructed") {

  SUBCASE("Vec3f") {
    {
      rsm::basic::Vec3f vec;

      REQUIRE(vec.X() == 0);
      REQUIRE(vec.Y() == 0);
      REQUIRE(vec.Z() == 0);
    }

    { 
      rsm::basic::Vec3f vec(4.f);
      REQUIRE(vec[0] == 4.f);
      REQUIRE(vec[1] == 4.f);
      REQUIRE(vec[2] == 4.f);
    }

    {
      rsm::basic::Vec3f vec(1.f, 2.f, 4.f);
      REQUIRE(vec[0] == 1.f);
      REQUIRE(vec[1] == 2.f);
      REQUIRE(vec[2] == 4.f);
    }
  }
}