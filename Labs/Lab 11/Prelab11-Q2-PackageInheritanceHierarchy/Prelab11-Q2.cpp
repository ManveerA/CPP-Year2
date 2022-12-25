#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
	std::cout << std::fixed << std::setprecision(2);

	Package pkg("Michael Scott", "15 Dunder Mifflin Street", "Scranton", "PA", "55555",
		"Dwight Schrute", "20 Beet Lane", "Beetville", "PA", "11111", 5, 2.2);

	TwoDayPackage pkgTwoDay("Jim Halpert", "10 Normal Road", "Philadelphia", "PA", "22222",
		"Pam Halpert", "25 Art Avenue", "New York", "NY", "12345", 5, 2.2, 5);

	OvernightPackage pkgOvernight("Stanley Hudson", "50 Vacation Street", "Miami", "FL", "77777",
		"Phyllis Vance", "40 Ordinary Lane", "Scranton", "PA", "99999", 5, 2.2, 1.5);

	std::cout << "--- Package 1 (Regular Package) --- \n" << std::endl;
	pkg.printPackageInfo();
	std::cout << "\nCost: $" << pkg.calculateCost() << std::endl;

	std::cout << "\n--- Package 2 (Two Day Package) ---\n" << std::endl;
	pkgTwoDay.printPackageInfo();
	std::cout << "\nCost: $" << pkgTwoDay.calculateCost() << std::endl;

	std::cout << "\n--- Package 3 (Overnight Package) ---\n" << std::endl;
	pkgOvernight.printPackageInfo();
	std::cout << "\nCost: $" << pkgOvernight.calculateCost() << std::endl;
}