#include <iostream>
#include <string>
#include <fstream> 

using namespace std;

// ��������� ������

struct Tree {
	string name;
	int ages;
	bool is_alive;
	float height;
};

int main() {
	setlocale(LC_ALL, "RU");

	Tree dub; // �������������� �������� �������
	// dub. ���������� � ��������� Tree
	// ������������� �������� ��� ������� 
	dub.name = "���";
	dub.ages = 24;
	dub.is_alive = true;
	dub.height = 3.3;

	return 0;
}