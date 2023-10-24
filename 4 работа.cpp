#include <iostream>
#include <string>
using namespace std;
int main(){
	setlocale(0, "");
int arr[3];
for(int i = 0; i < 3; i++) {
	cin >> arr[i];
}
if (arr[0] == arr[2]) {
	cout << "Строка палиндром";
}
else {
	cout << "Строка не палиндром";
}
return 0;
}
