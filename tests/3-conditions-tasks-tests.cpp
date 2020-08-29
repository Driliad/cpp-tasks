#include "../libs/catch.hpp"
#include "../src/3-conditions-tasks/3-conditions-tasks.h"

TEST_CASE("3-conditions-tasks tests")
{
    SECTION("conditions1 should returns the increment number A if A is positive; otherwise A.")
    {
        REQUIRE(conditions1(5) == 6);
        CHECK(conditions1(0) == 0);
        CHECK(conditions1(-3) == -3);
    }

    SECTION("conditions2 should returns the number A increased by B if A is even; otherwise A.")
    {
        REQUIRE(conditions2(4, 7) == 11);
        CHECK(conditions2(7, 4) == 7);
        CHECK(conditions2(-14, 5) == -9);
    }

    SECTION("conditions3 should returns the number A increased by B if A is even and A greater than B; otherwise A.")
    {
        REQUIRE(conditions3(8, 4) == 12);
        CHECK(conditions3(3, 8) == 3);
        CHECK(conditions3(4, 8) == 4);
    }

    SECTION("conditions4 should returns the remainder from division A by B the number if A greater than B; otherwise the remainder from division B by A.")
    {
        REQUIRE(conditions4(8, 7) == 1);
        CHECK(conditions4(7, 4) == 3);
        CHECK(conditions4(8, 4) == 0);
        CHECK(conditions4(5, 9) == 4);
    }

    SECTION("conditions5 should returns sum of three numbers if there are at least two equals among them; otherwise 0.")
    {
        REQUIRE(conditions5(3, 3, 5) == 11);
        CHECK(conditions5(3, 4, 5) == 0);
        CHECK(conditions5(5, 5, 5) == 15);
        CHECK(conditions5(5, 4, 5) == 14);
    }

    SECTION("conditions6 should returns maximum among three numbers.")
    {
        REQUIRE(conditions6(1, 3, 2) == 3);
        CHECK(conditions6(6, 4, 5) == 6);
        CHECK(conditions6(1, 2, 3) == 3);
    }

    SECTION("isTriangle should returns true, if a triangle can be built with the specified sides A, B, C; otherwise false.")
    {
        REQUIRE(isTriangle(1, 2, 3) == false);
        CHECK(isTriangle(3, 4, 5) == true);
        CHECK(isTriangle(10, 1, 1) == false);
        CHECK(isTriangle(10, 10, 10) == true);
    }

    SECTION("isLeapYear should returns true if specified year is leap year; otherwise false.")
    {
        REQUIRE(isLeapYear(1900) == false);
        CHECK(isLeapYear(2000) == true);
        CHECK(isLeapYear(2001) == false);
        CHECK(isLeapYear(2012) == true);
    }

    SECTION("isFizzBuzz should returns 'Fizz' for number divisible by 3, 'Buzz' – divisible by 5, 'FizzBuzz' – divisible by 3 and 5;otherwise returns given number converted to string.")
    {
        REQUIRE(isFizzBuzz(1) == "1");
        CHECK(isFizzBuzz(3) == "Fizz");
        CHECK(isFizzBuzz(5) == "Buzz");
        CHECK(isFizzBuzz(30) == "FizzBuzz");
        CHECK(isFizzBuzz(-31) == "-31");
    }

    SECTION("getIntervalString should returns string representation of math interval, specified by two points and include / exclude flags.")
    {
        REQUIRE(getIntervalString(2, 6, true, true) == "[2, 6]");
        CHECK(getIntervalString(2, 6, true, false) == "[2, 6)");
        CHECK(getIntervalString(2, 6, false, true) == "(2, 6]");
        CHECK(getIntervalString(2, 6, false, false) == "(2, 6)");
        CHECK(getIntervalString(8, 6, true, false) == "[6, 8)");
    }

    SECTION("isInsideCircle should returns true, if point lies inside the circle; otherwise false.")
    {
        REQUIRE(isInsideCircle(0, 0, 10, 0, 0) == true);
        CHECK(isInsideCircle(0, 0, 10, 10, 10) == false);
    }
}
