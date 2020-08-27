#include "../libs/catch.hpp"
#include "../src/2-booleans-tasks/2-booleans-tasks.h"

TEST_CASE("2-booleans-tasks test")
{
    SECTION("isAboveZero should return true if number above zero; otherwise false.")
    {
        REQUIRE(isAboveZero(5) == true);
        CHECK(isAboveZero(-3) == false);
        CHECK(isAboveZero(0) == false);
    }

    SECTION("isOdd should return true if the number is odd; otherwise false.")
    {
        REQUIRE(isOdd(5) == true);
        CHECK(isOdd(-10) == false);
        CHECK(isOdd(0) == false);
    }

    SECTION("isEven should return true if the number is even; otherwise false.")
    {
        REQUIRE(isEven(10) == true);
        CHECK(isEven(-25) == false);
        CHECK(isEven(0) == true);
    }

    SECTION("boolean1 should return true if 'a ∈ (2; 100]'; otherwise false.")
    {
        REQUIRE(boolean1(10) == true);
        CHECK(boolean1(2) == false);
        CHECK(boolean1(100) == true);
        CHECK(boolean1(-10) == false);
        CHECK(boolean1(101) == false);
    }

    SECTION("boolean2 should return true if 'a ∈ [0; +∞] или b ∈ [-∞; -2)'; otherwise false.")
    {
        REQUIRE(boolean2(0, -3) == true);
        CHECK(boolean2(5, 10) == true);
        CHECK(boolean2(-2, -5) == true);
        CHECK(boolean2(-1, -1) == false);
    }

    SECTION("boolean3 should return true if B is between the number A and C")
    {
        REQUIRE(boolean3(1, 2, 3) == true);
        CHECK(boolean3(1, 1, 3) == false);
        CHECK(boolean3(1, 3, 3) == false);
        CHECK(boolean3(-10, 2, 10) == true);
        CHECK(boolean3(-10, 15, 10) == false);
        CHECK(boolean3(-10, -15, 10) == false);
    }
}
