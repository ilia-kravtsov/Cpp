/*
#include <iostream>
#include <string>

using namespace std;

// Указатели и ссылки Pointers and links

void minimal(int* arr, int length) {
	int min = *arr; // подставляем значение первого элемента массива
	for (int i = 0; i < length; i++) {
		if (min > *(arr + i)) { // *(arr + i)) - сдвиг указателя
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

	// Pointers Указатели
	// Ссылки хранят программный адрес ячейки памяти, указатели указывают на этот адрес
	// Ссылку можно объявить ничего к ней не присваивая, указатель можно просто объявить.
	// Указателю можно сделать сдвиг чтобы поменять адрес на который ссылается указатель
	// например такой сдвиг можно сделать при работе с массивами (как с индексом)

	int value = 12;
	int* pointer_value; // объявили указатель
	pointer_value = &value; // ссылаемся на ячейку памяти, а не на переменную как с ссылками

	cout << &value << " - " << value << endl; // 00000037BC4FF9A4 - 12
	cout << pointer_value << " - " << *pointer_value << endl; // 00000037BC4FF9A4 - 12; *pointer_value - разименовывание
	// pointer_value - обращаемся к ячейка которую мы указываем
	// *pointer_value - обращаемся к значению на который указывает указатель
	// далее если мы захотим работать именно со значением то указывать нужно *pointer_value
	// а уже после можем менять значение

	*pointer_value = 17; // данная операция так же поменяет value как и с ссылкой
	cout << &value << " - " << value << endl; // 000000321717F634 - 17
	cout << pointer_value << " - " << *pointer_value << endl; // 000000321717F634 - 17
	// ячейка для a тоже поменялась на 000000321717F634 o__o

	// Deleting of the value that the pointer leads
	pointer_value = nullptr;
	cout << &value << " - " << value << endl; // 000000EA684FF7F4  - 17
	// cout << pointer_value << " - " << *pointer_value << endl; // 0000000000000000 - занулили, при этом переменная значение имеет

	// Практика

	int arr[] = { 1,2,3,4,5,6 }; // 24 bytes
	minimal(arr, 6); // 48 bytes при такой передаче массива в функию в RAM мы будем занимать в 2 раза больше места в оперативной памяти

	// поэтому массив в функцию мы будем передавать по указателю
	// было minimal(int arr[], int length) {}
	// стало void minimal(int* arr, int length) {}

	return 0;
}

*/