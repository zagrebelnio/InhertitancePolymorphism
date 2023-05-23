#include "functions.h"

unsigned int enter_size(string s) {
	unsigned int size;
	cout << "Скільки об'єктів " << s << " чисел слід створити?" << endl;
	cin >> size;
	return size;
}

double generate_number(double min, double max) {
	return min + (max - min) * ((double)rand() / RAND_MAX);
}

void generate_rational_numbers(Rational* r_numbers, unsigned int num) {
	for (int i = 0; i < num; i++) {
		r_numbers[i].setValue(generate_number(MIN, MAX));
	}
}

void print_rational_numbers(Rational* r_numbers, unsigned int num) {
	for (int i = 0; i < num; i++) {
		cout << "Раціональне число " << setw(3) << i + 1 << ": " << setw(10) << fixed << r_numbers[i].getValue() << endl;
	}
}

void generate_complex_numbers(Complex* c_numbers, unsigned int num) {
	for (int i = 0; i < num; i++) {
		c_numbers[i].setRe(generate_number(MIN, MAX));
		c_numbers[i].setIm(generate_number(MIN, MAX));
	}
}

void print_complex_numbers(Complex* c_numbers, unsigned int num) {
	for (int i = 0; i < num; i++) {
		cout << " Комплексне число " << setw(3) << i + 1 << ": " << setw(10) << fixed << c_numbers[i].getRe();
		if (c_numbers[i].getIm() < 0) {
			cout << " - " << setw(10) << fixed << -c_numbers[i].getIm() << "*i" << endl;
		}
		else {
			cout << " + " << setw(10) << fixed << c_numbers[i].getIm() << "*i" << endl;
		}
	}
}

double calculate_sum(Rational* r_numbers, unsigned int m, Complex* c_numbers, unsigned int n) {
	double sum = 0;
	for (int i = 0; i < m; i++) {
		sum += r_numbers[i].module();
	}
	for (int i = 0; i < n; i++) {
		sum += c_numbers[i].module();
	}
	return sum;
}