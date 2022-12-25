// Fig. 12.17: fig12_17.cpp
// Processing Employee derived-class objects individually 
// and polymorphically using dynamic binding.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h" 
#include "CommissionEmployee.h"  
#include "BasePlusCommissionEmployee.h" 
#include "PieceWorker.h"
#include "HourlyWorker.h"
using namespace std;

void virtualViaPointer(const Employee* const); // prototype
void virtualViaReference(const Employee&); // prototype

int main()
{
    // set floating-point output formatting
    cout << fixed << setprecision(2);

    // create derived-class objects
    SalariedEmployee salariedEmployee(
        "John", "Smith", "111-11-1111", 800);
    CommissionEmployee commissionEmployee(
        "Sue", "Jones", "333-33-3333", 10000, .06);
    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Bob", "Lewis", "444-44-4444", 5000, .04, 300);
    PieceWorker pieceWorker("Michael", "Scott", "555-55-5555", 22.5, 30);
    HourlyWorker hourlyWorker("Dwight", "Schrute", "888-88-8888", 16.75, 45);

    // create vector of five base-class pointers
    vector < Employee* > employees(5);

    // initialize vector with Employees
    employees[0] = &salariedEmployee;
    employees[1] = &commissionEmployee;
    employees[2] = &basePlusCommissionEmployee;
    employees[3] = &pieceWorker;
    employees[4] = &hourlyWorker;

    for (int i = 0; i < employees.size(); i++) {
        std::cout << "Employee " << i + 1 << "\n" << std::endl;
        employees[i]->print();
        std::cout << "\n" << "The earnings for Employee " << i + 1 <<" is $" << employees[i]->earnings();
        std::cout << "\n\n";
    }
}