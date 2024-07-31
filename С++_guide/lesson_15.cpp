/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Обработка исключений Exception handling

void divide(float a, float b) {
	if (b == 0) throw(123);
	cout << (a / b);
}

int main() {
	setlocale(LC_ALL, "RU");
	
	try {
		divide(5.2f, 0.0f);
	}
	catch (int error) {
		if (error == 123) cout << "Делить на ноль нельзя!";
	}

	return 0;
}
*/
/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	return 0;
}
*/