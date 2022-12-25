#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include "Employee.h"

class PieceWorker : public Employee {
public:
	PieceWorker(const std::string&, const std::string&,
		const std::string&, double = 0.0, int = 0);
	virtual ~PieceWorker() {};

	virtual double earnings() const override;
	virtual void print() const override;

private:
	double wage;
	int pieces;
};

#endif // !PIECEWORKER_H