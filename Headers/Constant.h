#pragma once

#include "Function.h"

class Constant : public Function {
private:
	double value;
public:
	Constant(double c);
	~Constant();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;
};