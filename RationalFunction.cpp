#include "RationalFunction.h"
#include "ProductFunction.h"
#include "CompositeFunction.h"
#include "GeneralFunction.h"
#include "Polynomial.h"
#include "Constant.h"
#include <iostream>
#include <math.h>

using namespace std;

RationalFunction::RationalFunction(Function* f_func, Function* g_func)
{
	this->f = f_func;
	this->g = g_func;
}

RationalFunction::~RationalFunction()
{
	delete this->f;
	delete this->g;
}

Function* RationalFunction::diff() const
{
	ProductFunction* n1 = new ProductFunction(this->f->diff(), this->g);

	Constant* s1n1 = new Constant(-1);
	ProductFunction* s1n2 = new ProductFunction(this->f, this->g->diff());
	ProductFunction* n2 = new ProductFunction(s1n1, s1n2);

	GeneralFunction* numerator = new GeneralFunction(2);
	numerator->addFunc(n1);
	numerator->addFunc(n2);

	Polynomial* d1 = new Polynomial(1, 2);
	CompositeFunction* denominator = new CompositeFunction(d1, this->g);

	RationalFunction * ret = new RationalFunction(numerator, denominator);

	return ret;
}

double RationalFunction::eval(double x) const
{
	double ret = this->f->eval(x) / this->g->eval(x);
	return ret;
}

void RationalFunction::print() const
{
	cout << "(";
	this->f->print();
	cout << ")/(";
	this->g->print();
	cout << ")";
}

void RationalFunction::plot() const
{
	//do
}

void RationalFunction::export_func() const
{
	//do
}