/*

3. Write a program in C++ to find Size of fundamental data types.
Sample Output:
Find Size of fundamental data types :
------------------------------------------
The sizeof(char) is : 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes

*/

#include <iostream>


int main(){

    int number1{29};
    int number2{30};

    int sum = number1 + number2;
    std::cout << "The sum of " << number1 << " and " << number2 << " is : " << sum << std::endl;
    return 0;
}