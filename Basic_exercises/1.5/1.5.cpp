/*

5. Write a program in C++ to check the upper and lower limits of integer.
Expected Output:
Check the upper and lower limits of integer :
--------------------------------------------------
The maximum limit of int data type : 2147483647
The minimum limit of int data type : -2147483648
The maximum limit of unsigned int data type : 4294967295
The maximum limit of long long data type : 9223372036854775807
The minimum limit of long long data type : -9223372036854775808
The maximum limit of unsigned long long data type : 18446744073709551615
The Bits contain in char data type : 8
The maximum limit of char data type : 127
The minimum limit of char data type : -128
The maximum limit of signed char data type : 127
The minimum limit of signed char data type : -128
The maximum limit of unsigned char data type : 255
The minimum limit of short data type : -32768
The maximum limit of short data type : 32767
The maximum limit of unsigned short data type : 65535

*/

#include <iostream>
#include <limits>



int main(){

    std::cout << "The minumum limit of int data type : " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "The maximum limit of int data type : " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "The maximum limit of unsigned int data type : " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "The minumum limit of long long data type : " << std::numeric_limits<long long>::min() << std::endl;
    std::cout << "The maximum limit of long long data type : " << std::numeric_limits<long long>::max() << std::endl;
    std::cout << "The maximum limit of unsigned long long data type : " << std::numeric_limits<unsigned long long>::max() << std::endl;
    std::cout << "The minumum limit of char data type : " << static_cast<int>(std::numeric_limits<char>::min()) << std::endl;
    std::cout << "The maximum limit of char data type : " << static_cast<int>(std::numeric_limits<char>::max()) << std::endl;
    std::cout << "The maximum limit of unsigned char data type : " << static_cast<int>(std::numeric_limits<unsigned char>::max()) << std::endl;
    std::cout << "The minumum limit of short data type : " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "The maximum limit of short data type : " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "The maximum limit of unsigned short data type : " << std::numeric_limits<unsigned short>::max() << std::endl;

    return 0;
}