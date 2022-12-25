#include "PieceWorker.h"
#include <iostream>

PieceWorker::PieceWorker(const std::string& first,
	const std::string& last, const std::string& ssn, double _wage, int _pieces)
	:Employee(first, last, ssn)
{
	wage = _wage;
	pieces = _pieces;
}

double PieceWorker::earnings() const {
	return wage * pieces;
}

void PieceWorker::print() const
{
	std::cout << "PieceWorker employee: ";
	Employee::print(); // code reuse
	std::cout << "\nwage per piece: " << wage
		<< "; number of pieces: " << pieces;
	
} // end function print