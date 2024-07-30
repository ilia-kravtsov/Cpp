/*

#include <iostream>

using namespace std;

int main() {
	// dynamic memory

	int num = 10; // 4 bytes were provided for this varibale

	int *nums = new int[3]; // ��������� ��������� �� ������ ������ ��� ������ � ����� ���������� �����. ������ ����� �������� ��� ��� ��������
	                        // The pointer specifies to a memory cell for an array with three elements, respectively. The memory will be allocated for three elements
							// ���� ���������� �������� �� ��������� ������ �� �� ����� ����� ������������ �������
							// If memory allocation operation occurs it must be cleaned after using
							// ������ ������� ����� � ��� ������ ����� ������ � ��� ��������� ���� �������
	nums[0] = 45;
	nums[1] = 46;
	nums[2] = 47;
	cout << nums[0] << endl;
	cout << nums[1] << endl;
	cout << nums[2] << endl;
	delete[] nums; // to clean the memory

	cout << "Element: " << nums[0] << endl;

	// � ������ ���������� ��������� ������ ���������
	// at the end of the program, the memory is cleared
	return 0;
}

*/