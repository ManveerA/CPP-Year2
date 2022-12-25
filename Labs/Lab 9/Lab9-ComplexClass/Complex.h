class Complex {
public:
	Complex(double=1, double=2);
	void add(double i1, double j1);
	void subtract(double i2, double j2);
	void print();
	double getReal();
	double getImag();
private:
	double realNum;
	double imagNum;
};