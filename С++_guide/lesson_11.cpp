/*
#include <iostream>
#include <string>

using namespace std;

// ��������� � ������ Pointers and links

void minimal(int* arr, int length) {
	int min = *arr; // ����������� �������� ������� �������� �������
	for (int i = 0; i < length; i++) {
		if (min > *(arr + i)) { // *(arr + i)) - ����� ���������
			min = *(arr + i);
		}
	}
	cout << "Minimum: " << min << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	int num = 10; // it will take 4 bytes in RAM
	// int a = num; // it will also take 4 bytes in RAM
	int &a = num; // it will be a link to num and won't take 4 bytes in RAM
	// the link keeps the address where the variable is located.

	// Displaying the address on the screen
	cout << &num << " - " <<  num << endl; // 000000DA50AFFCF4 - this is the name of the cell where the num variable is located. // 10
	cout << &a << " - " << a << endl; // 000000DA50AFFCF4 - the same memory cell // 10

	// if i change 'a' the value will change both 'a' and 'num'
	a = 15;
	cout << &num << " - " << num << endl; // 15
	cout << &a << " - " << a << endl; // 15

	// Pointers ���������
	// ������ ������ ����������� ����� ������ ������, ��������� ��������� �� ���� �����
	// ������ ����� �������� ������ � ��� �� ����������, ��������� ����� ������ ��������.
	// ��������� ����� ������� ����� ����� �������� ����� �� ������� ��������� ���������
	// �������� ����� ����� ����� ������� ��� ������ � ��������� (��� � ��������)

	int value = 12;
	int* pointer_value; // �������� ���������
	pointer_value = &value; // ��������� �� ������ ������, � �� �� ���������� ��� � ��������

	cout << &value << " - " << value << endl; // 00000037BC4FF9A4 - 12
	cout << pointer_value << " - " << *pointer_value << endl; // 00000037BC4FF9A4 - 12; *pointer_value - ���������������
	// pointer_value - ���������� � ������ ������� �� ���������
	// *pointer_value - ���������� � �������� �� ������� ��������� ���������
	// ����� ���� �� ������� �������� ������ �� ��������� �� ��������� ����� *pointer_value
	// � ��� ����� ����� ������ ��������

	*pointer_value = 17; // ������ �������� ��� �� �������� value ��� � � �������
	cout << &value << " - " << value << endl; // 000000321717F634 - 17
	cout << pointer_value << " - " << *pointer_value << endl; // 000000321717F634 - 17
	// ������ ��� a ���� ���������� �� 000000321717F634 o__o

	// Deleting of the value that the pointer leads
	pointer_value = nullptr;
	cout << &value << " - " << value << endl; // 000000EA684FF7F4  - 17
	// cout << pointer_value << " - " << *pointer_value << endl; // 0000000000000000 - ��������, ��� ���� ���������� �������� �����

	// ��������

	int arr[] = { 1,2,3,4,5,6 }; // 24 bytes
	minimal(arr, 6); // 48 bytes ��� ����� �������� ������� � ������ � RAM �� ����� �������� � 2 ���� ������ ����� � ����������� ������

	// ������� ������ � ������� �� ����� ���������� �� ���������
	// ���� minimal(int arr[], int length) {}
	// ����� void minimal(int* arr, int length) {}

	return 0;
}

*/