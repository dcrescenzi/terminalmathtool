#include "Polynomial.h"
#include "Constant.h"
#include <iostream>
#include <cmath>

using namespace std;

Polynomial::Polynomial(double a, int n) 
{
	this->coeff = a;
	this->degree = n;
}

Polynomial::~Polynomial() {}

Function* Polynomial::diff() const
{
	Function* ret;

	if (this->degree == 1) ret = new Constant(this->coeff);
	else ret = new Polynomial(this->coeff * this->degree, this->degree - 1); 

	return ret;
}

double Polynomial::eval(double x) const 
{
	double ret = this->coeff * pow(x, this->degree);
	return ret;
}

void Polynomial::print() const 
{
	cout << this->coeff << "x^" << this->degree;
}

void Polynomial::plot() const 
{
	//do
}

void Polynomial::export_func() const 
{
	//do
}

