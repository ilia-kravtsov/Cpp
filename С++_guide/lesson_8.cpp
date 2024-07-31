/*
#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	char word[] = { 'H', 'e', 'l', 'l', 'o','!' }; // the ' It has to be here.
	// or char word[] = "Hello!"

	for (int i = 0; i < 6; i++) {
		cout << word[i];
	} // that was the only way in 'c' language to specify a string

	string words = "Hello World!"; // the " It has to be here.

	words[0] = 'F';
	words[6] = 'F';

	cout << "\n" << words << endl;

	// Получение строки от пользователя
	string words_2 = "";

	cin >> words_2;
	cout << "New: " << words_2;

	string words_3 = "";

	getline(cin, words_3);

	return 0;
}
*/