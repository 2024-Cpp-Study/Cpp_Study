/#include <iostream>

// void�� �Լ� ����
void time(int hour, int minute);

using namespace std;

int main() {
	int hour, minute;

	cout << "�ð� ���� �Է��Ͻÿ� : ";
	cin >> hour;

	cout << "�� ���� �Է��Ͻÿ� : ";
	cin >> minute;

	time(hour, minute);

	return 0;
}

void time(int hour, int minute) {
	cout << "�ð�: " << hour << ":" << minute << endl;
}/