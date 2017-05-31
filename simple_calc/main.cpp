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
    char continueargument ('y'); // User choice for continue using calculator
    std::cout << "First calculator!!!" << std::endl;
    while (continueargument == 'y')
    {
        std::cout << "Choose action:" << std::endl << "Enter 1 for +" << std::endl << "Enter 2 for -" << std::endl << "Enter 3 for *" << std::endl << "Enter 4 for / " << std::endl;
        std::cin >> operationtype;
        std::cout << "Enter first number." << std::endl;
        std::cin >> a1;
        std::cout << "Eenter second number." << std::endl;
        std::cin >> a2;
            switch (operationtype) {
            case 1: //making sum operation
                {
                sum = a1 + a2;
                std::cout << "Sum is " << sum << std::endl;
                break;
                }
            case 2: //making subtraction operation
                {
                razn = a1 - a2;
                std::cout << "Difference is " << razn << std::endl;
                break;
                }
            case 3: //making multiplication operation
                {
                pow = a1 * a2;
                std::cout << "Product is " << pow << std::endl;
                break;
                }
            case 4: // making division operation
                {
                div = a1 / a2;
                std::cout << "Quotient is " << div << std::endl;
                break;
                }
            default:
                std::cout << "Entered wrong action!" << std::endl;
                break;
            }
         std::cout << "Do you whant to make next calculation? Y/N" << std::endl;
         std::cin >> continueargument;
    }
    return 0;
}
