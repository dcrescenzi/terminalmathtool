#pragma once

#include "Function.h"

class CompositeFunction : public Function {
private:
	Function* f;
	Function* g;
	//of form f of g
public:
	CompositeFunction(Function*, Function*);
	~CompositeFunction();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;
};