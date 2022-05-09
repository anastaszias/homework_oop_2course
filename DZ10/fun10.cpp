#include "fun10.h"	
void Student::print() {
	Human(this->surname, this->name, this->midname, this->age).print();
	cout << ", Íàõîäèòñÿ";
	if (on_lesson)
		cout << " íà óðîêå\n";
	else
		cout << " íå íà óðîêå\n";
}
void Boss::print() {
	Human(this->surname, this->name, this->midname, this->age).print();
	cout << ", Êîëè÷åñòâî ðàáîòíèêîâ â ïîä÷èíåíèè: " << number_of_workers << endl;
}