#pragma once

#include "Function.h"

class Exponential : public Function {
private:
	double coeff;
	Function* f;
	Function* g;
	//of form f^g
public:
	Exponential(double, Function*, Function*);
	~Exponential();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;
};