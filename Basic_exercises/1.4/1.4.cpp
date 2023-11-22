/*

4. Write a program in C++ to print the sum of two numbers using variables.
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59

*/

#include <iostream>


int main(){

    int number1{29};
    int number2{30};


    int sum = number1 + number2;
    std::cout << "The sum of " << number1 << " and " << number2 << " is : " << sum << std::endl;
    return 0;
}