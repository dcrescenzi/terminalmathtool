#pragma once

#include <string>
#include "Function.h"

using namespace std;

class Trig : public Function {
private:
	double coeff;
	string type;
public:
	Trig(double a, string type);
	~Trig();

	Function* diff() const;
	double eval(double x) const;
	void print() const;
	void plot() const;
	void export_func() const;
};