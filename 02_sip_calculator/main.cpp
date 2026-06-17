/*
Problem: SIP Calculator
Description: Calculate the wealth gained from SIP
*/

#include <iostream>
#include <iomanip>

float power(float base, float exponent);

int main() {
    int amount, year;
    float annual_rate;

    std::cout << "SIP Calculator" << std::endl;
    std::cout << "Calculates the profit that can be earned by investing using SIP" << std::endl;

    std::cout << "Enter the amount to be invested: ";
    std::cin >> amount;

    std::cout << "Enter the annual rate of interest: ";
    std::cin >> annual_rate;

    std::cout << "Enter the number of years: ";
    std::cin >> year;

    int months = year * 12;
    float monthly_rate = (annual_rate / 12) / 100;

    int total_investment = amount * months;

    float estimated_maturity_value = amount * ((power((1 + monthly_rate), months) - 1) / monthly_rate) * (1 + monthly_rate);

    float wealth_earned = estimated_maturity_value - total_investment;

    std::cout << "Total investment: " << total_investment << std::endl;
    std::cout << "Estimated maturity value: " << std::fixed << std::setprecision(3) << estimated_maturity_value << std::endl;
    std::cout << "Wealth gained: " << wealth_earned << std::endl;

    return 0;
}

float power(float base, float exponent) {
    float power = 1;

    while(exponent != 0) {
        power = base * power;
        exponent--;
    }

    return power;
}