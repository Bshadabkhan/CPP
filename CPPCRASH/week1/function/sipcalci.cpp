//write a SIP(Systematic Investment Plan) calculator using function's concept

#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate SIP maturity amount
double calculateSIP(double monthlyInvestment, double annualInterestRate, int investmentDurationInYears) {
    double monthlyInterestRate = annualInterestRate / 12 / 100; // Monthly interest rate
    int totalMonths = investmentDurationInYears * 12; // Total number of months
    
    // Calculate maturity amount using the SIP formula
    double maturityAmount = monthlyInvestment * (pow(1 + monthlyInterestRate, totalMonths) - 1) / monthlyInterestRate * (1 + monthlyInterestRate);
    
    return maturityAmount;
}

int main() {
    // Input variables
    double monthlyInvestment;
    double annualInterestRate;
    int investmentDurationInYears;
    
    // Get user input
    cout << "Enter monthly investment amount: ";
    cin >> monthlyInvestment;
    
    cout << "Enter annual interest rate (in percentage): ";
    cin >> annualInterestRate;
    
    cout << "Enter investment duration in years: ";
    cin >> investmentDurationInYears;
    
    // Calculate SIP maturity amount using the function
    double maturityAmount = calculateSIP(monthlyInvestment, annualInterestRate, investmentDurationInYears);
    
    // Output the calculated maturity amount
    cout << "Maturity amount after " << investmentDurationInYears << " years: " << maturityAmount << endl;
    
    return 0;
}
