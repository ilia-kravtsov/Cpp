/*
#include <iostream>
#include <string>
#include <fstream> 

using namespace std;

// Структуры данных

struct Point {
	int x, y;
};

struct Tree {
	string name;
	int age;
	bool is_alive;
	float height;
	Point location;

	void get_info() {
		cout << "Name: " << name << ". Age: " << age << endl;
	}
};

int main() {
	setlocale(LC_ALL, "RU");

	Tree dub; // конкретизируем название объекта
	// dub. обращаемся к свойствам Tree
	// устанавливаем значения для свойств 
	dub.name = "Дуб";
	dub.age = 24;
	dub.is_alive = true;
	dub.height = 3.3;
	dub.location.x = 100;
	dub.location.y = 200;

	Tree yelka;
	yelka.name = "Ёлка";
	yelka.age = 5;
	yelka.is_alive = true;
	yelka.height = 2.1;
	yelka.location.x = 100;
	yelka.location.y = 200;
	
	// cout << dub.name << " - " << yelka.name; // Дуб - Ёлка
	dub.get_info(); // Name: Дуб. Age: 24
	yelka.get_info(); // ame: Ёлка. Age: 5

	return 0;
}
*/