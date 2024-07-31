/*
#include <iostream>
#include <string>
#include <fstream> // для работы с файлами

using namespace std;

// Работа с файлами

int main() {
	setlocale(LC_ALL, "RU");

	// Запись данных внутрь файла, output file stream ofstream
	// ofstream file("test.txt", ios_base::out); // test.txt имя файла, ios_base::out - формат открытия файла
	
	// Далее идёт проверка, открыт ли файл и можем ли мы с ним работать
	// if (file.is_open()) {
	// 	file << "First remote writing in the file with the help of c++";
	// 	file.close(); // после открытия файла и работы с ним его необходимо закрывать
	// } 

	// Считывание данных из файла, input file stream ifstream позволяет считывать данные файла
	ifstream file("test.txt");
	// Сохранение данных из файла, ранее мы писали cin >> temp; теперь
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