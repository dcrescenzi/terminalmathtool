#include <iostream>
#include "Function.h"
#include "GeneralFunction.h"
#include "Polynomial.h"
#include "Constant.h"

using namespace std;

int main() 
{

	GeneralFunction* f = new GeneralFunction(3);
	GeneralFunction* g = new GeneralFunction(1);

	Function* p1 = new Polynomial(3, 2);
	Function* p2 = new Polynomial(-4, 1);
	Function* p3 = new Constant(2);

	Function* poly = new Polynomial(1, 8);

	f->addFunc(p1);
	f->addFunc(p2);
	f->addFunc(p3);

	Function* deriv = f->diff();

	g->addFunc(poly);

	f->print();
	cout << "\n";
	g->print();
	cout << "\n";
	deriv->print();


	return (0);
}
