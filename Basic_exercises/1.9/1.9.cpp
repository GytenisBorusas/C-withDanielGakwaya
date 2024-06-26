/*

9. Write a program in C++ to display the operation of pre and post increment and decrement.
Sample Output:
Display the operation of pre and post increment and decrement :
--------------------------------------------------------------------
The number is : 57
After post increment by 1 the number is : 58
After pre increment by 1 the number is : 59
After increasing by 1 the number is : 60
After post decrement by 1 the number is : 59
After pre decrement by 1 the number is : 58
After decreasing by 1 the number is : 57

*/

#include <iostream>

int main(){

    int number = 57;
    std::cout << "The number is : " << number << std::endl;

    number++;
    std::cout << "After post increment by 1 the number is : " << number << std::endl;

    number = ++number;
    std::cout << "After pre increment by 1 the number is : " << number << std::endl;

    number = number + 1;
    std::cout << "After increasing by 1 the number is : " << number << std::endl;

    number--;
    std::cout << "After post decrement by 1 the number is : " << number << std::endl;

    number = --number;
    std::cout << "After pre decrement by 1 the number is : " << number << std::endl;

    number = number - 1;
    std::cout << "After decreasing by 1 the number is : " << number << std::endl;




    return 0;
}