#pragma once

class Function {
private:
public:
	//Function();
	//Function(const Function&);
	//virtual ~Function(); do we need these? These is nothing to create, delete, copy etc
		
	virtual Function* diff() const =0;
	virtual double eval(double x) const =0;
	virtual void print() const =0;
	virtual void plot() const =0;
	virtual void export_func() const =0;
};