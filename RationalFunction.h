#pragma once

#include "Function.h"

class RationalFunction : public Function {
private:
	Function* f;
	Function* g;
	//of form f/g
public:
	RationalFunction(Function*, Function*);
	~RationalFunction();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;
};