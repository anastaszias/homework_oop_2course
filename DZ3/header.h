#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;
struct circle {
	double pi = atan(1) * 4, r = 0;
	double getDiametr();
	double lenght();
	double square();
};
struct vectors {
	double c1 = 0.0, c2 = 0.0, c3 = 0.0;
	void output_vectors();
	vectors summa(vectors n);
	double scalar(vectors n);
	double corner(vectors n);
	double vectorial(vectors n);
	double mixed(vectors n, vectors n2);
};
#endif
