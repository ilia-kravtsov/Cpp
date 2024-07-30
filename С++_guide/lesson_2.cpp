/*
	Variable is a cell in the computer's memory where we can insert some data and then work with it later.
	So, variable is just some storage cell, like in a bank.

	Для создания переменной в первую очередь необходимо указать ее тип данных.
	To create a variable, first of all, you need to specify its data type.

	To create a variable in which we will store some integer we can use - int
	integer - целое число

	Since we return 0 from our function so that we can see int before main function

	after 'int' we need to enter the name of the variable.
	int firstCppNumber = 11;

	declaring a variable:
	int num;

	declaring and assigning a value to variable: 
	int firstCppNumber = 11;

	to out the data from a variable:
	std::cout << firstCppNumber;

	при создании переменной я указываю тип данных который впоследствии не может быть изменен, но может быть изменено само значение переменной.
	when creating a variable, I specify a data type that cannot be changed later, but the value of the variable itself can be changed.

	int a, b; // int a = 10, b = 11 - doable

	std::cin # cin - allows us to get data from the user, cin uses >> not << 
	std::cout # uses <<

	std::cin >> a; // here we will specify the data that we will receive from the user

	depending on the value of the data that you want to store in the variable, you need to specify the appropriate type when creating it

	под каждый тип данных выделяется определенное количество оперативной памяти
	a certain amount of RAM is allocated for each data type
*/

/* #include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	int firstCppNumber = 11;

	firstCppNumber = 3;
	std::cout << "Переменная: " << firstCppNumber << std::endl;

	firstCppNumber = 5;
	std::cout << "Переменная: " << firstCppNumber << std::endl;

	int a, b; 
	std::cout << "Введите переменную a: ";
	std::cin >> a; 

	std::cout << "Введите переменную b: ";
	std::cin >> b;

	std::cout << "a: " << a << ". b: " << b << std::endl;
	std::cout << "Арифметические действия с a и b: " << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;

	// Data Types:

	// целые числа/integers
	// int # -2147483648 > int < 2147483647, 4 bytes of RAM
	// short # as int, but: -32000 > short < 32000, 2 bytes of RAM
	// long # -9223372036854775808 > long < 9223372036854775807, 8 bytes of RAM

	int num_2 = 2;
	short num_1 = 1;
	long num_3 = 2;

	// Removing negative values
	unsigned short num_1 = 1; // from 0 to 65535.
	unsigned int num_2 = 2; // from 0 to 4294967295.
	unsigned long num_3 = 2; // from 0 to 18446744073709551615.

	// Float
	float num_4 = 1.1f; // from 1.175494e-38 to 3.402823e+38.
	double num_5 = 1.2f; // from 2.22507e-308 to 1.79769e+308

	// Symbol
	char symbol = '&'; // 1 character

	// Boolean
	bool isGood = true; // or false

	return 0;
}
*/