#include <iostream> 
#include <iomanip>
#include <string>

// Juanie & Lance

using namespace std;

int main() {
    // Variables
    string empNo;
    string empName;
    char dept_code;
    float no_hrs_wrk;
    float rate_per_hr;

    // Cover Screen
    cout << "-----------------------------------" << endl;
    cout << "          PAYROLL REPORT          " << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;

    // Input Section
    cout << "Enter Employee Number: ";
    cin >> empNo;
    cout << "Enter Employee Name: ";
    cin.ignore(); // Clear the newline character from the input buffer
    getline(cin, empName);
    cout << "Enter Department Code (A, P, M, I): ";
    cin >> dept_code;
    cout << "Enter Number of Hours Worked: ";
    cin >> no_hrs_wrk;
    cout << "Enter Rate per Hour: ";
    cin >> rate_per_hr;

    // Computations
    float basic_pay = no_hrs_wrk * rate_per_hr;
    float sss_deduction = 0.20 * basic_pay;
    float tax_deduction = 0.25 * basic_pay;
    const float pag_ibig = 200.0;
    float philhealth = 0.04 * basic_pay;
    float total_deductions = sss_deduction + tax_deduction + pag_ibig + philhealth;
    float net_pay = basic_pay - total_deductions;

    // Output Section
    cout << fixed << setprecision(2); // Set precision for monetary values
    cout << endl;
    cout << "-----------------------------------" << endl;
    cout << "          PAYROLL SUMMARY          " << endl;
    cout << "-----------------------------------" << endl;
    cout << "Employee Number: " << empNo << endl;
    cout << "Employee Name: " << empName << endl;
    cout << "Department Code: " << dept_code << endl;
    cout << "Basic Pay: Php " << basic_pay << endl;
    cout << "SSS Deduction: Php " << sss_deduction << endl;
    cout << "Tax Deduction: Php " << tax_deduction << endl;
    cout << "Pag-ibig: Php " << pag_ibig << endl;
    cout << "Philhealth: Php " << philhealth << endl;
    cout << "Total Deductions: Php " << total_deductions << endl;
    cout << "Net Pay: Php " << net_pay << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}
