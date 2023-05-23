#pragma once

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

class Number {
protected:
	double value;
public:
	Number(double value);
	virtual void increase(double times) = 0;
	virtual void decrease(double times) = 0;
	virtual double module() = 0;
};

class Rational : public Number {
public:
	Rational();
	Rational(double value);
	void setValue(double number);
	double getValue();
	void increase(double times) override;
	void decrease(double times) override;
	double module() override;
};

class Complex : public Number {
	double Im;
public:
	Complex();
	Complex(double value, double Im);
	void setRe(double re);
	void setIm(double im);
	double getRe();
	double getIm();
	void increase(double times);
	void decrease(double times);
	double module();
};