/*
#include <iostream>
#include <string>
#include <fstream> // ��� ������ � �������

using namespace std;

// ������ � �������

int main() {
	setlocale(LC_ALL, "RU");

	// ������ ������ ������ �����, output file stream ofstream
	// ofstream file("test.txt", ios_base::out); // test.txt ��� �����, ios_base::out - ������ �������� �����
	
	// ����� ��� ��������, ������ �� ���� � ����� �� �� � ��� ��������
	// if (file.is_open()) {
	// 	file << "First remote writing in the file with the help of c++";
	// 	file.close(); // ����� �������� ����� � ������ � ��� ��� ���������� ���������
	// } 

	// ���������� ������ �� �����, input file stream ifstream ��������� ��������� ������ �����
	ifstream file("test.txt");
	// ���������� ������ �� �����, ����� �� ������ cin >> temp; ������
	if (file.is_open()) {
		// string temp;
		// file >> temp;
		char temp[100];
		file.getline(temp, 100);
		cout << temp << endl;
		file.close();
	}

	return 0;
}
*/