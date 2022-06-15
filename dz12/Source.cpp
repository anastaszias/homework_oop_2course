#include"Header.h"
void random_values(int* arr1, unsigned n) {//çàïîëíåíèå ìàññèâà ñëó÷àéíûìè çíà÷åíèÿìè
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr1[i] = rand() % 100 - 50;
    }
}
void random_values_for_double(double* arr1, unsigned n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr1[i] = (rand() % 100 - 50) * 0.3;
    }
}
Complex_number* random_values(Complex_number* a, unsigned n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = Complex_number((rand() % 100 - 50) * 0.3, (rand() % 50 - 25) * 0.3);
    }
    return a;
}
void output_to_the_cosole(int* arr, unsigned n) {//âûâîä â êîíñîëü
    setlocale(0, "");
    cout << "Öåëî÷èñëåííûå çíà÷åíèÿ: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void output_to_the_cosole(Complex_number* mass, unsigned n) {
    setlocale(0, "");
    cout << "Êîìïëåêñíûå ÷èñëà: " << endl;
    for (int i = 0; i < n; i++) {
        mass[i].output_to_the_cosole();
    }
}
void output_to_the_cosole(double* arr, unsigned n) {
    setlocale(0, "");
    cout << " Äðîáíûå çíà÷åíèÿ: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
double Complex_number::modul() {//âû÷èñëåíèå ìîäóëÿ êîìïëåêñíîãî ÷èñëà äëÿ èõ ñðàâíåíèÿ
    return this->real * this->real + this->mnimoe * this->mnimoe;
}
bool operator>(Complex_number n1, Complex_number n2) {//ïåðåãðóçêà îïåðàòîðîâ äëÿ êîìïëåêñíûõ ÷èñåë
    if (n1.modul() > n2.modul()) {
        return true;
    }
    else {
        return false;
    }
}
bool operator<(Complex_number n1, Complex_number n2) {
    if (n1.modul() < n2.modul()) {
        return true;
    }
    else {
        return false;
    }
}
bool operator==(Complex_number n1, Complex_number n2) {
    if (n1.modul() == n2.modul()) {
        return true;
    }
    else {
        return false;
    }
}