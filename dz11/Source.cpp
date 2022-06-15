#include "head.h"
void screen::print()
{
	if (this->built_in_screen) {
		cout << "\nÂñòðîåííûé ýêðàí ïîäêëþ÷åí";
	}
	else {
		cout << "\nÂñòðîåííûé ýêðàí íå ïîäêëþ÷åí";
	}
	if (this->HDMI) {
		cout << "\nÝêðàí ïîäêëþ÷åí ÷åðåç ïîðò HDMI";
	}
	else {
		cout << "\nÝêðàí íå ïîäêëþ÷åí ÷åðåç ïîðò HDMI";
	}
}
void keyboard::print()
{
	if (this->built_in_keyboard) {
		cout << "\nÂñòðîåííàÿ êëàâèàòóðà ïîäêëþ÷åíà";
	}
	else {
		cout << "\nÂñòðîåííàÿ êëàâèàòóðà íå ïîäêëþ÷åíà";
	}
	if (this->USB) {
		cout << "\nUSB-êëàâèàòóðà ïîäêëþ÷åíà";
	}
	else {
		cout << "\nUSB-êëàâèàòóðà íå ïîäêëþ÷åíà";
	}
	if (this->digital) {
		cout << "\nÂèðòóàëüíàÿ êëàâèàòóðà ïîäêëþ÷åíà";
	}
	else {
		cout << "\nÂèðòóàëüíàÿ êëàâèàòóðà íå ïîäêëþ÷åíà";
	}
}
void notebook::print() {
	cout << "\n Íîóòáóê:\n";
	keyboard(this->built_in_keyboard, this->digital, this->USB).print();
	screen(this->built_in_screen, this->HDMI).print();
	cout << endl;
}
void personal_computeer::print() {
	cout << "\n Ïåðñîíàëüíûé êîìïüþòåð\n";
	keyboard(this->built_in_keyboard, this->digital, this->USB).print();
	screen(this->built_in_screen, this->HDMI).print();
	cout << endl;
}
void phone::print() {
	cout << "\n Òåëåôîí\n";
	keyboard(this->built_in_keyboard, this->digital, this->USB).print();
	screen(this->built_in_screen, this->HDMI).print();
	cout << endl;
}
void fill_rand(notebook a) {
	srand(time(NULL));
	int z = rand() % 2, x = rand() % 2;
	a.fill_USB(z);
	a.fill_HDMI(x);
}
void fill_rand(personal_computeer a)
{
	srand(time(NULL));
	int z = rand() % 2, x = rand() % 2;
	a.fill_USB(z);
	a.fill_HDMI(x);
}
void fill_rand(phone a)
{
	int z = rand() % 2, x = rand() % 2, c = rand() % 2;
	a.fill_built_in_keyboard(z);
	a.fill_USB(x);
	a.fill_HDMI(c);
}