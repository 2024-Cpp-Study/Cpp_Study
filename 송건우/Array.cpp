#include <iostream>


int main()
{
	using namespace std;
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamscosts[3] = { 200, 300, 50 };

	cout << "���� �հ� = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << yams[1] << "���� ��� �ִ� ������ ";
	cout << "����" << yamscosts[1] << "�����Դϴ�. \n";
	int total = yams[0] * yamscosts[0] + yams[1] * yamscosts[1];
	total = total + yams[2] * yamscosts[2];
	cout << "�� ������ �� ������ " << total << "���Դϴ�.\n";
	cout << "\nyams �迭�� ũ��� " << sizeof yams << "����Ʈ�Դϴ�. \n";
	cout << "���� �ϳ��� ũ��� " << sizeof yams[0] << "����Ʈ�Դϴ�. \n";



	return 0;
}