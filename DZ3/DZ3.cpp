#include "Header.h"
int main()
{
    srand(time(NULL));
    circle krug;
    vectors bufferV, n1, n2, n3;
    krug.r = (1 + rand() % 100) / 2;
    n1.c1 = (1 + rand() % 100 - 50) / 2;
    n1.c2 = (1 + rand() % 100 - 50) / 2;
    n1.c3 = (1 + rand() % 100 - 50) / 2;
    n2.c1 = (1 + rand() % 100 - 50) / 2;
    n2.c2 = (1 + rand() % 100 - 50) / 2;
    n2.c3 = (1 + rand() % 100 - 50) / 2;
    n3.c1 = (1 + rand() % 100 - 50) / 2;
    n3.c2 = (1 + rand() % 100 - 50) / 2;
    n3.c3 = (1 + rand() % 100 - 50) / 2;
    setlocale(0, "");
    cout << "Круг с радиусом: " << krug.r;
    cout << "\nДиаметр данного круга: " << krug.getDiametr();
    cout << "\nДлина данной окружности: " << krug.lenght();
    cout << "\nПлощадь круга: " << krug.square();
    cout << "\nКоординаты векторов: \nI вектор: ";
    n1.output_vectors();
    cout << "\nII вектор: ";
    n2.output_vectors();
    cout << "\nIII вектор: ";
    n3.output_vectors();
    cout << "\nСумма 1 и 2 векторов: ";
    n1.summa(n2).output_vectors();
    cout << "\nCумма 1 и 3 векторов: ";
    n1.summa(n3).output_vectors();
    cout << "\nCумма 2 и 3 векторов: ";
    n2.summa(n3).output_vectors();
    cout << "\nСкалярное произведение 1 и 2 векторов: " << n1.scalar(n2);
    cout << "\nСкалярное произведение 1 и 3 векторов: " << n1.scalar(n3);
    cout << "\nСкалярное произведение 3 и 2 векторов: " << n3.scalar(n2);
    cout << "\nУгол между 1 и 2 векторами: " << acos(n1.corner(n2)) << " градусов";
    cout << "\nУгол между 1 и 3 векторами: " << acos(n1.corner(n3)) << " градусов";
    cout << "\nУгол между 3 и 2 векторами: " << acos(n3.corner(n2)) << " градусов";
    cout << "\nВекторное про изведение 1 и 2 векторов: " << n1.vectorial(n2);
    cout << "\nВекторное про изведение 1 и 3 векторов: " << n1.vectorial(n3);
    cout << "\nВекторное про изведение 3 и 2 векторов: " << n3.vectorial(n2);
    cout << "\nСмешанное произведение: " << n3.mixed(n1, n2);
}