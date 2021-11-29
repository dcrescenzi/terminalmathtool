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

	Function* f1 = new Trig(1, "sin");
	Function* f3 = new Exponential(2, 2);
	
	Function* f2 = new Logarithmic(4, 2);

	Function* s1 = new CompositeFunction(f2, f1);

	Function* sinlog = new ProductFunction(s1, f3);
	
	GeneralFunction* numer = new GeneralFunction(2);
	numer->addFunc(sinlog);
	numer->addFunc(f3);

	Function* t1 = new Trig(1.5, "cos");
	Function* t2 = new Polynomial(1, 4);

	Function* denom = new ProductFunction(t1, t2);

	Function* func = new RationalFunction(numer, denom);


	func->print();
	cout << endl;

	cout << func->diff()->diff()->diff()->eval(2.2) << endl;
	func->diff()->diff()->diff()->print();
	

	return (0);
}
