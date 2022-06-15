//Напишите программу которая вызывает различные виды функции в зависимости от заданного условия.
#include "Header.h"
int main()
{
    setlocale(0, "");
    //-----------------------------------------------------объявление переменных
    int mass[10] = { 0,0,0,0,0,0,0,0,0,0 };
    string choice = "";
    unsigned kol = (sizeof(mass)) / (sizeof(int));
    //-----------------------------------------------------проверка ввода
tryAgain:
    do {
        menu_output(1);
        cin >> choice;
        func_check(choice);
        system("pause");
    } while ((!((choice == "1") || (choice == "2") || (choice == "3") || (choice == "4") || (choice == "5") || (choice == "6") || (choice == "7") || (choice == "8") || (choice == "9") || (choice == "10"))) || (!cin));
    //-----------------------------------------------------функция выбора
    function_selection(choice)(mass, kol);
    output_to_the_console(mass, kol);
    if (choice == "10") {
        cout << "До свиданья!:)";
        exit(0);
    }
    goto tryAgain;
}