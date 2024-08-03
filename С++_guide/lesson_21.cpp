/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// ������������ Inheritance
// ������������ - ����� �������� ���� ������� �� ����� ������� ��� ���� ����� ����� ������� ��������� � ������ ������� �����������
// ����� �������� ��������� ����� ������� ���������� � ����� ��������� ����� ����������� ���������� ������������� ������
// � ��� ���� ������������ ����� ������������
// class Laptop: public PC - ��� ����������� ������������ ���� ��������� �������
// Laptop(int diagonal, string os, float weight):PC(diagonal, os)  - �������� ��������� � ����������� ������������� ������
// protected - ����������� ������� ������� ��������� ������ ��� ������ ������ ������ ��� � ������ ������� ����������� �� �� ����� ��������� �������

class PC {
protected:
	int diagonal;
	string os;
public:
	PC(int diagonal, string os) {
		this->diagonal = diagonal;
		this->os = os;
	}

	void get_info() {
		cout << "OS: " << os << ". Diagonal: " << diagonal << endl;
	}
};

class Laptop: public PC {
private:
	float weight;
public:
	Laptop(int diagonal, string os, float weight):PC(diagonal, os) {
		// this->diagonal = 12;
		this->weight = weight;
	}

	void get_info() {
		PC::get_info();
		cout << "Weight: " << weight << endl;
	}
};

int main() {
	setlocale(LC_ALL, "RU");

	Laptop mac(16, "Mac", 1.5f);
	mac.get_info();

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