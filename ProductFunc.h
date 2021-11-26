#pragma once

#include "Function.h"

class ProductFunc : public Function {
private:
	Function* f; 
	Function* g;
	//of form (f)(g)
public:
	ProductFunc(Function*, Function*);
	~ProductFunc();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;
};