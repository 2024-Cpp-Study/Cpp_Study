//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	cout << "C++�� ����� ���ʽÿ�";
//	cout << endl; // �� ��ȯ
//	cout << "��ȸ No" << endl;
//	return 0;
//}

// ���

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//
//	int carrots;
//
//	carrots = 25;
//	cout << "���� ����� ";
//	cout << carrots;
//	cout << "�� ������ �ִ�.";
//	cout << endl;
//	carrots = carrots - 1;
//	cout << "���� ����� " << carrots << "���̴�." << endl;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	
//	int carrots;
//
//	cout << "��� �� �� ? : ";
//	cin >> carrots;
//	cout << "���� �� �� �� ";
//	carrots = carrots + 2;
//	cout << "���� ����� ��� " << carrots << "���̴�. " << endl;
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//
//int main()
//{
//	using namespace std;
//
//	double area;
//	cout << "�Է�";
//	cin >> area;
//	double side;
//	side = sqrt(area);
//	cout << "���� �Ѻ� " << side << "��Ʈ�� ���" << endl; cout << "��" << endl;
//
//	return 0;
//}

#include <iostream>

void simon(int);

int main()
{
	using namespace std;
	simon(3);
	cout << "���� �ϳ�";
	int count;
	cin >> count;
	simon(count);
	cout << "��" << endl;
	return 0;
}

void simon(int n)
{
	using namespace std;
	cout << "�߰�����" << n << endl;

}