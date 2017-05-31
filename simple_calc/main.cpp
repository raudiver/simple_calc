#include <iostream> //test comment for repository

int main ()
{
    int operationtype(0); // "c" will be used for setting action
    double a1(0.0); // a1 - first number
    double a2(0.0); // a2 - first number
    double sum(0.0); //results of operations sum
    double razn(0.0); // results of operation subtraction
    double pow(0.0); // results of operation multiplication
    double div(0.0); // results of operation division
    std::cout << "First calculator!!!" << std::endl;
    std::cout << "Choose action:" << std::endl << "Enter 1 for +" << std::endl << "Enter 2 for -" << std::endl << "Enter 3 for *" << std::endl << "Enter 4 for / " << std::endl;
    std::cin >> operationtype;
    std::cout << "Enter first number." << std::endl;
    std::cin >> a1;
    std::cout << "Eenter second number." << std::endl;
    std::cin >> a2;
    switch (operationtype) {
    case 1:
        {
        sum = a1 + a2;
        std::cout << "Sum is " << sum << std::endl;
        break;
        }
    case 2:
        {
        razn = a1 - a2;
        std::cout << "Difference is " << razn << std::endl;
        break;
        }
    case 3:
        {
        pow = a1 * a2;
        std::cout << "Product is " << pow << std::endl;
        break;
        }
    case 4:
        {
        div = a1 / a2;
        std::cout << "Quotient is " << div << std::endl;
        break;
        }
    default:
        std::cout << "Entered wrong action!" << std::endl;
        break;
    }
    return 0;
}
