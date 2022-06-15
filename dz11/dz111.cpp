//4. Реализовать абстрактные классы "Экран" и "Клавиатура" путем наследования  от них получить классы ноутбук, телефон, стационарынй компьютер
#include "head.h"
int main()
{
    setlocale(0, "");
    srand(time(NULL));
    personal_computeer q, w;
    notebook a, s;
    phone z, x;
    fill_rand(q);
    fill_rand(w);
    fill_rand(a);
    fill_rand(s);
    fill_rand(z);
    fill_rand(x);
    q.print();
    w.print();
    a.print();
    s.print();
    z.print();
    x.print();
}