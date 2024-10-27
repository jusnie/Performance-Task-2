#include <iostream>
#include <iomanip>
#include <string>

// Juanie & Lance

using namespace std;

int main() {
    // Variables for data entry
    int emp_no;
    string emp_name;
    char dept_code;
    int no_hrs_wrk;
    double rate_per_hour;

    // Data Entry Screen (Screen 2)
    cout << "============================================" << endl;
    cout << "\t\t   Payroll" << endl;
    cout << "\t\t<< Data Entry >>" << endl;
    cout << "============================================" << endl;
    cout << "Input the following" << endl;
    cout << "Employee Number: ";
    cin >> emp_no;
    cin.ignore(); // To handle newline character after integer input
    cout << "Employee Name: ";
    getline(cin, emp_name);
    cout << "Department Code (A, P, M, I): ";
    cin >> dept_code;
    cout << "No. of Hours Worked: ";
    cin >> no_hrs_wrk;
    cout << "Rate per Hour: ";
    cin >> rate_per_hour;

    // Calculations
    double basic_pay = no_hrs_wrk * rate_per_hour;
    double sss_ded = basic_pay * 0.11;        // Example SSS deduction rate
    double tax_ded = basic_pay * 0.10;        // Example tax deduction rate
    double pag_ibig = 200.00;
    double philHealth_ded = basic_pay * 0.035; // Example PhilHealth rate
    double net_pay = basic_pay - (sss_ded + tax_ded + pag_ibig + philHealth_ded);

    // Payroll Report Screen (Screen 3)
    cout << "\n============================================" << endl;
    cout << "\tABC Corporation" << endl;
    cout << "\tGen. T. De Leon, Valenzuela City" << endl;
    cout << "\tPayroll Report" << endl;
    cout << "\tFor the Month of October" << endl;
    cout << "============================================" << endl;
    cout << "Employee Number: " << emp_no << "\t\tDepartment: " << dept_code << endl;
    cout << "Employee Name: " << emp_name << endl;
    cout << "No. of Hours Worked: " << no_hrs_wrk << "\tRate Per Hour: " << rate_per_hour << endl;
    cout << "\nSalary Computations:" << endl;
    cout << fixed << setprecision(2); // Set decimal precision to 2
    cout << "Basic Pay          : " << basic_pay << endl;
    cout << "SSS Deductions     : " << sss_ded << endl;
    cout << "Tax Deductions     : " << tax_ded << endl;
    cout << "Pag-ibig           : " << pag_ibig << endl;
    cout << "PhilHealth         : " << philHealth_ded << endl;
    cout << "Net Pay            : " << net_pay << endl;

    cout << "\nPrepared by: Your Name" << endl;
    cout << "============================================" << endl;

    return 0;
}
