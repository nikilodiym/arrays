#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main() {
	srand(time(0));
	const int N = 10;
	int arr[N];

	for (int i = 0; i < N; i++) {
		arr[i] = (rand() % 200 - 100);
	}

	int minNumber = arr[0];
	int maxNumber = arr[0];
	int minIndex = 0;
	int maxIndex = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] < minNumber) {
			minNumber = arr[i];
			minIndex = i;
		}
		if (arr[i] > maxNumber) {
			maxNumber = arr[i];
			maxIndex = i;
		}
	}

	int sumNegativeNumber = 0;
	int productBetweenMinMax = 1;
	int productEvenIndex = 1;
	int sumBetweenFirtsNegativeNumberAndLastNegativeNumber = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] < 0) {
			sumNegativeNumber += arr[i];
		}
		if (i > minIndex && i < maxIndex) {
			productBetweenMinMax *= arr[i];
		}
		if (i % 2 == 0) {
			productEvenIndex *= arr[i];
		}
		if (arr[i] < 0) {
			sumBetweenFirtsNegativeNumberAndLastNegativeNumber += arr[i];
		}
	}

	cout << "Sum of negative numbers: " << sumNegativeNumber << endl;
	cout << "Product between min and max: " << productBetweenMinMax << endl;
	cout << "Product of elements with even index: " << productEvenIndex << endl;
	cout << "Sum between first and last negative number: " << sumBetweenFirtsNegativeNumberAndLastNegativeNumber << endl;

	system("pause");
	return 0;
}


