/*3- (Employee Class) Create a class called Employee that includes three pieces of information as data members—a 
first name (type string), a last name (type string) and a monthly salary (type int). Your class should have a 
constructor that initializes the three data members. Provide a set and a get function for each data member. 
If the monthly salary is not positive, set it to 0. Write a test program that demonstrates class Employee’s 
capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Employee a 
10 percent raise and display each Employee’s yearly salary again.*/
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	cout << "Employees' yearly salaries: " << endl;
	
	Employee employee1("Lisa", "Roberts", 4500);
	Employee employee2("Mark", "Stein", 4000);

	cout << employee1.getFirstName() << " " << employee1.getLastName() << ": $" << employee1.getMonthlySalary() * 12 << endl;
	cout << employee2.getFirstName() << " " << employee2.getLastName() << ": $" << employee2.getMonthlySalary() * 12 << endl;
	
	cout << "\nEmployees' yearly salaries after a 10% raise: \n" << endl;

	employee1.setMonthlySalary(employee1.getMonthlySalary() + employee1.getMonthlySalary() / 10);
	employee2.setMonthlySalary(employee2.getMonthlySalary() + employee2.getMonthlySalary() / 10);

	cout << employee1.getFirstName() << " " << employee1.getLastName() << ": $" << employee1.getMonthlySalary() * 12 << endl;
	cout << employee2.getFirstName() << " " << employee2.getLastName() << ": $" << employee2.getMonthlySalary() * 12 << endl;
	
}