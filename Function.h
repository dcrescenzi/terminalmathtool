#pragma once

class Function {
private:
public:
	Function();
	Function(const Function&);
	virtual ~Function();
		
	virtual Function* diff() const;
	virtual double eval(double x) const;
	virtual void print() const;
	virtual void plot() const;
	virtual void export_func() const;
};