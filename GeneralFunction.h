#pragma once

#include "Function.h"

class GeneralFunction : public Function {
private:
	Function** elements;
	int size;
public:
	GeneralFunction(int n);
	~GeneralFunction();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;

	void addFunc(Function*);
};