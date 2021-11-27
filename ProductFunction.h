#pragma once

#include "Function.h"

class ProductFunction : public Function {
private:
	Function* f; 
	Function* g;
	//of form (f)(g)
public:
	ProductFunction(Function*, Function*);
	~ProductFunction();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;
};