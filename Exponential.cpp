#include "Exponential.h"
#include "Constant.h"
#include <iostream>
#include <math.h>

using namespace std;

Exponential::Exponential(double c, double b)
{
	this->coeff = c;
	this->base = b;
}

Exponential::~Exponential() {}

Function* Exponential::diff() const
{
	return new Exponential(this->coeff * log(this->base), this->base);
}

double Exponential::eval(double x) const
{
	double ret = this->coeff * pow(this->base, x);
	return ret;
}

void Exponential::print() const
{
	if (coeff != 1) cout << "(" << this->coeff << ")";
	cout << this->base << "^x";
}

void Exponential::plot() const
{
	//do
}

void Exponential::export_func() const
{
	//do
}