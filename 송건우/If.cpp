//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	cin;
//	cout;
//	char ch;
//	int spaces = 0;
//	int total = 0;
//	cin.get(ch);
//	while(ch != '.')
//	{
//		if (ch == ' ')
//			++spaces;
//		++total;
//		cin.get(ch);
//	}
//
//	cout << "�� ������ �� ���� ���� " << total << "�̰� ";
//	cout << "�� �߿��� ��ĭ�� " << spaces << "���Դϴ�.\n";
//	return 0;
//}

#include <iostream>

using namespace std;

int main()
{
	char ch;

	cout << "Ÿ�����Ͻø�, �ݺ� �����ϰڽ��ϴ�. \n";
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;

		cin.get(ch);
	}

	cout << "\n ȥ�������� �ؼ� �˼��մϴ�. \n";
	cin.get();
	cin.get();
	return 0;
}
