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
//	cout << "이 문장의 총 문자 수는 " << total << "이고 ";
//	cout << "그 중에서 빈칸은 " << spaces << "개입니다.\n";
//	return 0;
//}

#include <iostream>

using namespace std;

int main()
{
	char ch;

	cout << "타이핑하시면, 반복 수행하겠습니다. \n";
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;

		cin.get(ch);
	}

	cout << "\n 혼란스럽게 해서 죄송합니다. \n";
	cin.get();
	cin.get();
	return 0;
}
