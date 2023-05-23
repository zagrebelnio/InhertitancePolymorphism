#include "number.h"

Number::Number(double value) {
	this->value = value;
}

Rational::Rational() : Number(0) {}

Rational::Rational(double value) : Number(value) {}

void Rational::setValue(double number) {
	value = number;
}

double Rational::getValue() {
	return value;
}

void Rational::increase(double times) {
	value *= times;
}

void Rational::decrease(double times) {
	value /= times;
}

double Rational::module() {
	return fabs(value);
}

Complex::Complex() : Number(0), Im(0) {}

Complex::Complex(double value, double Im) : Number(value) {
	this->Im = Im;
}

void Complex::setRe(double re) {
	value = re;
}

void Complex::setIm(double im) {
	Im = im;
}

double Complex::getRe() {
	return value;
}

double Complex::getIm() {
	return Im;
}

void Complex::increase(double times) {
	value *= times;
	Im *= times;
}

void Complex::decrease(double times) {
	value /= times;
	Im /= times;
}

double Complex::module() {
	return sqrt(pow(value, 2) + pow(Im, 2));
}
