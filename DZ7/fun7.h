#ifndef FUN7_H
#define FUN7_H
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class Complex_number {
	double real, mnimoe;
public:
	Complex_number(double x, double y) :real(x), mnimoe(y) {
	}
	Complex_number summ(Complex_number n1);
	Complex_number substraction(Complex_number n1);
	Complex_number multyply(Complex_number n1);
	Complex_number division(Complex_number n1);
	double modul();
	void console_output_complex_number();
	~Complex_number() {
	}
};
class circle {
private:
	double pi = atan(1) * 4, r;
public:
	circle(double x) :r(x) {
	}
	double getDiametr();
	double lenght();
	double square();
	~circle() {
	}
};
class vector {
private:
	double c1, c2, c3;
public:
	vector(double x, double y, double z) : c1(x), c2(y), c3(z) {
	}
	void output_vector();
	vector summa(vector n);
	double scalar(vector n);
	double corner(vector n);
	double vectorial(vector n);
	double mixed(vector n, vector n2);
	~vector() {
	}
};
#endif
