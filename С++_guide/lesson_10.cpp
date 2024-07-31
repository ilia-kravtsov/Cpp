/*
#include <iostream>
#include <string>

using namespace std;

// ���������� ������� 
// Overloading functions

void print(string word) {
	cout << word << endl;
}

void print(int num) {
	cout << num << endl;
}

void add(int a, int b) {
	int res = a + b;
	print(res);
}

void add(int a, int b, int c) {
	int res = a + b + c;
	print(res);
}

int main() {
	setlocale(LC_ALL, "RU");

	print("it works");
	add(1.2, 1.8);
	add(1.2, 1.8, 3);
	return 0;
}


// ���������� ������� ���������� ��� �������� ���������� ������ � ���������� ���������
// �� ��� ���� ��� �������� � ������� ������ ������ ��� ����� ������ ���������� 
// ����������
*/