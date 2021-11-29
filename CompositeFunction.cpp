#include "CompositeFunction.h"
#include "ProductFunction.h"
#include "GeneralFunction.h"
#include <iostream>
#include <math.h>

using namespace std;

CompositeFunction::CompositeFunction(Function* f_func, Function* g_func)
{
	this->f = f_func;
	this->g = g_func;
}

CompositeFunction::~CompositeFunction()
{
	delete this->f;
	delete this->g;
}

Function* CompositeFunction::diff() const
{
	CompositeFunction* f1 = new CompositeFunction(this->f->diff(), this->g);
	ProductFunction* ret = new ProductFunction(this->g->diff(), f1);

	return ret;
}

double CompositeFunction::eval(double x) const
{
	double ret = this->f->eval(this->g->eval(x));
	return ret;
}

void CompositeFunction::print() const
{
	cout << "(";
	this->f->print();
	cout << ")@(";
	this->g->print();
	cout << ")";
}

void CompositeFunction::plot() const
{
	//do
}

void CompositeFunction::export_func() const
{
	//do
}