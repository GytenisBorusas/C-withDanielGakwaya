/*

8. Write a program in C++ to check overflow/underflow during various arithmetical operation.
Sample Output:
Check overflow/underflow during various arithmetical operation :
Range of int is [-2147483648, 2147483647]
---------------------------------------------------------------------
Overflow the integer range and set in minimum range : -2147483648
Increasing from its minimum range : -2147483647
Product is :1
Underflow the range and set in maximum range : 2147483647
Decreasing from its maximum range : 2147483646
Product is : 0

*/

#include <iostream>
#include <limits>

#include <iomanip> // for std::fixed and std::setprecision



int main(){

    int number1 = -2147483648;
    int number2 = number1+1;
    int product1 = number2 - number1;

    std::cout << "Overflow the integer range and set in minimum range : " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Increasing from its minimum range : " << number2 << std::endl;
    // std::cout << std::fixed << std::setprecision(1); // This sets the precision for floating point output
    std::cout << "Product is :" << product1 << std::endl;
    




    return 0;
}