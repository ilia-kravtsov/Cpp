/*
#include <iostream>
#include <string>
#include <fstream> 

using namespace std;

// ��������� ������

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

	Tree dub; // �������������� �������� �������
	// dub. ���������� � ��������� Tree
	// ������������� �������� ��� ������� 
	dub.name = "���";
	dub.age = 24;
	dub.is_alive = true;
	dub.height = 3.3;
	dub.location.x = 100;
	dub.location.y = 200;

	Tree yelka;
	yelka.name = "����";
	yelka.age = 5;
	yelka.is_alive = true;
	yelka.height = 2.1;
	yelka.location.x = 100;
	yelka.location.y = 200;
	
	// cout << dub.name << " - " << yelka.name; // ��� - ����
	dub.get_info(); // Name: ���. Age: 24
	yelka.get_info(); // ame: ����. Age: 5

	return 0;
}
*/