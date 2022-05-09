#include "fun7.h"
void Complex_number::console_output_complex_number() {
	if (((this->real > 0) and (this->mnimoe > 0)) or ((this->real < 0) and (this->mnimoe > 0))) {
		cout << this->real << "+" << this->mnimoe << "*i\n";
	}
	if (((this->real > 0) and (this->mnimoe < 0)) or ((this->real < 0) and (this->mnimoe < 0))) {
		cout << this->real << this->mnimoe << "*i\n";
	}
}
Complex_number Complex_number::summ(Complex_number n1) {
	return Complex_number(this->real + n1.real, this->mnimoe + n1.mnimoe);
}
Complex_number Complex_number::substraction(Complex_number n1) {
	return Complex_number(this->real - n1.real, this->mnimoe + n1.mnimoe);
}
Complex_number Complex_number::multyply(Complex_number n1) {
	return Complex_number((n1.mnimoe + this->mnimoe) * (-1) + n1.real * this->real, (n1.real + this->real) * (this->mnimoe + n1.mnimoe));
}
Complex_number Complex_number::division(Complex_number n1) {
	return Complex_number(((this->real * n1.real + n1.mnimoe * this->mnimoe) / (this->real * this->real + this->mnimoe * this->mnimoe)), ((this->real * n1.mnimoe - n1.real * this->mnimoe) / (this->real * this->real + this->mnimoe * this->mnimoe)));
}
double Complex_number::modul() {
	return sqrt(this->real * this->real + this->mnimoe * this->mnimoe);
}
double circle::getDiametr() {
	return this->r * 2;
}
double circle::square() {
	return pi * this->r * this->r;
}
double circle::lenght() {
	return 2 * pi * this->r;
}
void vector::output_vector() {
	cout << this->c1 << ", " << this->c2 << ", " << this->c3 << endl;
}
vector vector::summa(vector n) {
	return vector(this->c1 + n.c1, this->c2 + n.c2, this->c3 + n.c3);
}
double vector::scalar(vector n) {
	return n.c1 * this->c1 + n.c2 * this->c2 + c3 * this->c3;
}
double scalar_products(double a, double b, double c, double a1, double b1, double c1) {
	return a * a1 + b * b1 + c * c1;
}
double vector::corner(vector n) {
	double c = scalar(n) / (sqrt(scalar_products(n.c1, n.c2, n.c3, n.c1, n.c2, n.c3) * scalar_products(this->c1, this->c2, this->c3, this->c1, this->c2, this->c3)));
	if (c < -1) {
		c = -1;
	}
	else if (c > 1) {
		c = 1;
	}
	return 57.3 * acos(c);
}
double vector::vectorial(vector n) {
	return (n.c2 * this->c3 - n.c3 * this->c2) + (n.c3 * this->c1 - n.c1 * this->c3) + (n.c1 * this->c2 - n.c2 * this->c1);
}
double vector::mixed(vector n, vector n2) {
	return this->c1 * (n.c2 * n2.c3 - n.c3 * n2.c2) - this->c2 * (n.c1 * n2.c3 - n.c3 * n2.c1) + this->c3 * (n.c1 * n2.c2 - n.c2 * n2.c1);
}