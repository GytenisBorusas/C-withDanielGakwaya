/*

https://learn.saylor.org/mod/book/view.php?id=33554

10. Write a program in C++ to formatting the output.
Sample Output:
Formatting the output :
----------------------------
The value of pi : 3.1416
The value of pi 4 decimal place of total width 8 : | 3.1416|
The value of pi 4 decimal place of total width 10 : | 3.1416|
The value of pi 4 decimal place of total width 8 : |--3.1416|
The value of pi 4 decimal place of total width 10 : |----3.1416|
The value of pi in scientific format is : 3.1416e+00
Status
in number : 0
Status in alphabet : false

*/

#include <iostream>
#include <iomanip>

float pi = 3.1416;

int main(){

    int firstWidth{60};
    int secondWidth{8};
    int thirdWidth{10};

    std::cout << "The value of pi : " << pi << std::endl;

    std::cout << std::setw(firstWidth) <<  "The value of pi 4 decimal place of total width 8 : " << std::setw(secondWidth) << pi << std::endl;
    std::cout << std::setw(firstWidth) <<  "The value of pi 4 decimal place of total width 10 : " << std::setw(thirdWidth) << pi << std::endl;

    std::cout << std::setfill('-'); // The fill character
    std::cout << std::setw(firstWidth) <<  "The value of pi 4 decimal place of total width 8 : " << std::setw(secondWidth) << pi << std::endl;
    std::cout << std::setw(firstWidth) <<  "The value of pi 4 decimal place of total width 10 : " << std::setw(secondWidth) << pi << std::endl;

    std::cout << std::scientific;
    std::cout << std::setw(30) <<  "The value of pi in scientific format is : "<< pi << std::endl;
    


    return 0;
}