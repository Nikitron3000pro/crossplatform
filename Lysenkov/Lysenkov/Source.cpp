#include <iostream>

using namespace std;
int main()
{
	cout << "Hello World!" << endl;
	setlocale(LC_ALL, "Rus");
	char n;
	cout << "Введите символ:";
	cin >> n;
	cout << "Введенный Вами символ: " << n << endl;
	cin.get(); 

	return 0;
}