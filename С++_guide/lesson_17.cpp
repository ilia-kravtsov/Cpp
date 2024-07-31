/*
#include <iostream>
#include <string>
#include <fstream>
// OOP
using namespace std;

//__________________ Space for classes creation below
class Building {
private:
	int year;
	string type;
public: // модификатор доступа: public, private, protected
	    // public - свойства и методы доступны отовсюду
	    // private - свойства и методы доступны исключительно внутри класса
	    // protected - свойства и методы доступны внутри класса и классах наследниках

	void get_info() {
		cout << "Type: " << type << ". Year: " << year << endl;
	}

	void set_data(int y, string t) {
		year = y;
		type = t;
	}
};

//__________________ Space for classes creation above
int main() {
	setlocale(LC_ALL, "RU");

	Building school;
	// school.type = "Школа";
	// school.year = 2000;
	school.set_data(2000, "Школа");
	school.get_info();

	Building house;
	// house.type = "Дом";
	// house.year = 2010;
	house.set_data(2010, "Дом");
	house.get_info();

	return 0;
}

// Инкапсуляция - все поля должны быть закрыты от прямого доступа к ним. Все поля (переменные, свойства) должны быть private
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
