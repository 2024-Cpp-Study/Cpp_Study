#include <iostream>

using namespace std;

double hwa(double sup);

int main()
{
	double ip = 0, end = 0;

	ip = hwa(ip);
	end = 1.8 * ip + 32.0;
	cout << "���� " << ip <<"���� ȭ���� "<< end << "���Դϴ�.";
	return 0;
}

double hwa(double sup)
{
	cout << "���� �µ��� �Է��ϰ� Enter Ű�� �����ʽÿ�: ";
	cin >> sup;

	return sup;
}