/*
* Returns true if number above zero; otherwise false.

* example:
    -3 => false
     5 => true
     0 => false
 */
bool isAboveZero(int);

/*
* Returns true if the number is odd; otherwise false.

* example:
      5 => true
    -10 => false
      0 => false
 */
bool isOdd(int);

/*
* Returns true if the number is even; otherwise false.

* example:
     10 => true
    -25 => false
      0 => true
 */
bool isEven(int);

/*
* Returns true if 'a ∈ (2; 100]'; otherwise false.

* example:
     10 => true
      2 => false
    100 => true
    -10 => false
    101 => false
 */
bool boolean1(int);

/*
* Returns true if 'a ∈ [0; +∞] или b ∈ [-∞; -2)'; otherwise false.

* example:
     (0, -3) => true
     (5, 10) => true
    (-2, -5) => true
    (-1, -1) => false
 */
bool boolean2(int, int);

/*
* Returns true if B is between the number A and C

* example:
         (1, 2, 3) => true
         (1, 1, 3) => false
         (1, 3, 3) => false
      (-10, 2, 10) => true
     (-10, 15, 10) => false
    (-10, -15, 10) => false
 */
bool boolean3(int, int, int);
