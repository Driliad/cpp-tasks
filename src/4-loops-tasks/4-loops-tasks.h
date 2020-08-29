#include <string>

/*
* Returns sum between two numbers (inclusive).

* example:
    (0, 10) => 55
    (-2, 5) => 12
 */
int getSumBetweenNumbers(int, int);

/*
* Returns factorial of number (n!). Given number can't be more than 20.

* example:
    5! = 1*2*3*4*5 = 120
    (0) => 1
    (2) => 2
    (5) => 120
    (10) => 3628800
*/
unsigned int getFactorial(unsigned short int);

/*
TODO
    ADD EXAMPLES
* Returns number in Fibonacci sequence
    https://en.wikipedia.org/wiki/Fibonacci_number
 */
int getFibonacciNumber(int);

/*
* Returns the sum of digits of a given number.

* example:
    (1) => 1
    (256) => 13
    (1234) => 10
*/
int getSumOfDigits(int);

/*
* Returns first digit of given number

* example:
    (256) => 2
    (654) => 6
    (1) => 1
    (111) => 1
*/
int getFirstDigit(int);

/*
* Returns the digital root of integer:
    step1 : find sum of all digits
    step2 : if sum > 9 then goto step1 otherwise return the sum

* example
    (12345) => ( 1+2+3+4+5 = 15, 1+5 = 6) => 6
    (23456) => ( 2+3+4+5+6 = 20, 2+0 = 2) => 2
    (10000) => ( 1+0+0+0+0 = 1 ) => 1
    (165536) => (1+6+5+5+3+6 = 26,  2+6 = 8) => 8
*/
int getDigitalRoot(int);

/*
* Reverse the specified integer number

* example:
    (12345) => 54321
    (87354) -> 45378
    (34143) => (34143)
*/
int reverseInteger(int);

/*
TODO
    ADD DESCRIPTION
    ("cat", 3) => "catcatcat"
*/
std::string repeatString(std::string, int);

/*
* Returns sequence of FizzBuzz from 1 to A.

* example:
    (5) => "1 2 Fizz 4 Buzz "
    (15) => "1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz "
 */
std::string getFizzBuzz(unsigned int);
