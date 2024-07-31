/*
#include <iostream>
#include <string>
#include <fstream> 

using namespace std;

enum Options { // enumeration
	open,
	close,
	wait,
	del
};

struct File {
	float weight;
	string name;
	Options options;
};

int main() {
	setlocale(LC_ALL, "RU");

	File my_file;
	my_file.weight = 1.5f;
	my_file.name = "text.txt";
	my_file.options = Options::close;

	cout << my_file.options;

	if (my_file.options = Options::close) {
		cout << "File is close" << endl;
	}

	return 0;
}

// Перечисления повозляют создавать список из всех возможных вариантов

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