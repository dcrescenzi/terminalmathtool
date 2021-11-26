#pragma once

#include "Function.h"

class Polynomial : public Function {
private:
	double coeff;
	int degree;
public:
	Polynomial(double a, int n);
	~Polynomial();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;
};