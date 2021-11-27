#include "ProductFunction.h"
#include "GeneralFunction.h"
#include <iostream>
#include <math.h>

using namespace std;

ProductFunction::ProductFunction(Function* f_func ,Function* g_func)
{
	this->f = f_func;
	this->g = g_func;
}

ProductFunction::~ProductFunction() 
{
	delete this->f;
	delete this->g;
}

Function* ProductFunction::diff() const
{
	GeneralFunction* ret = new GeneralFunction(2);

	Function* term1 = new ProductFunction(this->f->diff(), this->g);
	Function* term2 = new ProductFunction(this->f, this->g->diff());

	ret->addFunc(term1);
	ret->addFunc(term2);

	return ret;
}

double ProductFunction::eval(double x) const
{
	double ret = this->f->eval(x) * this->g->eval(x);
	return ret;
}

void ProductFunction::print() const
{
	cout << "(";
	this->f->print();
	cout << ")(";
	this->g->print();
	cout << ")";
}

void ProductFunction::plot() const
{
	//do
}

void ProductFunction::export_func() const
{
	//do
}