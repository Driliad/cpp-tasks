#include "string"
/*
* Returns the increment number A if A is positive;
* otherwise A;

* example:
    (4) => 5
    (0) => 0
    (-1) => -1
 */
int conditions1(int);

/*
* Returns the number A increased by B if A is even;
* otherwise A;

* example:
    (4, 7) => 11
    (7, 4) => 7
    (-14, 5) => -9
 */
int conditions2(int, int);

/*
* Returns the number A increased by B if A is even and A greater than B; otherwise A.

* example:
    (8, 4) => 12
    (3, 8) => 3
    (4, 8) => 4
 */
int conditions3(int, int);

/*
* Returns the remainder from division A by B the number if A greater than B; otherwise the remainder from division B by A.

* example:
    (8, 7) => 1
    (7, 4) => 3
    (8, 4) => 0
    (5, 9) => 4
 */
int conditions4(int, int);

/*
* Returns sum of three numbers if there are at least two equals among them; otherwise 0.

* example:
    (3, 3, 5) => 11
    (3, 4, 5) => 0
    (5, 5, 5) => 15
 */
int conditions5(int, int, int);

/*
* Returns maximum among three numbers

* example:
    (1, 3, 2) => 3
    (6, 4, 5) => 6
 */
int conditions6(int, int, int);

/*
* Returns true, if a triangle can be built with the specified sides A, B, C; otherwise false.

* example:
    (1, 2, 3) => false
    (3, 4, 5) => true
    (10, 1, 1) => false
    (10, 10, 10) => true
*/
bool isTriangle(int, int, int);

/*
* Returns true if specified year is leap year; otherwise false.
* Please find algorithm here: https://en.wikipedia.org/wiki/Leap_year#Algorithm

* example
    (1900) => false
    (2000) => true
    (2001) => false
    (2012) => true
*/
bool isLeapYear(int);

/*
* Return "Fizz" for number divisible by 3,
        "Buzz" – divisible by 5,
        "FizzBuzz" – divisible by 3 and 5;
        otherwise returns given number converted to string.

* example:
    (1) => "1"
    (3) => "Fizz"
    (5) => "Buzz"
    (30) => "FizzBuzz"
    (31) => "31"
*/
std::string isFizzBuzz(int);

/*
* Returns the string representation of math interval, specified by two points and include / exclude flags.
    See the details: https://en.wikipedia.org/wiki/Interval_(mathematics)

* Please take attention, that the smaller number should be the first in the notation

* example
    (2, 6, true, true) => "[2, 6]"
    (2, 6, true, false) => "[2, 6)"
    (2, 6, false, true) => "(2, 6]"
    (2, 6, false, false) => "(2, 6)"
    (8, 6, true, false) => "[6, 8)"
*/
std::string getIntervalString(int, int, bool isStartIncluded, bool isEndIncluded);

/*
* Returns true, if point lies inside the circle; otherwise false.

* cx, cy -- coords of circle center
* cr -- radius of circle

* px, py -- coords of point

* example
    (0, 0, 10, 0, 0) => true
    (0, 0, 10, 10, 10) => false
*/
bool isInsideCircle(int cx, int cy, int cr, int px, int py);
