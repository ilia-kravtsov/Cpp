/*
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

// Встроенные функции

int main() {
	setlocale(LC_ALL, "RU");

	string str_1 = "Hello";
	string str_2 = " World";

	str_1.append(str_2); // concatenation
	cout << str_1 << endl;
	cout << str_1 + str_2 << endl; // concatenation
	str_1.pop_back();
	cout << str_1 << endl; // delete the last symbol
	str_1.pop_back();
	cout << str_1 << endl;
	str_1.pop_back();
	cout << str_1 << endl;
	str_1.pop_back();
	cout << str_1 << endl;

	str_1.push_back('o'); // add a symbol to the end of the str
	cout << str_1 << endl;

	cout << str_1.length() << endl; // to show the length of the str

	str_1.resize(5); // to change the length of the str
	cout << str_1.length() << endl;

	cout << "Pow: " << pow(2, 3) << endl; // возведение числа 2 в степень 3 // raising the number 2 to the power of 3
	cout << "ABS: " << abs(-3) << endl; // позволяет получить число по модулю, передаешь отрицательное получаешь положительное
	cout << "Sin: " << sin(45) << endl;
	cout << "Cos: " << cos(45) << endl;
	cout << "Sqrt: " << sqrt(144) << endl; // квадратный корень
	cout << "Ceil: " << ceil(1.1f) << endl; // округление числа вверх 1.1 стало 2
	cout << "Floor: " << floor(1.9f) << endl; // округление числа вниз 1.9 стало 1
	cout << "Round: " << round(1.45f) << endl; // округление числа вниз 1.45 стало 1
	cout << "Round: " << round(1.55f) << endl; // округление числа вниз 1.55 стало 2

	return 0;
}
*/
/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	return 0;
}
*/