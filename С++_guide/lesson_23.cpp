#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Шаблоны классов

template <class T>
class Arrays {
private:
	int length;
	T* arr;
public:
	Arrays(T* a, int length) {
		this->length = length;
		arr = new T[length];
		for (int i = 0; i < length; i++) {
			*(arr + i) = *(a + i);
		}
	}

	void get() {
		for (int i = 0; i < length; i++) {
			cout << *(arr + i) << " ";
		}
		cout << endl;
	}

	~Arrays() {
		delete[] arr;
	}
};

int main() {
	setlocale(LC_ALL, "RU");

	int arr1[] = { 3,4,5 };
	Arrays<int> obj1(arr1, 3);
	obj1.get();

	float arr2[] = { 3.1f,4.1f,5.3f};
	Arrays<float> obj2(arr2, 3);
	obj2.get();

	return 0;
}

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