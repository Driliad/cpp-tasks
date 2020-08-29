#include "../libs/catch.hpp"
#include "../src/4-loops-tasks/4-loops-tasks.h"

TEST_CASE("4-loops-tasks tests")
{
    SECTION("getSumBetweenNumbers should returns sum between two numbers (inclusive)")
    {
        REQUIRE(getSumBetweenNumbers(0, 10) == 55);
        CHECK(getSumBetweenNumbers(-2, 5) == 12);
    }

    SECTION("getFactorial should returns factorial of number (n!). Given number can't be more than 20")
    {
        REQUIRE(getFactorial(5) == 120);
        CHECK(getFactorial(0) == 1);
        CHECK(getFactorial(2) == 2);
        CHECK(getFactorial(10) == 362880);
    }

    SECTION("getFibonacciNumber should returns ")
    {
        // REQUIRE(getFibonacciNumber(5) == 120);
        // CHECK(getFibonacciNumber(0) == 1);
        // CHECK(getFibonacciNumber(2) == 2);
        // CHECK(getFibonacciNumber(10) == 362880);
    }

    SECTION("getSumOfDigits should returns the sum of digits of a given number")
    {
        REQUIRE(getSumOfDigits(1) == 1);
        CHECK(getSumOfDigits(256) == 13);
        CHECK(getSumOfDigits(1234) == 10);
    }

    SECTION("getFirstDigit should returns first digit of given number")
    {
        REQUIRE(getFirstDigit(256) == 2);
        CHECK(getFirstDigit(654) == 6);
        CHECK(getFirstDigit(1) == 1);
        CHECK(getFirstDigit(111) == 1);
    }

    SECTION("getDigitalRoot should returns the digital root of integer")
    {
        REQUIRE(getDigitalRoot(12345) == 6);
        CHECK(getDigitalRoot(23456) == 2);
        CHECK(getDigitalRoot(10000) == 1);
        CHECK(getDigitalRoot(165536) == 8);
    }

    SECTION("reverseInteger should returns reverse the specified integer number")
    {
        REQUIRE(reverseInteger(12345) == 54321);
        CHECK(reverseInteger(87354) == 45378);
        CHECK(reverseInteger(34143) == 34143);
    }

    SECTION("repeatString should returns ")
    {
        REQUIRE(repeatString("cat", 3) == "catcatcat");
        // CHECK(repeatString(0) == 1);
        // CHECK(repeatString(2) == 2);
        // CHECK(repeatString(10) == 362880);
    }

    SECTION("getFizzBuzz should returns sequence of FizzBuzz from 1 to A")
    {
        REQUIRE(getFizzBuzz(5) == "1 2 Fizz 4 Buzz ");
        CHECK(getFizzBuzz(15) == "1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz ");
    }
}
