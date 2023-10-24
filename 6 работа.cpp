#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int num;
        cout << "Введите число:";
        cin >> num;
        while (num % 2 == 0) {
            num = num / 2;
        }
        if (num == 1) {
            cout << "Число является степенью 2";

        }
        else {
            cout << "Число не является степенью 2";
        }
        return 0;
}
