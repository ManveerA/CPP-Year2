#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>
using namespace std;

int main()
{
	std::cout << std::fixed << std::setprecision(2);

	Package package1("Michael Scott", "15 Dunder Mifflin Street", "Scranton", "PA", "55555",
		"Dwight Schrute", "20 Beet Lane", "Beetville", "PA", "11111", 5, 2.2);

	TwoDayPackage package2("Jim Halpert", "10 Normal Road", "Philadelphia", "PA", "22222",
		"Pam Halpert", "25 Art Avenue", "New York", "NY", "12345", 5, 2.2, 5);

	OvernightPackage package3("Stanley Hudson", "50 Vacation Street", "Miami", "FL", "77777",
		"Phyllis Vance", "40 Ordinary Lane", "Scranton", "PA", "99999", 5, 2.2, 1.5);

	std::vector<Package*>vectorOfPackages(3);
	vectorOfPackages[0] = &package1;
	vectorOfPackages[1] = &package2;
	vectorOfPackages[2] = &package3;

	double totalCost = 0;

	for (int i = 0; i < vectorOfPackages.size(); i++) {
		std::cout << "Package " << i + 1 << "\n\nSender:\n" << vectorOfPackages[i]->getNameS() << "\n"
			<< vectorOfPackages[i]->getAddressS() << "\n" << vectorOfPackages[i]->getCityS()
			<< ", " << vectorOfPackages[i]->getStateS() << " " << vectorOfPackages[i]->getZipCodeS()
			<< "\n" << std::endl;
		std::cout << "Recipient:\n" << vectorOfPackages[i]->getNameR() << "\n" 
			<< vectorOfPackages[i]->getAddressR() << "\n" << vectorOfPackages[i]->getCityR()
			<< ", " << vectorOfPackages[i]->getStateR() << " " << vectorOfPackages[i]->getZipCodeR()
			<< "\n" << std::endl;
		std::cout << "Cost: $" << vectorOfPackages[i]->calculateCost() << "\n" << std::endl;
		totalCost += vectorOfPackages[i]->calculateCost();
	}
	std::cout << "Total shipping cost: $" << totalCost << std::endl;
}