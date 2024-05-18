#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int months = 12;
    double profit[months];

    cout << "Enter the profit for each month: " << endl;
    for (int i = 0; i < months; i++) {
        cout << "Month " << i + 1 << ": ";
        cin >> profit[i];
    }

    int firstNumberInDip, lastNumberInDip;

    cout << "Enter the range of months to check for dips in profit (first and last month numbers): ";
    cin >> firstNumberInDip >> lastNumberInDip;

    if (firstNumberInDip < 1 || firstNumberInDip > months || lastNumberInDip < 1 || lastNumberInDip > months || firstNumberInDip > lastNumberInDip) {
        cout << "Invalid range!" << endl;
        return 1;
    }

    double maxProfit = profit[firstNumberInDip - 1];
    double minProfit = profit[firstNumberInDip - 1];

    cout << "Dips in profit: " << endl;
    for (int i = firstNumberInDip - 1; i < lastNumberInDip; i++) {
        if (profit[i] > maxProfit) {
            maxProfit = profit[i];
        }
        if (profit[i] < minProfit) {
            minProfit = profit[i];
        }
    }

    cout << "Max profit: " << maxProfit << endl;
    cout << "Min profit: " << minProfit << endl;

	system("pause");
    return 0;
}
