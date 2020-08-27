#include "../libs/catch.hpp"
#include "../src/1-numbers-tasks/1-numbers-tasks.h"

TEST_CASE("1-numbers-tasks test")
{
    SECTION("getRectangleArea should return a square of rectangle")
    {
        REQUIRE(getRectangleArea(5.0, 5.0) == 25.0);
        CHECK(getRectangleArea(5.0, 10.0) == 50.0);
        CHECK(getRectangleArea(8.7, 3.2) == 27.84);
        CHECK(getRectangleArea(8.33, 5.19) == 43.2327);
    }

    SECTION("getCircleCircumference should return a circumference of circle")
    {
        REQUIRE(getCircleCircumference(0) == 0.0);
        CHECK(getCircleCircumference(5.0) == Approx(31.41592653589793));
        CHECK(getCircleCircumference(3.14) == Approx(19.729201864543903));
    }

    SECTION("getAverage should return an average of two numbers")
    {
        REQUIRE(getAverage(5, 5) == 5.0);
        CHECK(getAverage(10, 0) == 5.0);
        CHECK(getAverage(-3, 3) == 0.0);
        double doubleMax = std::numeric_limits<double>::max();
        CHECK(getAverage(doubleMax, doubleMax) == doubleMax);
        CHECK(getAverage(doubleMax - 2, doubleMax) == doubleMax - 1);
    }

    SECTION("getDistanceBetweenPoints should return a distance between 2D points")
    {
        REQUIRE(getDistanceBetweenPoints(0.0, 0.0, 0.0, 1.0) == 1.0);
        CHECK(getDistanceBetweenPoints(0.0, 0.0, 1.0, 0.0) == 1.0);
        CHECK(getDistanceBetweenPoints(-5, 0, 10, -10) == Approx(18.027756377319946));
    }

    SECTION("getDistanceBetweenPoints should return a distance between points lying on one straight line")
    {
        REQUIRE(getDistanceBetweenPoints(5.0, 1.0) == 4.0);
        CHECK(getDistanceBetweenPoints(-3.0, 10.0) == 13.0);
        CHECK(getDistanceBetweenPoints(-5, 0, 10, -10) == Approx(18.027756377319946));
    }

    SECTION("getParallelipidedDiagonal should return a diagonal length of the rectagular parallelepiped")
    {
        REQUIRE(getParallelepipedDiagonal(1.0, 1.0, 1.0) == Approx(1.7320508075688772));
        CHECK(getParallelepipedDiagonal(3.0, 3.0, 3.0) == Approx(5.196152422706632));
        CHECK(getParallelepipedDiagonal(1.0, 2.0, 3.0) == Approx(3.741657386773941));
    }

    SECTION("getLinearEquationRoot should return a root of linear equation")
    {
        REQUIRE(getLinearEquationRoot(5.0, -10.0) == 2);
        CHECK(getLinearEquationRoot(1.0, 8.0) == -8);
        CHECK(getLinearEquationRoot(5.0, 0.0) == 0);
    }

    SECTION("getLastDigit should return a last digit of the number")
    {
        REQUIRE(getLastDigit(100) == 0);
        CHECK(getLastDigit(24) == 4);
        CHECK(getLastDigit(5) == 5);
        CHECK(getLastDigit(0) == 0);
    }
}
