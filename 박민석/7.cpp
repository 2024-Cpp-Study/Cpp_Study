#include <iostream>

using namespace std;

void Show(int, int);

int main()
{
	int a, b; // a�� �� b�� ��

	cout << "�ð� �Է� : ";
	cin >> a;
	cout << "�� �Է� :";
	cin >> b;

	Show(a, b);
}

void Show(int hour, int min)
{
	cout << "�ð� : " << hour << "��" << min <<"��";
}