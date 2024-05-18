#include <iostream>
#include <ctime>
using namespace std;


int main() {
	int array[] = {1, 2, 3, 4, 5};
	int size = sizeof(array) / sizeof(array[0]);

	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size / 2; i++) {
		int temp = array[i];
		array[i] = array[size - i - 1];
		array[size - i - 1] = temp;
	}

	cout << "Reversed array: ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}


