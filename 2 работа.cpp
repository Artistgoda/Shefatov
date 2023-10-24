#include <iostream>
using namespace std;
int main()
{
 setlocale(0, "");
 int n;
 cin >> n;
 if (n == 0)
	 cout << "Число равно 0\n";
 else if (n < 0)
	 cout << "Число отрицательное\n";
 else
	 cout << "Число положительное\n";

 return 0;
}
