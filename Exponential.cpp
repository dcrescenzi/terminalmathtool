#include "Exponential.h"
#include "Constant.h"
#include <iostream>
#include <math.h>

using namespace std;

Exponential::Exponential(double c, Function* f_func, Function* g_func)
{
	//form c*f^g
	this->coeff = c;
	this->f = f_func;
	this->g = g_func;
}

Exponential::~Exponential()
{
	delete this->f;
	delete this->g;
}

Function* Exponential::diff() const
{
	return new Constant(3);
	//everything down
	//return ret;
}

double Exponential::eval(double x) const
{
	double ret = pow(this->f->eval(x), this->g->eval(x));
	return ret;
}

void Exponential::print() const
{
	this->f->print();
	cout << ")(";
	this->g->print();
	cout << ")";
}

void Exponential::plot() const
{
	//do
}

void Exponential::export_func() const
{
	//do
}