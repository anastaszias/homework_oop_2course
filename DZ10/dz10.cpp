#include "fun10.h"
int main() {
	setlocale(0, "");
	Human human("Хабарова", "Лариса", "Валериевна", 50);
	Student student("Хабарова", "Анастасия", "Вадимовна", 19, 1);
	Boss boss("Хабаров", "Вадим", "Борисович", 50, 200);
	human.print();
	student.print();
	boss.print();
}