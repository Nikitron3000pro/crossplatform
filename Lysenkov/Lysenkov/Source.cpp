#include <iostream>

using namespace std;
int main()
{
	cout << "Hello World!" << endl;
	setlocale(LC_ALL, "Rus");
	char n;
	cout << "������� ������:";
	cin >> n;
	cout << "��������� ���� ������: " << n << endl;
	cin.get(); 

	return 0;
}