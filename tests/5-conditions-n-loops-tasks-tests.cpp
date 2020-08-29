#include "../libs/catch.hpp"
#include "../src/5-conditions-n-loops-tasks/5-conditions-n-loops-tasks.h"

TEST_CASE("5-conditions-n-loops-tasks tests")
{
    SECTION("getMaxDigit should returns max digit by given number.")
    {
        REQUIRE(getMaxDigit(1) == 1);
        CHECK(getMaxDigit(23) == 3);
        CHECK(getMaxDigit(546) == 6);
        CHECK(getMaxDigit(999) == 9);
    }

    SECTION("isPrime should returns true if the given number is prime; otherwise false.")
    {
        REQUIRE(isPrime(2) == true);
        CHECK(isPrime(13) == true);
        CHECK(isPrime(14) == false);
        CHECK(isPrime(97) == true);
    }

    SECTION("getGreatestCommonDivisor should returns greatest common divisor of two number.")
    {
        REQUIRE(getGreatestCommonDivisor(15, 25) == 5);
        CHECK(getGreatestCommonDivisor(9, 10) == 1);
        CHECK(getGreatestCommonDivisor(3, 15) == 3);
    }
}
