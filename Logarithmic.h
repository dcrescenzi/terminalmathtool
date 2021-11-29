#pragma once

#include "Function.h"

class Logarithmic : public Function {
private:
	double coeff;
	double base;
public:
	Logarithmic(double a, double b);
	~Logarithmic();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;
};