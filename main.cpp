#include <iostream>
#include <ctime>
using namespace std;


int main() {
	srand(time(0));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}

	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int minNumber = arr[0];
	int maxNumber = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < minNumber) {
			minNumber = arr[i];
		}
		if (arr[i] > maxNumber) {
			maxNumber = arr[i];
		}
	}

	cout << "Min number: " << minNumber << endl;
	cout << "Max number: " << maxNumber << endl;

	system("pause");
	return 0;
}