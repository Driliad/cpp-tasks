/*
* Returns an area of a rectangle given by width and heigth.

* example:
    5, 10 => 50
    5, 5  => 25
*/
double getRectangleArea(double, double);

/*
* Returns a circumference of circle given by radius.

* example:
    0    => 0
    5.0  => 31.41592653589793
    3.14 => 19.729201864543903
*/
double getCircleCircumference(double);

/*
* Returns an average of two given numbers.

* example:
    5, 5  => 5.0
    10, 0 => 5.0
    -3, 3 => 0.0
*/
double getAverage(double, double);

/*
* Returns a distance beetween two points by cartesian coordinates.

* example:
    (0,0) (0,1)     => 1
    (0,0) (1,0)     => 1
    (-5,0) (10,-10) => 18.027756377319946
*/
double getDistanceBetweenPoints(double, double, double, double);

/*
* Returns a distance beetween two points lying on one straight line.

* example:
    (5,1) => 4
    (1,5) => 4
    (-3,10) => 13
*/

double getDistanceBetweenPoints(double, double);

/*
* Returns a diagonal length of the rectangular parallelepiped given by its sides a,b,c.

* example:
    1,1,1   => 1.7320508075688772
    3,3,3   => 5.196152422706632
    1,2,3   => 3.741657386773941
*/
double getParallelepipedDiagonal(double, double, double);

/*
* Returns a root of linear equation a*x + b = 0 given by coefficients a and b.

* example:
    5*x - 10 = 0 => 2
    x + 8 = 0    => -8
    5*x = 0      => 0
*/
double getLinearEquationRoot(double, double);

/*
* Returns a last digit of a integer number.

* example:
    100 => 0
    37  => 7
    5   => 5
    0   => 0
*/
int getLastDigit(int);
