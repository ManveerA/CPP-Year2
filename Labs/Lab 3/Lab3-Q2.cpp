/*2- (Invoice Class) Create a class called Invoice that a hardware store might use to represent an invoice for 
an item sold at the store. An Invoice should include four data members—a part number (type string), a part 
description (type string), a quantity of the item being purchased (type int) and a price per item (type int). 
Your class should have a constructor that initializes the four data members. Provide a set and a get function 
for each data member. In addition, provide a member function named getInvoiceAmount that calculates the invoice 
amount (i.e., multiplies the quantity by the price per item), then returns the amount as an int value. If the 
quantity is not positive, it should be set to 0. If the price per item is not positive, it should be set to 0. 
Write a test program that demonstrates class Invoice’s capabilities.*/
#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
	Invoice invoice1("12345", "Hammer", 100, 5);
	cout << "Part number: " << invoice1.getPartNumber() << endl;
	cout << "Part description: " << invoice1.getPartDescription() << endl;
	cout << "Quantity: " << invoice1.getPartQuantity() << endl;
	cout << "Price per item: " << invoice1.getPartPrice() << endl;
	cout << "Invoice amount: " << invoice1.getInvoiceAmount() << endl;

	invoice1.setPartNumber("123456");
	invoice1.setPartDescription("Saw");
	invoice1.setPartQuantity(0);
	invoice1.setPartPrice(10);
	
	cout << "\nInvoice data members modified.\n" << endl;

	cout << "Part number: " << invoice1.getPartNumber() << endl;
	cout << "Part description: " << invoice1.getPartDescription() << endl;
	cout << "Quantity: " << invoice1.getPartQuantity() << endl;
	cout << "Price per item: " << invoice1.getPartPrice() << endl;
	cout << "Invoice amount: " << invoice1.getInvoiceAmount() << endl;
	

}
