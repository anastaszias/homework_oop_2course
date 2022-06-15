// Вариант 3: реализовать сортировку вставками для целых чисел, а затем перегрузить её для дробных и для комплексных
#include "Header.h"
int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int n = 0;
    cout << "Введите количество чисел, которые будут сортироваться: ";
    cin >> n;
    if (!cin) {
        cout << "Вы ввели неправильное число!Попробуйте снова!";
    }
    double* arr = new double[n];
    int* arr1 = new int[n];
    //заполнение случайными числами
    Complex_number* a = (Complex_number*)calloc(n, sizeof(Complex_number));
    memset(a, 0, n * sizeof(Complex_number));
    for (int i = 0; i < n; i++) random_values(a, n);
    random_values(arr1, n);
    random_values_for_double(arr, n);
    //вывод в консоль
    output_to_the_cosole(a, n);
    output_to_the_cosole(arr1, n);
    output_to_the_cosole(arr, n);
    //сортировка
    sorting_by_inserts(arr1, n);
    sorting_by_inserts(arr, n);
    sorting_by_inserts(a, n);
    //вторинчый вывод в консоль
    output_to_the_cosole(arr1, n);
    output_to_the_cosole(arr, n);
    output_to_the_cosole(a, n);
    //удаление динамической памяти
    delete_memory(arr);
    delete_memory(arr1);
    delete_memory(a);
}