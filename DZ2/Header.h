#ifndef HEAD_H
#define HEAD_H
#include <iostream>
#include <stdlib.h>//
#include <algorithm>
using namespace std;
void output_to_the_console(int* mass, unsigned size);
void func_check(string choice);
void menu_output(int x);
void random_values(int* arr, unsigned size);
void manual_input(int* arr, unsigned size);
void positive_values(int* arr, unsigned size);
void negative_values(int* arr, unsigned size);
void indentical_elements(int* arr, unsigned size);
voidmultiplication(int* arr, unsigned size);
void inver_an_array(int* arr, unsigned size);
void inverse_values(int* arr, unsigned size);
void universal_function(int* arr, unsigned size);
void (*function_selection(string choice))(int*, unsigned);
##pragma once
