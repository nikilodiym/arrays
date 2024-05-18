#include <iostream>
#include <ctime>
using namespace std;


int main() {
	/*int array[] = {1, 2, 3, 4, 5};*/
	const int size = 5;
	double pentagon[size];

	cout << "Enter the width pentagon: ";
	for (int i = 0; i < size; i++) {
		cout << "Side " << i + 1 << ": ";
		cin >> pentagon[i];
	}
	
	double perimeter = 0;
	for (int i = 0; i < size; i++) {
		perimeter += pentagon[i];
	}

	cout << "Perimeter of pentagon: " << perimeter << endl;

	system("pause");
	return 0;
}


