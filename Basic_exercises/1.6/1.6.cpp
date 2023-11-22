/*

6. Write a program in C++ to check whether the primitive values crossing the limits or not.
Check whether the primitive values crossing the limits or not :
--------------------------------------------------------------------
The Gender is : F
Is she married? : 1
Number of sons she has : 2
Year of her appointment : 2009
Salary for a year : 1500000
Height is : 79.48
GPA is 4.69
Salary drawn upto : 12047235
Balance till : 995324987

*/

#include <iostream>
#include <limits>

int main() {
    // Define variables with their values
    char gender = 'F'; // Assuming gender is either 'M' or 'F'
    bool isMarried = true; // Assuming 1 for true and 0 for false
    unsigned short numberOfSons = 2; // Assuming number of sons cannot be negative
    int yearOfAppointment = 2009;
    double salaryForAYear = 1500000.0;
    float height = 79.48f;
    float gpa = 4.69f; // GPA typically a floating point number
    long salaryDrawnUpto = 12047235;
    long long balanceTill = 995324987;

    // Check limits
    std::cout << "Check whether the primitive values crossing the limits or not :" << std::endl;
    std::cout << "--------------------------------------------------------------------" << std::endl;
    std::cout << "The Gender is : " << gender << std::endl;
    std::cout << "Is she married? : " << isMarried << std::endl;
    std::cout << "Number of sons she has : " << numberOfSons << std::endl;
    std::cout << "Year of her appointment : " << yearOfAppointment << std::endl;
    std::cout << "Salary for a year : " << salaryForAYear << std::endl;
    std::cout << "Height is : " << height << std::endl;
    std::cout << "GPA is : " << gpa << std::endl;
    std::cout << "Salary drawn upto : " << salaryDrawnUpto << std::endl;
    std::cout << "Balance till : " << balanceTill << std::endl;

    return 0;
}
