#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
template <typename T>//øàáëîííûé ôóíêöèè
void sorting_by_inserts(T* mass, unsigned n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; (j > 0) && (mass[j - 1] > mass[j]); j--) {
			swap(mass[j - 1], mass[j]);
		}
	}
}
template <typename T>
void delete_memory(T* mass) {
	delete[]mass;
}
void random_values(int* arr1, unsigned n);
void random_values_for_double(double* arr1, unsigned n);
void output_to_the_cosole(int* arr, unsigned n);
void output_to_the_cosole(double* arr, unsigned n);
class Complex_number {
	double real, mnimoe;
public:
	Complex_number() : real(0), mnimoe(0) {
	}
	Complex_number(double valueREAL, double valueMNIMOE) {
		real = valueREAL;
		mnimoe = valueMNIMOE;
	}
	double modul();
	void output_to_the_cosole();
	friend bool operator>(Complex_number n1, Complex_number n2);
	friend bool operator<(Complex_number n1, Complex_number n2);
	friend bool operator==(Complex_number n1, Complex_number n2);
	~Complex_number() {
	}
};
Complex_number* random_values(Complex_number* a, unsigned n);
void output_to_the_cosole(Complex_number* mass, unsigned n);
#endif#pragma once
