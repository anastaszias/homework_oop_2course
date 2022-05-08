#include "header.h"
double circle::getDiametr() {
	return this->r * 2;
}
double circle::square() {
	return pi * this->r * this->r;
}
double circle::lenght() {
	return 2 * pi * this->r;
}
void vectors::output_vectors() {
	cout << this->c1 << ", " << this->c2 << ", " << this->c3;
}
vectors vectors::summa(vectors n) {
	vectors n1;
	n1.c1 = this->c1 + n.c1;
	n1.c2 = this->c2 + n.c2;
	n1.c3 = this->c3 + n.c3;
	return n1;
}
double vectors::scalar(vectors n) {
	return n.c1 * this->c1 + n.c2 * this->c2 + c3 * this->c3;
}
double vectors::corner(vectors n) {
	return (n.c1 * this->c1 + n.c2 * this->c2 + n.c3 * this->c3) / (sqrt(n.c1 * n.c1 + n.c2 * n.c2 + n.c3 * n.c3) * sqrt(this->c1 * this->c1 + this->c2 * this->c2 + this->c3 * this->c3));
}
double vectors::vectorial(vectors n) {
	return (n.c2 * this->c3 - n.c3 * this->c2) + (n.c3 * this->c1 - n.c1 * this->c3) + (n.c1 * this->c2 - n.c2 * this->c1);
}
double vectors::mixed(vectors n, vectors n2) {
	return this->c1 * (n.c2 * n2.c3 - n.c3 * n2.c2) - this->c2 * (n.c1 * n2.c3 - n.c3 * n2.c1) + this->c3 * (n.c1 * n2.c2 - n.c2 * n2.c1);
}
