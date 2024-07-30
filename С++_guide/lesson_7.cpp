/*

#include <iostream>

using namespace std;

int main() {
	// dynamic memory

	int num = 10; // 4 bytes were provided for this varibale

	int *nums = new int[3]; // указатель указывает на ячейку памяти под массив с тремя элементами соотв. память будет выделена под три элемента
	                        // The pointer specifies to a memory cell for an array with three elements, respectively. The memory will be allocated for three elements
							// Если происходит операция по выделению памяти то ее нужно после использованя очищать
							// If memory allocation operation occurs it must be cleaned after using
							// Память очищать нужно в тот момент когда данные в ней перестают быть нужными
	nums[0] = 45;
	nums[1] = 46;
	nums[2] = 47;
	cout << nums[0] << endl;
	cout << nums[1] << endl;
	cout << nums[2] << endl;
	delete[] nums; // to clean the memory

	cout << "Element: " << nums[0] << endl;

	// в момент завершения программы память очищается
	// at the end of the program, the memory is cleared
	return 0;
}

*/