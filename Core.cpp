#include <iostream>
#include "Function.h"
#include "GeneralFunction.h"
#include "ProductFunction.h"
#include "Polynomial.h"
#include "Constant.h"

using namespace std;
/*
TODO

	copy con, overloaded assignment for funcs with pointers
*/


int main() 
{

	Function* f1 = new Polynomial(1, 1);
	Function* f2 = new Polynomial(1, 1);

	Function* prod = new ProductFunction(f1, f2);

	Function* deriv = prod->diff();

	prod->print();
	cout << "\n";
	deriv->print();


	return (0);
}
