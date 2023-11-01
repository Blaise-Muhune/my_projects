#include <iostream>
#include <iomanip>

// Function to calculate gross pay
double calcGrossPay(double hoursWorked, double payRate) {
    return hoursWorked * payRate;
}

// Function to calculate net pay
double calcNetPay(double grossPay) {
    const double taxRate = 0.25; // 25% tax rate
    return grossPay - (grossPay * taxRate);
}

// Function to print the paycheck
void printPayCheck(double netPay) {
    std::cout << "--------------------------" << std::endl;
    std::cout << "Paycheck" << std::endl;
    std::cout << "Gross Pay: $" << std::fixed << std::setprecision(2) << netPay / 0.75 << std::endl; // Calculate gross pay from net pay
    std::cout << "Tax (25%): $" << std::fixed << std::setprecision(2) << netPay - (netPay / 0.75) << std::endl; // Calculate tax amount
    std::cout << "Net Pay: $" << std::fixed << std::setprecision(2) << netPay << std::endl;
    std::cout << "--------------------------" << std::endl;
}

int main() {
    char processMore;
    
    do {
        double hoursWorked, payRate;
        
        // Input hours worked and pay rate
        std::cout << "Enter hours worked: ";
        std::cin >> hoursWorked;
        std::cout << "Enter pay rate: $";
        std::cin >> payRate;
        
        // Calculate gross pay
        double grossPay = calcGrossPay(hoursWorked, payRate);
        
        // Calculate net pay
        double netPay = calcNetPay(grossPay);
        
        // Print the paycheck
        printPayCheck(netPay);
        
        // Ask if there are more paychecks to process
        std::cout << "Process another paycheck? (Y/N): ";
        std::cin >> processMore;
    } while (processMore == 'Y' || processMore == 'y');

    return 0;
}
