#include <iostream>
#include "GeneralFunction.h"

using namespace std;

GeneralFunction::GeneralFunction(int n)
{
	this->size = n;
	this->elements = new Function*[n];

	for (int i = 0; i < n; i++) this->elements[i] = nullptr;
}

GeneralFunction::~GeneralFunction() 
{
	delete [] this->elements;
}

Function* GeneralFunction::diff() const
{
	GeneralFunction* ret = new GeneralFunction(this->size);

	for (int i = 0; i < this->size; i++) 
	{
		ret->addFunc(this->elements[i]->diff());
	}

	return ret;
}

double GeneralFunction::eval(double x) const
{
	double ret = 0;

	for (int i = 0; i < this->size; i++) ret += this->elements[i]->eval(x);
	

	return ret;
}

void GeneralFunction::print() const
{
	for (int i = 0; i < this->size; i++)
	{
		this->elements[i]->print();
		if (i != this->size - 1) cout << " + ";
	}
}

void GeneralFunction::plot() const
{
	//do
}

void GeneralFunction::export_func() const
{
	//do
}

void GeneralFunction::addFunc(Function* subject) 
{
	for (int i = 0; i < this->size; i++) 
	{
		if (this->elements[i] == nullptr)
		{
			this->elements[i] = subject;
			return;
		}
	}
}