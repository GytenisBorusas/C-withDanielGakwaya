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

    char dataType1{};
    short dataType2{};
    int dataType3{};
    long dataType4{};
    long long dataType5{};
    float dataType6{};
    double dataType7{};
    long double dataType8{};
    bool  dataType9{};

    std::cout << "The sizeof(char) is : " << sizeof(dataType1) << " bytes" << std::endl;
    std::cout << "The sizeof(short) is : " << sizeof(dataType2) << " bytes" << std::endl;
    std::cout << "The sizeof(int) is : " << sizeof(dataType3) << " bytes" << std::endl;
    std::cout << "The sizeof(long) is : " << sizeof(dataType4) << " bytes" << std::endl;
    std::cout << "The sizeof(long long) is : " << sizeof(dataType5) << " bytes" << std::endl;
    std::cout << "The sizeof(float) is : " << sizeof(dataType6) << " bytes" << std::endl;
    std::cout << "The sizeof(double) is : " << sizeof(dataType7) << " bytes" << std::endl;
    std::cout << "The sizeof(long double) is : " << sizeof(dataType8) << " bytes" << std::endl;
    std::cout << "The sizeof(bool) is : " << sizeof(dataType9) << " bytes" << std::endl;


    return 0;
}