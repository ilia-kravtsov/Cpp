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
public: // ����������� �������: public, private, protected
	    // public - �������� � ������ �������� ��������
	    // private - �������� � ������ �������� ������������� ������ ������
	    // protected - �������� � ������ �������� ������ ������ � ������� �����������

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
	// school.type = "�����";
	// school.year = 2000;
	school.set_data(2000, "�����");
	school.get_info();

	Building house;
	// house.type = "���";
	// house.year = 2010;
	house.set_data(2010, "���");
	house.get_info();

	return 0;
}

// ������������ - ��� ���� ������ ���� ������� �� ������� ������� � ���. ��� ���� (����������, ��������) ������ ���� private
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
