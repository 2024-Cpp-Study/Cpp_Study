#include <iostream>

using namespace std;

double change(float);

int main()
{
	float a; //���� ��
	double b; //õ������

	cout << "���� �� �Է� : ";
	cin >> a;

	b = change(a);
	cout << a << "������" << b << "õ�� �����̴� ";

	return 0;
}

double change(float var) // a�� ���� ����
{
	double c = var * 63240; //c : õ�������� ����ϰ� ������ ����

	return c;
}