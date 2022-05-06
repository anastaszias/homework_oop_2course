#ifndef COMPLEXNOE_H
#define COMPLEXNOE_H
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include<cmath>
using namespace std;
struct Complexnoechislo {
	double real = 0, mnimoe = 0;
	void summa(Complexnoechislo n1);
	void vuchitanie(Complexnoechislo n1);
	void umnojenie(Complexnoechislo n1);
	void delenie(Complexnoechislo n1);
	void modul(Complexnoechislo n1);
	void pervonachalnui_vuvod(Complexnoechislo n1);
};
void chtenie(const char* path);
#endif#pragma once
