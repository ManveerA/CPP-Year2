#pragma once
#include <string>
class Invoice {
public:
	Invoice(std::string _partNumber, std::string _partDescription, int _partQuantity, int _partPrice) {
		partNumber = _partNumber;
		partDescription = _partDescription;
		partQuantity = _partQuantity;
		partPrice = _partPrice;
		if (partQuantity < 0) {
			partQuantity = 0;
		}
		if (partPrice < 0) {
			partPrice = 0;
		}
	}
	void setPartNumber(std::string newPartNumber) {
		partNumber = newPartNumber;
	}
	std::string getPartNumber() {
		return partNumber;
	}
	void setPartDescription(std::string newPartDescription) {
		partDescription = newPartDescription;
	}
	std::string getPartDescription() {
		return partDescription;
	}
	void setPartQuantity(int newPartQuantity) {
		partQuantity = newPartQuantity;
	}
	int getPartQuantity() {
		return partQuantity;
	}
	void setPartPrice(int newPartPrice) {
		partPrice = newPartPrice;
	}
	int getPartPrice() {
		return partPrice;
	}
	int getInvoiceAmount() {
		int invoiceAmount = partQuantity * partPrice;
		return invoiceAmount;
	}
private:
	std::string partNumber;
	std::string partDescription;
	int partQuantity;
	int partPrice;
};