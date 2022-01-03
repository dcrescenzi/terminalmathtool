#include <iostream>
#include <string>

#include "Function.h"
#include "GeneralFunction.h"
#include "ProductFunction.h"
#include "CompositeFunction.h"
#include "RationalFunction.h"
#include "Polynomial.h"
#include "Logarithmic.h"
#include "Exponential.h"
#include "Trig.h"
#include "Constant.h"

#include "InputHelper.h"

using namespace std;
/*
TODO

	handle NaN cases
	Division by zero, log < 0, etc.  Im numbers??

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
*/


int main() 
{
	InputHelper input;

	Function* func = input.intake();

	func->print();
	cout << endl;
	func->diff()->print();
	cout << endl;
	cout << func->diff()->eval(2.2) << endl;

	return (0);
}
