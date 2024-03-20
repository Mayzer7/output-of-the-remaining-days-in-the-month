#include <iostream>
using namespace std;
#include <math.h>



int main()
{
	int month;
	int dayMonth;
	cin >> month;
	cin >> dayMonth;

	cout << "Программа подсчитывает оставшиеся дни в месяце" << endl;
	cout << "Введите порядковый номер месяца" << endl;
	cout << "Введите день месяца" << endl;

	if (month == 2) {
		cout << 28 - dayMonth;
	}
	else if (month == 4 or month == 6 or month == 9 or month == 11) {
		cout << 30 - dayMonth;
	}
	else {
		cout << 31 - dayMonth;
	}
}