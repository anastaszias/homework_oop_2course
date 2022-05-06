#include "complexnoe.h"; 
void Complexnoechislo::pervonachalnui_vuvod(Complexnoechislo n1) {
	setlocale(0, "");
	if (((this->real > 0) and (this->mnimoe > 0)) or ((this->real < 0) and (this->mnimoe > 0))) {
		cout << "Первое комплексное число: " << this->real << "+" << this->mnimoe << "*i";
	}
	if (((this->real > 0) and (this->mnimoe < 0)) or ((this->real < 0) and (this->mnimoe < 0))) {
		cout << "Первое комплексное число: " << this->real << this->mnimoe << "*i";
	}
	if (((n1.real > 0) and (n1.mnimoe > 0)) or ((n1.real < 0) and (n1.mnimoe > 0))) {
		cout << "\nВторое комплексное число: " << n1.real << "+" << n1.mnimoe << "*i";
	}
	if (((n1.real > 0) and (n1.mnimoe < 0)) or ((n1.real < 0) and (n1.mnimoe < 0))) {
		cout << "\nВторое комплексное число: " << n1.real << n1.mnimoe << "*i";
	}
}
void Complexnoechislo::summa(Complexnoechislo n1) {
	setlocale(0, "");
	cout << "\nСумма двух комплексных чисел: ";
	cout << n1.real + this->real;
	if (n1.mnimoe + this->mnimoe > 0) {
		cout << "+" << n1.mnimoe + this->mnimoe << "*i";
	}
	else {
		cout << n1.mnimoe + this->mnimoe << "*i";
	}
}
void Complexnoechislo::vuchitanie(Complexnoechislo n1) {
	setlocale(0, "");
	cout << "\nВычитание 2 комплексных чисел: " << n1.real - this->real;
	if (n1.mnimoe - this->mnimoe > 0) {
		cout << "+" << n1.mnimoe - this->mnimoe << "*i\n";
	}
	else {
		cout << n1.mnimoe - this->mnimoe << "*i\n";
	}
	cout << "\nили " << this->mnimoe - n1.mnimoe;
	if (this->mnimoe - n1.mnimoe > 0) {
		cout << "+" << this->mnimoe - n1.mnimoe << "*i";
	}
	else {
		cout << this->mnimoe - n1.mnimoe << "*i";
	}
}
void Complexnoechislo::umnojenie(Complexnoechislo n1) {
	setlocale(0, "");
	cout << "\nУмножение двух комплексных чисел: ";
	cout << (n1.mnimoe + this->mnimoe) * (-1) + n1.real * this->real;//действительное число(представляющее из себя сумму мнимых, умноженную на (-1) и произведения действительных)
	if ((n1.real + this->real) * (this->mnimoe + n1.mnimoe) < 0) {//мнимое число( представляющее из себя произвдения сумм действительных и мнимых чисел)
		cout << (n1.real + this->real) * (this->mnimoe + n1.mnimoe) << "*i";//если мнимое число отрицательно, то оставим запись изначальной, ведь в ней уже содержится -
	}
	else {//иначе перед запись поставим +
		cout << "+" << (n1.real + this->real) * (this->mnimoe + n1.mnimoe) << "*i";
	}
}
void Complexnoechislo::delenie(Complexnoechislo n1) {//деление
	setlocale(0, "");
	cout << "\nДеление двух комплексных чисел: " << (this->real * n1.real + n1.mnimoe * this->mnimoe) / (this->real * this->real + this->mnimoe * this->mnimoe);//дествительное число(представляющее из себя отношения суммы произведений 2 дествительных и коэффициентов дестивтельных чисел и суммы квадратов дествительного числа и коэффициента мнимого от частного комлексного числа
	if ((this->real * n1.mnimoe - n1.real * this->mnimoe) / (this->real * this->real + this->mnimoe * this->mnimoe) < 0) {//мнимое число (представляющее из себя (произведение второго дествительного числа и разности коэффициента мнимого первого и второго комплексного числа)/(сумма квадратов дествительного и мнимого от частного комплексного числа))
		cout << (this->real * n1.mnimoe - n1.real * this->mnimoe) / (this->real * this->real + this->mnimoe * this->mnimoe) << "*i";//если мнимое отрицательное, то запись не изменяем, т.к. в записи уже присутствует -
	}
	else {//иначе добавим перед записью +
		cout << "+" << (this->real * n1.mnimoe - n1.real * this->mnimoe) / (this->real * this->real + this->mnimoe * this->mnimoe) << "*i";
	}
	cout << "\nили " << ((this->real * n1.real + n1.mnimoe * this->mnimoe) / (this->real * this->real + this->mnimoe * this->mnimoe));//(второй вариант деления)дествительное число(представляющее из себя отношения суммы произведений 2 дествительных и коэффициентов дестивтельных чисел и суммы квадратов дествительного числа и коэффициента мнимого от частного комлексного числа
	if (((n1.mnimoe * this->real - this->mnimoe * n1.real) / (this->real * this->real + this->mnimoe * this->mnimoe)) < 0) {
		cout << ((n1.mnimoe * this->real - this->mnimoe * n1.real) / (this->real * this->real + this->mnimoe * this->mnimoe)) << "*i";//если мнимое отрицательное, то запись не изменяем, т.к. в записи уже присутствует -
	}
	else {//иначе добавим перед записью +
		cout << "+" << ((n1.mnimoe * this->real - this->mnimoe * n1.real) / (this->real * this->real + this->mnimoe * this->mnimoe)) << "*i";
	}
}
void Complexnoechislo::modul(Complexnoechislo n1) {//функция вычисления модуля (представлет из себя квадратный корень суммы квадратов дествительного и мнимого числа)
	setlocale(0, "");
	cout << "\nМодуль первого комплексного числа: " << sqrt(this->real * this->real + this->mnimoe * this->mnimoe);
	cout << "\nМодуль второго комплексного числа: " << sqrt(n1.real * n1.real + n1.mnimoe * n1.mnimoe) << endl;;
}
void chtenie(const char* path) {
	setlocale(0, "");
	ifstream file;//открытие файла для чтения
	file.open(path);//указания пути
	if (!file.is_open()) {//если файл не открывается, выводится соответсвующее сообщение
		cout << "Файл не найден! :)";
	}
	else {
		
		double buffer, max = INT16_MIN;
		int maxIndex;
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------
		file >> buffer;//считывание количество комплексных чисел, что по условию задания находится в файла первым числом
		int n = static_cast<int>(buffer);//перевод первого числа в целочисленное (количество комплексных чисел)
		cout << "Количество комплексных чисел в файле: " << n << '\n';//по условию задания, выведем количество комплексных чисел
		Complexnoechislo* p = new Complexnoechislo[n];//т.к. мы знаем уже количество комплексных чисел, создадим динамический массив
		for (int i = 0; i < n; i++) {//считывание файла в массив типа комплексных чисел
			file >> buffer;
			p[i].real = buffer;
			file >> buffer;
			p[i].mnimoe = buffer;
			cout << i + 1 << " число: " << p[i].real << " + (" << p[i].mnimoe << ")i\n";//вывод чисел, которые программа считала из файла с индексом
			if (sqrt(p[i].real * p[i].real + p[i].mnimoe * p[i].mnimoe) > max)//вычисление модуля, и получение максимального модуля и его индекса (maxIndex)
			{
				max = sqrt(p[i].real * p[i].real + p[i].mnimoe * p[i].mnimoe);
				maxIndex = i;
			}
		}
		cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		if (p[maxIndex].mnimoe < 0) {
			cout << "Комплексное число с максимальным модулем в данном файле: " << p[maxIndex].real << p[maxIndex].mnimoe << endl;
		}
		else {
			cout << "Комплексное число с максимальным модулем в данном файле: " << p[maxIndex].real << "+" << p[maxIndex].mnimoe << endl;
		}
		cout << "Модуль данного числа равен: " << max;
	}
	file.close();
}