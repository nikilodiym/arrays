#include <iostream>
#include <ctime>
using namespace std;


int main() {
	const int months = 12;
	double profits[months];
	
	for (int i = 0; i < months; i++) {
		cout << "Enter profit for month " << i + 1 << ": ";
		cin >> profits[i];
	}

	double maxProfit = profits[0];
	double minProfit = profits[0];
	int maxIndex = 0;
	int minIndex = 0;
	for (int i = 1; i < months; i++) {
		if (profits[i] > maxProfit) {
			maxProfit = profits[i];
			maxIndex = i;
		}
		if (profits[i] < minProfit) {
			minProfit = profits[i];
			minIndex = i;
		}
	}

	cout << "Max profit: " << maxProfit << " in month " << maxIndex + 1 << endl;
	cout << "Min profit: " << minProfit << " in month " << minIndex + 1 << endl;



	system("pause");
	return 0;
}
