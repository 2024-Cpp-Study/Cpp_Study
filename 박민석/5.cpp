#include <iostream>

using namespace std;

float change(float);

int main()
{
	float a, b; // a : �����µ�, b : ȭ���µ�

	cout << "�����µ��� �Է� : ";
	cin >> a;

	b = change(a);
	cout << "����" << a << "���� ȭ���µ���" << b << "�� �Դϴ�";

	return 0;
}

float change(float x)
{
	float c = 1.8 * x + 32.0;

	return c;
}