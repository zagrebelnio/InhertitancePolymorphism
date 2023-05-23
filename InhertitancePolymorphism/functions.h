#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include "number.h"
#define MIN -10
#define MAX 10

using namespace std;

unsigned int enter_size(string s);

double generate_number(double min, double max);

void generate_rational_numbers(Rational* r_numbers, unsigned int num);

void print_rational_numbers(Rational* r_numbers, unsigned int num);

void generate_complex_numbers(Complex* r_numbers, unsigned int num);

void print_complex_numbers(Complex* r_numbers, unsigned int num);

double calculate_sum(Rational* r_numbers, unsigned int m, Complex* c_numbers, unsigned int n);