#ifndef FUN5_H
#define FUN5_H
#include <iostream>
#include<algorithm>
using namespace std;
void menu_output1();
int retrun_kol1();
void delete_memory1(double* mass, int n);
double* create_massiv1(int n);
void random_value1(double* mass, int n, string choice);
void output_to_the_console1(double* mass, int n, string choice);
void data_output_int2(int* mass, int n);
void task2(int* mass);
void delete_memory_int2(int* mass);
int array_size_lines3();
int array_size_columns3();
double** creating_memory3(int n, int p);
void fill_random_values3(double** mass, int n, int p);
void output_double_massiv3(double** massiv, int n, int p);
void delete_memory_task3(double** mass, int n, int p);
#endif