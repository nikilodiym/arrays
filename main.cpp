#include <iostream>
#include <ctime>
using namespace std;


int main() {
	double profitForTheMonth[6];
	double allProfit = 0;

	for (int i = 0; i < 6; i++) {
		cout << "Enter the profit for the month " << i + 1 << ": ";
		cin >> profitForTheMonth[i];
		allProfit += profitForTheMonth[i];
	}

	cout << "The profit for the 6 months is: " << allProfit << endl;

	system("pause");
	return 0;
}


