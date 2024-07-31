#include <iostream>
#include <string>
#include <fstream> 

using namespace std;

// Структуры данных

struct Tree {
	string name;
	int ages;
	bool is_alive;
	float height;
};

int main() {
	setlocale(LC_ALL, "RU");

	Tree dub; // конкретизируем название объекта
	// dub. обращаемся к свойствам Tree
	// устанавливаем значения для свойств 
	dub.name = "Дуб";
	dub.ages = 24;
	dub.is_alive = true;
	dub.height = 3.3;

	return 0;
}