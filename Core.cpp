#include <iostream>
#include <string>

#include "Function.h"
#include "GeneralFunction.h"
#include "ProductFunction.h"
#include "Polynomial.h"
#include "Trig.h"
#include "Constant.h"

using namespace std;
/*
TODO

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
	Function* f2 = new Polynomial(1, 1);

	Function* prod = new ProductFunction(f2, f1);

	Function* deriv1 = prod->diff();
	Function* deriv2 = deriv1->diff();
	Function* deriv3 = deriv2->diff();
	Function* deriv4 = deriv3->diff();

	prod->print();
	cout << "\n";
	deriv1->print();
	cout << "\n";
	deriv2->print();
	cout << "\n";
	deriv3->print();
	cout << "\n";
	deriv4->print();
	cout << "\n";

	cout << prod->eval(3.1415) << endl;
	cout << prod->eval(3.1415/2);

	return (0);
}
