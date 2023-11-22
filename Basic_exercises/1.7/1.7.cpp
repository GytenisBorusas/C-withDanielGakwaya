/*

7. Write a program in C++ to display various type or arithmetic operation using mixed data type.
Sample output:

Display arithmetic operations with mixed data type :
---------------------------------------------------------
5 + 7 = 12
3.7 + 8.0 = 11.7
5 + 8.0 = 13.0
5 - 7 = -2
3.7 - 8.0 = -4.3
5 - 8.0 = -3.0
5 * 7 = 35
3.7 * 8.0 = 29.6
5 * 8.0 = 40.0
5 / 7 = 0
3.7 / 8.0 = 0.5
5 / 8.0 = 0.6

*/

#include <iostream>

#include <iomanip> // for std::fixed and std::setprecision





int main(){

    int number1{5};
    int number2{7};
    float number3{3.7};
    float number4{8.0};

    int result1 = number1 + number2;
    double result2 = number3 + number4;
    float result3 = number1 + number4;

    int result4 = number1 - number2;
    double result5 = number3 - number4;
    float result6 = number1 - number4;

    int result7 = number1 * number2;
    double result8 = number3 * number4;
    float result9 = number1 * number4;

    int result10 = number1 / number2;
    double result11 = number3 / number4;
    float result12 = number1 / number4;


    std::cout << number1 << " + " << number2 << " = " << result1 << std::endl;
    std::cout << number3 << " + " << number4 << " = " << result2 << std::endl;
    std::cout << std::fixed << std::setprecision(1); // This sets the precision for floating point output
    std::cout << number1 << " + " << number4 << " = " << result3 << std::endl;
    std::cout << std::endl;

    std::cout << number1 << " - " << number2 << " = " << result4 << std::endl;
    std::cout << number3 << " - " << number4 << " = " << result5 << std::endl;
    std::cout << std::fixed << std::setprecision(1); // This sets the precision for floating point output
    std::cout << number1 << " - " << number4 << " = " << result6 << std::endl;
    std::cout << std::endl;

    std::cout << number1 << " * " << number2 << " = " << result7 << std::endl;
    std::cout << number3 << " * " << number4 << " = " << result8 << std::endl;
    std::cout << std::fixed << std::setprecision(1); // This sets the precision for floating point output
    std::cout << number1 << " * " << number4 << " = " << result9 << std::endl;
    std::cout << std::endl;

    std::cout << number1 << " / " << number2 << " = " << result10 << std::endl;
    std::cout << number3 << " / " << number4 << " = " << result11 << std::endl;
    std::cout << std::fixed << std::setprecision(1); // This sets the precision for floating point output
    std::cout << number1 << " / " << number4 << " = " << result12 << std::endl;
    std::cout << std::endl;


    return 0;
}