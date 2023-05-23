#include "number.h"
#include "functions.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	srand(time(0));

	unsigned int m, n;

	m = enter_size("раціональних");
	n = enter_size("комплексних");

	Rational* r_numbers = new Rational[m];
	Complex* c_numbers = new Complex[n];

	generate_rational_numbers(r_numbers, m);
	print_rational_numbers(r_numbers, m);

	generate_complex_numbers(c_numbers, n);
	print_complex_numbers(c_numbers, n);

	for (int i = 0; i < m; i++) {
		r_numbers[i].decrease(2);
	}
	for (int i = 0; i < n; i++) {
		c_numbers[i].increase(3);
	}

	cout << "Раціональні числа зменшені в два рази, а комплексні збільшені в три рази:" << endl;
	print_rational_numbers(r_numbers, m);
	print_complex_numbers(c_numbers, n);

	double sum = calculate_sum(r_numbers, m, c_numbers, n);

	cout << "Сума модулів усіх чисел: " << sum << endl;
		
	delete[] r_numbers;
	delete[] c_numbers;

	return 0;
}