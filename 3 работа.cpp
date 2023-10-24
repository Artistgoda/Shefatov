#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int i;
	cin >> i;

	if (i % 4 == 0 && i % 100 == 0 && i % 400 == 0) {
		cout << "Високосный" << endl;
	}
	else if (i % 4 == 0 && i % 100 == 0) {
		cout << "Не високосный" << endl;
	}
	else if (i % 4 == 0) {
		cout << "Високосный" << endl;
	}
	else
		cout << "Не високосный" << endl;
	return 0;
}
