#include "Logarithmic.h"
#include "Constant.h"
#include "Polynomial.h"
#include "ProductFunction.h"
#include "RationalFunction.h"
#include <iostream>
#include <math.h>

using namespace std;

Logarithmic::Logarithmic(double a, double b)
{
	this->coeff = a;
	this->base = b;
}

Logarithmic::~Logarithmic() {}

Function* Logarithmic::diff() const
{
	Constant* num = new Constant(this->coeff);

	Constant* denomCoeff = new Constant(log(this->base));
	Polynomial* denomPoly = new Polynomial(1, 1);

	ProductFunction* denom = new ProductFunction(denomCoeff, denomPoly);
	RationalFunction* ret = new RationalFunction(num, denom);

	return ret;
}

double Logarithmic::eval(double x) const
{
	double ret = this->coeff * (log10(x) / log10(this->base));
	return ret;
}

void Logarithmic::print() const
{
	cout << this->coeff;
	cout << "log_" << this->base << "_(x)";
}

void Logarithmic::plot() const
{
	//do
}

void Logarithmic::export_func() const
{
	//do
}

