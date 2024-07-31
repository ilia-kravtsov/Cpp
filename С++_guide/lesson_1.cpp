// 1 действие: подключение директивы (библиотеки которая даст доступ к определенным методам и функциям внутри области видимости файла)
// Для подключение директивы используется #include - подключение
// #include <название подключаемой директивы>
// #include <iostream> # means input/ouput stream, с ее помощью мы можем выводить информацию для пользователя или получать ее от него.

// #include <iostream>

// 2 action: to describe the main function, the function from all our project starts.
// any code we write in that main function will be executed when we run our project.
/*
	int main() {
		return 0;
	}
*/

// 3 action: std # means standard. standard names area.
// to select some function from the names area you need to use ::, so
// std::

// 4 action: for output some information from std we write << and then "where we can write any text to display it".

// 5 action: in order for this line to be considered complete we must enter ;

// std::endl || \n # to enter

// 6 action: # setting the encoding format
// setlocale(LC_ALL, "RU"); # to display сyrillic alphabet

// 7 action: Comments // or /* */ 

/*
int main() { // main function creation
	// the area where we can write executable code
	setlocale(LC_ALL, "RU");

	std::cout << "where we can print any text to display it\n" << std::endl;
	std::cout << "where we can print any text to display it\n";
	std::cout << "Как насчёт кириллицы?\n";

	return 0;
}
*/