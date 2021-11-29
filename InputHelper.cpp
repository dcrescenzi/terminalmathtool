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

Function* InputHelper::intake() 
{
	string funcType;

	cout << "Please enter a function type:" << endl;
	cout << "[Constant (const) | Polynomial (poly) | Trig (trig) | Exponential (expo) | Logarithmic (log)]" << endl;
	cout << "[General (genfunc) | Product (prodfunc) | Rational (ratfunc) | Composite (compfunc)]" << endl;

	cin >> funcType;

	cout << endl;

	//error check make sure it's one of the proper inputs

	if (funcType == "genfunc") {
		int n;
		cout << "Enter number of terms: ";

		cin >> n;
		cout << endl;

		GeneralFunction* ret = new GeneralFunction(n);

		for (int i = 0; i < n; i++) 
		{
			cout << "Term " << (i + 1) << ": " << endl;
			ret->addFunc(intake());
		}

		return ret;
	}
	else if (funcType == "prodfunc") {
	
		Function* f;
		Function* g;

		cout << "Enter first function (f in f*g): " << endl;
		f = intake();

		cout << "Enter second function (g in f*g): " << endl;
		g = intake();

		return new ProductFunction(f, g);
	}
	else if (funcType == "ratfunc") {

		Function* f;
		Function* g;

		cout << "Enter numerator function (f in f/g): " << endl;
		f = intake();

		cout << "Enter denominator function (g in f/g): " << endl;
		g = intake();

		return new RationalFunction(f, g);
	}
	else if (funcType == "compfunc") {
	
		Function* f;
		Function* g;

		cout << "Enter outer function (f in f(g)): " << endl;
		f = intake();

		cout << "Enter second function (g in f(g)): " << endl;
		g = intake();

		return new CompositeFunction(f, g);
	}
	else if (funcType == "const") {
		double c;

		cout << "Enter constant value: " << endl;
		cin >> c;
		cout << endl;

		return new Constant(c);
	} 
	else if (funcType == "poly") {
		double c;
		int degree;

		cout << "Enter coefficient: " << endl;
		cin >> c;
		cout << endl;

		cout << "Enter degree: " << endl;
		cin >> degree;
		cout << endl;

		return new Polynomial(c, degree);
	}
	else if (funcType == "trig") {
		string type;
		double c;

		cout << "Enter coefficient: " << endl;
		cin >> c;
		cout << endl;

		cout << "Enter trig type [sin | cos]: " << endl;
		cin >> type;
		cout << endl;

		return new Trig(c, type);
	}
	else if (funcType == "expo") {
	
		double c, base;

		cout << "Enter coefficient: " << endl;
		cin >> c;
		cout << endl;

		cout << "Enter base: " << endl;
		cin >> base;
		cout << endl;

		return new Exponential(c, base);
	}
	else if (funcType == "log") {
	
		double c, base;

		cout << "Enter coefficient: " << endl;
		cin >> c;
		cout << endl;

		cout << "Enter base: " << endl;
		cin >> base;
		cout << endl;

		return new Logarithmic(c, base);
	}

	cout << endl;
}