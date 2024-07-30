/*
#include <iostream>

using namespace std;

int main() {
	cout << "Cycles:" << endl;
	cout << "For:" << endl;

	for (int i = 0; i < 10; i++) {
		cout << "Element: " << i << endl;
	}

	cout << "While:" << endl;
	int j = 0;
	while (j < 10) {
		cout << "Element: " << j << endl;
		j++;
	}

	cout << "Do While:" << endl;
	int k = 100;
	do {
		cout << "Element: " << k << endl;
		k -= 10;
	} while (k > 10);

	// ќператоры в циклах Operators in loops
	cout << "Operators in loops" << endl;

	for (int i = 0; i < 10; i++) {
		// if (i == 6) {
			// break;
		// }
		if (i % 2 != 0) {
			continue;
		}
		cout << "Element: " << i << endl;
	}

	// ”гадайка Guessing game
	srand(time(NULL));
	int rand_num = 1 + rand() % 15;
	bool stop = false;
	int user_input;

	do {
		cout << "Enter number: ";
		cin >> user_input;
		if (user_input != rand_num) {
			cout << "Wrong answer" << endl;
		}
		else {
			stop = true;
		}
	} while (!stop);

	cout << "Correct answer" << endl;

	return 0;
}

*/