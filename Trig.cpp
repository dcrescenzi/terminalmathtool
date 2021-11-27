#include "Trig.h"
#include "Constant.h"
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

Trig::Trig(double a, string trig_type)
{
	this->coeff = a;
	this->type = trig_type; //either sin or cos, turn into enum later
}

Trig::~Trig() {}

Function* Trig::diff() const
{
	Function* ret;

	if (type == "sin") ret = new Trig(this->coeff, "cos");
	else ret = new Trig(this->coeff * -1, "sin");

	return ret;
}

double Trig::eval(double x) const
{
	double ret = this->coeff;

	if (type == "sin") ret *= sin(x);
	else ret *= cos(x);

	return ret;
}

void Trig::print() const
{
	if (coeff != 1) cout << this->coeff;
	if (type == "sin") cout << "sin(x)";
	else cout << "cos(x)";
}

void Trig::plot() const
{
	//do
}

void Trig::export_func() const
{
	//do
}

