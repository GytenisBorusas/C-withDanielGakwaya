#include <iostream>

int addNumbers( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int multiplyNumbers( int first_numb, int second_numb){
    int multi_result = first_numb * second_numb;
    return multi_result;
}

int main(){

    int first_number {13}; // Statement
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl; // 13
    std::cout << "Second number : " << second_number << std::endl; // 7
    
    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; // 20

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl; // 32

    sum = addNumbers(30,54);
    std::cout << "Sum : " << sum << std::endl; //84
    
    std::cout << "Sum : " << addNumbers(3,42) << std::endl; //45
    
    //Multiplication results
    int multi_result = multiplyNumbers(5,6);
    std::cout << "Result : " << multi_result << std::endl; // 30

    std::cout << "Results : " << multiplyNumbers(3,42) << std::endl; //126

    return 0;
}