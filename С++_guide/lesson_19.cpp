/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// ������������� ������� - ��� �������, ������� ����� ����� ������ � �������� ������ ������,
// �� ���� �������, ������� ����� ����� ������ � ��� ������, ������� �������� � ������������ ������� private ��� protected
class Car;
class Person {
private:
	int age;
	string name;
public:
	Person(string name) {
		this->name = name;
	}
	friend void info_car(Car& car, Person& person);
};

class Car {
private:
	string name;
public: 
	Car(string name) {
		this->name = name;
	}
	friend void info_car(Car& car, Person& person);
};

void info_car(Car& car, Person& person) {
	cout << "������� � ������: " << person.name << " ����� ������ " << car.name << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	Car bmw("bmw");
	Person john("john");
	info_car(bmw, john);
	
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