#include <iostream>

using namespace std;

double hwa(double sup);

int main()
{
	double ip = 0, end = 0;

	ip = hwa(ip);
	end = ip * 63240;
	cout << ip << "������ " << end << "õ�� �����Դϴ�.";
	return 0;
}

double hwa(double sup)
{
	cout << "���� ���� �Է��ϰ� Enter Ű�� �����ʽÿ�: ";
	cin >> sup;

	return sup;
}