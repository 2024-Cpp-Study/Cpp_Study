#include <iostream>
#include <string>

using namespace std;

string three(); // ��ȯ�� string���� �ؾ� �Ǳ� ����
string see();


int main()
{

	string fuc = three();
	string run = see();
	cout << fuc << endl;
	cout << fuc << endl;
	cout << run << endl;
	cout << run;



	return 0;
}

string three()
{
	string blind = "Three blind mice";


	return blind; // ��ȯ�� string���� �ؾ� �Ǳ� ����
}
string see()
{
	string how = "See how they run";

	return how;
}