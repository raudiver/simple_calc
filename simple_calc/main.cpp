#include <iostream> //test comment for repository

int main ()
{
    int operationtype; // "c" will be used for setting action
    double a1, a2; // a1 - first numer, a2 second number
    double sum, razn, pow, div; //results of operations
    std::cout << "First calculator!!!" << std::endl;
    begin: // cykling programm from this point
    std::cout << "Choose action:" << std::endl << "Enter 1 for +" << std::endl << "Enter 2 for -" << std::endl << "Enter 3 for *" << std::endl << "Enter 4 for / " << std::endl;
    std::cin >> operationtype;
    if ((operationtype<1) || (operationtype>4)) { // In case when user select wrong action programm will start from beginning with info message
            std::cout << "Entered wrong action!" << std::endl;
            goto begin;
    }
    std::cout << "Enter first number." << std::endl;
    std::cin >> a1;
    std::cout << "Eenter second number." << std::endl;
    std::cin >> a2;
    if (operationtype == 1) {
            sum = a1 + a2;
            std::cout << "Sum is " << sum << std::endl;
    } else if (operationtype == 2) {
            razn = a1 - a2;
            std::cout << "Difference is " << razn << std::endl;
    } else if (operationtype == 3) {
            pow = a1 * a2;
            std::cout << "Product is " << pow << std::endl;
    } else if (operationtype == 4) {
            div = a1 / a2;
            std::cout << "Quotient is " << div << std::endl;
    }
    goto begin;
    return 0;
}
