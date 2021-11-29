#include <iostream>
#include <string>

#include "Function.h"
#include "GeneralFunction.h"
#include "ProductFunction.h"
#include "CompositeFunction.h"
#include "RationalFunction.h"
#include "Polynomial.h"
#include "Trig.h"
#include "Constant.h"

using namespace std;
/*
TODO

	handle NaN cases
	composite function printing, see below

	comment!!

	destructors for all obj w pointers
	copy con, overloaded assignment for funcs with pointers
	enum for sin and cos

	new print function that prints a func @ something (later used for composite)
	along with that an abstract methos that returns functions as a string (for above)

	function cleanup method 
		- if its a product function with 0 * something, dont add it
		- if its a product with anything else primitive, combine coeffs
		- more to come

	INPUT
		-constant recognition, ex pi, e ...

	OUTPUT
		-number cleaning, ex 0.000001323 -> 1, 0.99992193 -> 1 etc
		-common constant recognition?? ex pi/n

	Division by zero, log < 0, etc.  Im numbers??
*/


int main() 
{

	Function* f1 = new Trig(1, "sin");
	Function* f2 = new Polynomial(1, 2);

	CompositeFunction* josh = new CompositeFunction(f2, f1);
	RationalFunction* josh1 = new RationalFunction(f1, f2);

	cout << josh->diff()->eval(1.23) << endl;
	cout << josh1->diff()->eval(1.23) << endl;

	return (0);
}
