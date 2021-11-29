#pragma once

#include "Function.h"

class Exponential : public Function {
private:
	double coeff;
	double base;
public:
	Exponential(double, double);
	~Exponential();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;
};