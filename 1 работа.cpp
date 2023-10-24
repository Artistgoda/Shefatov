#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int var;
	cout << "Введите число:";
	cin >> var;

	if (var % 2 == 0)
	{
		cout << " Число " << var << " Чётное! " << endl;
	}
	else
	{
		cout << " Число " << " Нечётное! " << endl;
	}
	return 0;
}