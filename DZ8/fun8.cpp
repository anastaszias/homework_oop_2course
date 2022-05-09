#include "fun8.h"
void menu() {
	setlocale(LC_ALL, "rus");
	cout << "Ìåíþ.\n1.Äîáàâèòü íîâîãî ñòóäåíòà â êàðòîòåêó\n2.Óäàëèòü ñòóäåíòà èç êàðòîòåêè\n3.Îòñîðòèðîâàòü êàðòîòåêó ïî èìåíè\n4.Îòñîðòèðîâàòü êàðòîòåêó ïî ôàìèëèè\n5.Îòñîðòèðîâàòü êàðòîòåêó ïî êóðñó\n6.Îòñîðòèðîâàòü êàðòîòåêó ïî ñðåäíåìó áàëëó\n7.Âûâåñòè êàðòîòåêó â êîíñîëü\n8.Âûõîä èç ïðîãðàììû\nÂâåäèòå ïóíêò ìåíþ, êîòîðûé âû õîòèòå âûáðàòü:";
}
void Student::getName(string name) { this->name = name; }
string Student::return_name() { return this->name; }
void Student::getSurname(string surname) { this->surname = surname; }
string Student::return_surname() { return this->surname; }
void Student::getCourse(int course) { this->course = course; }
int Student::return_course() { return this->course; }
void Student::getRaiting(double raiting) { this->raiting = raiting; }
double Student::return_raiting() { return this->raiting; }
bool compare_by_name(Student  first, Student second) { return first.return_name()[0] < second.return_name()[0]; }
bool compare_by_surname(Student first, Student second) { return first.return_surname()[0] < second.return_surname()[0]; }
bool compare_by_course(Student first, Student second) { return first.return_course() < second.return_course(); }
bool compare_by_raiting(Student first, Student second) { return first.return_raiting() < second.return_raiting(); }
Student addStudent() {
	Student newStudent;
	cin >> newStudent;
	return newStudent;
}
int calculate_size_vector(vector<Student>& arr) {
	int lenght = 0;
	if (!arr.empty()) {
		lenght++;
	}
	return lenght;
}
void delete_Student_in_kartoteka(vector<Student>& arr, int number) {
	setlocale(LC_ALL, "rus");
	if (calculate_size_vector(arr) < number) {
		cout << "\nÂû ââåëè íåïðàâèëüíîå çíà÷åíèå!\n";
	}
	else {
		cout << "Ñòóäåíò" << arr[number].return_name() << arr[number].return_name() << endl;
		arr.erase(arr.begin() + number);
	}
}
void put_to_the_console_student(vector<Student> arr) {
	for (Student i : arr) {
		cout << i << endl;
	}
}
Student& Student::operator=(const Student& i)
{
	this->name = i.name;
	this->surname = i.surname;
	this->course = i.course;
	this->raiting = i.raiting;
	return *this;
}
ostream& operator<<(ostream& os, const Student& arr) {
	setlocale(LC_ALL, "rus");
	os << "\nÈìÿ ñòóäåíòà(êè): " << arr.name << " Ôàìèëèÿ ñòóäåíòà(êè): " << arr.surname << " Êóðñ, íà êîòîðîì ó÷èòñÿ ñòóäåíò(êà): " << arr.course << " Ñðåäíèé áàëë ñòóäåíòà(êè): " << arr.raiting;
	return os;
}
istream& operator>>(istream& is, Student& arr) {
	setlocale(LC_ALL, "rus");
	cout << "\nÈìÿ ñòóäåíòà(êè): ";
	is >> arr.name;
	cout << "\nÔàìèëèÿ ñòóäåíòà(êè): ";
	is >> arr.surname;
tryCourseAgain:
	cout << "\nÊóðñ, íà êîòîðîì ó÷èòñÿ ñòóäåíò(êà): ";
	is >> arr.course;
	if (!is) {
		cout << "\nÂû ââåëè íåâåðíîå çíà÷åíèå! Ïîïðîáóéòå ñíîâà ;)";
		goto tryCourseAgain;
	}
tryRaitingeAgain:
	cout << "\nÑðåäíèé áàëë ñòóäåíòà(êè): ";
	is >> arr.raiting;
	if (!is) {
		cout << "\nÂû ââåëè íåâåðíîå çíà÷åíèå! Ïîïðîáóéòå ñíîâà ;)";
		goto tryRaitingeAgain;
	}
	cout << endl;
	return is;
}
void funcchoice(vector<Student>& arr, string choice) {
	setlocale(LC_ALL, "rus");
	if (choice == "1") {
		arr.push_back(addStudent());
		cout << "\nÍîâûé ñòóäåíò ñîçäàí\n";
	}
	if (choice == "2") {
		if (!arr.empty()) {
			int number = 0;
		tryDeleteStudentAgain:
			cout << "\nÍàïèøèòå íîìåð ñòóäåíòà, êîòîðîãî âû õîòèòå óäàëèòü èç êàðòîòåêè: ";
			cin >> number;
			if (!cin) {
				cout << "\nÂû ââåëè íåâåðíîå çíà÷åíèå! Ïîïðîáóéòå ñíîâà!\n";
				goto tryDeleteStudentAgain;
			}
			delete_Student_in_kartoteka(arr, number);
		}
		else {
			cout << "\nÊàðòîòåêà ïóñòà! Ïðåæäå ÷åì óäàëÿòü ñòóäåíòîâ èç êàðòîòåêè, çàïîëíèòå å¸.\n";
		}
	}
	if (choice == "3") {
		sort(arr.begin(), arr.end(), compare_by_name);
		cout << "\nÊàðòîòåêà îòñîðòèðîâàí ïî èìåíàì:\n";
	}
	if (choice == "4") {
		sort(arr.begin(), arr.end(), compare_by_surname);
		cout << "\nÊàðòîòåêà îòñîðòèðîâàíà ïî ôàìèëèè:\n";
	}
	if (choice == "5") {
		sort(arr.begin(), arr.end(), compare_by_course);
		cout << "\nÊàðòîòåêà îòñîðòèðîâàíà ïî êóðñó:\n";
	}
	if (choice == "6") {
		sort(arr.begin(), arr.end(), compare_by_raiting);
		cout << "\nÊàðòîòåêà îòñîðòèðîâàíà ïî ñðåäíåìó áàëëó:\n";
	}
	if (choice == "7") {
		cout << "Âûâîä êàðòîòåêè â êîíñîëü:" << endl;
		put_to_the_console_student(arr);
	}
	if (choice == "8") {
		cout << "\nÐàáîòà ïðîãðàììû çàêîí÷åíà. Óäà÷íîãî äíÿ!\n";
	}
}