#include "Constant.h"
#include <iostream>
#include <cmath>

using namespace std;

Constant::Constant(double c)
{
	this->value = c;
}

Constant::~Constant() {}

Function* Constant::diff() const
{
	Function* ret = new Constant(0);
	return ret;
}

double Constant::eval(double x) const
{
	return this->value;
}

void Constant::print() const
{
	cout << this->value;
}

void Constant::plot() const
{
	//do
}

void Constant::export_func() const
{
	//do
}