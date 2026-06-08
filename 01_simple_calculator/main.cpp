/*
Project: Simple Calculator
Description: Performs basic arithmetic operations
*/

#include <iostream>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
double division(int a, int b);
int remainder(int a, int b);

int main() {
    int choice;

    std::cout << "Welcome to Simple Calculator" << std::endl;
    std::cout << "Perform basic arithmetic operations" << std::endl;
    std::cout << std::endl;
    std::cout << "Choose one from the following operations" << std::endl;
    std::cout << "1 - Addition" << std::endl;
    std::cout << "2 - Subtraction" << std::endl;
    std::cout << "3 - Multiplication" << std::endl;
    std::cout << "4 - Division" << std::endl;
    std::cout << "5 - Modulus" << std::endl;
    std::cout << "6 - Exit" << std::endl;
    std::cout << std::endl;

    while(true) {
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1: {
                int num1, num2;

                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;

                int sum = addition(num1, num2);
                std::cout << num1 << " + " << num2  << " = " << sum << std::endl;

                std::cout << std::endl;

                break;
            }

            case 2: {
                int num1, num2;

                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;

                int difference = subtraction(num1, num2);
                std::cout << num1 << " - " << num2  << " = " << difference << std::endl;

                std::cout << std::endl;

                break;
            }

            case 3: {
                int num1, num2;

                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;

                int product = multiplication(num1, num2);
                std::cout << num1 << " * " << num2  << " = " << product << std::endl;

                std::cout << std::endl;

                break;
            }

            case 4: {
                int num1, num2;

                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;

                double quotient = division(num1, num2);
                std::cout << num1 << " / " << num2  << " = " << quotient << std::endl;

                std::cout << std::endl;

                break;
            }

            case 5: {
                int num1, num2;

                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;

                double modulus = remainder(num1, num2);
                std::cout << num1 << " % " << num2  << " = " << modulus << std::endl;

                std::cout << std::endl;

                break;
            }

            case 6: {
                std::cout << "Completed performing operations" << std::endl;
                return 0;
            }

            default:
                std::cout << "Invalid input" << std::endl;

                break;
        }
    }
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

double division(int a, int b) {
    if(b == 0) {
        std::cout << "Cannot perform division when denominator is 0";
        return 0;
    }

    return (double)a / b;
}

int remainder(int a, int b) {
    if(b == 0) {
        std::cout << "Cannot perform division when denominator is 0";
        return 0;
    }

    return a % b;
}