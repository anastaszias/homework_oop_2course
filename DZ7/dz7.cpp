#include "fun7.h"

int main()
{
    setlocale(0, "");
    Complex_number a(5, 44), b(64, 9);
    circle c(4);
    vector q(43, 95, 3), w(3, 70, 4), t(3, 49, 7);
    cout << "Вывод всех комплексных чисел: \n";
    a.console_output_complex_number();
    b.console_output_complex_number();
    cout << "\nИх модули: " << a.modul() << "  " << b.modul();
    cout << "\nСумма комплексных чисел: ";
    (a.summ(b)).console_output_complex_number();
    cout << "\nЕго модуль = " << (a.summ(b)).modul();
    cout << "\nРазность комплексных чисел: ";
    (a.substraction(b)).console_output_complex_number();
    cout << "\nЕго модуль = " << (a.substraction(b)).modul();
    cout << "\nПроизведение комплексных чисел: ";
    (a.multyply(b)).console_output_complex_number();
    cout << "\nЕго модуль = " << (a.multyply(b)).modul();
    cout << "\nДеление комплексных чисел ";
    (a.division(b)).console_output_complex_number();
    cout << "\nЕго модуль = " << (a.division(b)).modul();
    cout << " \nили\n ";
    (b.division(a)).console_output_complex_number();
    cout << "\nЕго модуль = " << (b.division(a)).modul() << "\nДиаметр круга: " << c.getDiametr() << "\nДлина круга: " << c.lenght() << "\nПлощадь круга: " << c.square();
    cout << "\nКоординаты векторов: ";
    w.output_vector();
    q.output_vector();
    t.output_vector();
    cout << "\nСумма векторов: ";
    (t.summa(q.summa(w))).output_vector();
    cout << "Скалярное произведение векторов: " << t.scalar(w) << ", " << q.scalar(w) << ", " << t.scalar(q) << "\nУгол между векторами: " << t.corner(w) << ", " << q.corner(w) << ", " << t.corner(q) << "\nВекторное произведение трех векторов: " << q.vectorial(t) << ", " << t.vectorial(w) << ", " << q.vectorial(w) << "\nСмешанное произведение: " << q.mixed(t, w);
}