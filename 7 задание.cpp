#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int year;
    cout << " Введите год ";
    cin >> year;
    
if (year % 100 ==0){
    cout << "Год вековой";
}
else {
    cout << "Год не вековой";
}
return 0;
}

