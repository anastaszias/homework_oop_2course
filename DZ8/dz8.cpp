#include "fun8.h"
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Начало задания\n\n";
	vector<Student> arr;
	string choice = "";
returnTask:
	menu();
returnCheck:
	cin >> choice;
	if (!((choice == "1") or (choice == "2") or (choice == "3") or (choice == "4") or (choice == "5") or (choice == "6") or (choice == "7") or (choice == "8"))) {
		cout << "\nВы ввели неверное значение! Попробуйте снова :)\n";
		goto returnCheck;
	}
	funcchoice(arr, choice);
	if (choice == "8") {
		return 0;
	}
	goto returnTask;
}