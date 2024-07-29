/*�Լ� c++ �Լ��� �ΰ��� ������ �ִ�.���ϰ��� �ִ� �Ͱ� ���ϰ��� ���� ��.ǥ�� �Լ� ���̺귯���� �ִ� �Լ��� ����� ���� �ְ�, ����ڰ� ���� ����� ����� ���� �ִ�.
* ���ϰ��� �ִ� �Լ� ���ϰ��� �ִ� �Լ��� ������ ������ �� �ִ� �ϳ��� ���� ����� ����.
// sqrt.cpp ? sqrt() �Լ��� ����Ѵ�
#include <iostream>
#include <camth>  // �Ǵ� math.h
Int main()
{
    using namespace std;
    Double area;
    Cout << ������ ������ �����Ʈ ������ �Է��Ͻÿ� : ��;
    Cin >> area;
    Double side;
    Side = sqrt(area);
    Cout << ���簢�� ������ �� ���� �� << side
        << ����Ʈ�� ����մϴ�.�� << endl;
    Cout << �������׿�!�� << endl;
    Return 0;
}
���� �Լ��� � �Լ��� �ϳ� �̻��� ������ �䱸�Ѵ�.�׷��� �Լ��� ���� ���� �Ű������� �޸��� �и��Ѵ�.�������, �����Լ��� pow()�� �Ű������� 2�� �䱸�Ѵ�.

����� ���� �Լ� ǥ�� c ���̺귯���� 140�� �̻��� �̸� ���ǵ� �Լ��� �����Ѵ�.
// ourfunc.cpp ? ����ڰ� �ۼ��ϴ� �Լ��� �����Ѵ�.
#include <iostream> 
Void simon(int);   // simon()�� ���� �Լ� ����
Int main()
{
    using namespace std;
    Simon(3); // simon() �Լ��� ȣ���Ѵ�.
    Cout << �������� �ϳ� ���ÿ� : ��;
    Int count;
    Cin >> count;
    Simon(count); // simon() �Լ��� �ٽ� ȣ���Ѵ�.
    Cout << ����!�� << endl;
    Return 0;
} void simon(int n) // simon () �Լ��� �����Ѵ�.
{
    using namespace std;
    Cout << ��simon ��, �߰����� �� << n << ���� �ε����.�� << endl;
} // void �� �Լ����� return ������ �ʿ����

���ϰ��� �ִ� ����� ���� �Լ�
// convert.cpp ? ������ �Ŀ��� ȯ���Ѵ�
#include <iostream> 
Int stonetolb(int); // �Լ�����
Int main()
{
    using namespace std;
    Int stone;
    Cout << ��ü���� ���� ������ �Է��Ͻÿ� : ��;
    Cin >> stone;
    Int pounds = stonetolb(stone);
    Cout << stone << �� ������ ��;
    Cout << pounds << �� �Ŀ���Դϴ�.�� << endl;
    Return 0;
}
Int stonetolb(int sts)
{
    return 14 * sts;
}

���� �Լ� ���α׷��� using ������ �ֱ�

������ ó��
C++ ����� ������������ �⺻���� �������� �ִ�.�⺻������ ������ ǥ���� �� �ִ� ��������, �Ҽ��ΰ� �ִ� ���� ǥ���� �� �ִ� �ε� �Ҽ������� �ִ�.
������, // short, int, long, long long ������
// limits.cpp ?- ���� �Ѱ谪
#include <iostream>
#include <climits> // ���� c++���� limits.h�� ����Ѵ�
Int main()
{
    using namespace std;
    Int n_int = INT_MAX;                    //n_int�� int���� �ִ밪���� �ʱ�ȭ
    Short n_short = SHRT_MAX;          // limits.h ���Ͽ� ���ǵ� ��ȣ ���
    Long n_long = LONG_MAX;
    Long long n_llong = LLONG_MAX;
    // sizeof �����ڴ� ���������̳� ������ ũ�⸦ �˾Ƴ���
    Cout << ��int�� �� << sizeof(int) << �� ����Ʈ�̴�.�� << endl;
    Cout << ��short�� �� << sizeof n_short << �� ����Ʈ�̴�.�� << endl;
    Cout << ��long�� �� << sizeof n_long << ������Ʈ�̴�.�� << endl << endl;
    Cout << ��long long�� �� << sizeof n_llong << �� ����Ʈ�̴�.�� << endl;
    Cout << endl;
    Cout << ���ִ�:�� << endl;
    Cout << ��int: �� << n_int << endl;
    Cout << ��short: �� << n_long << endl << endl;
    Cout << ��long: �� << n_short << endl << endl;
    Cout << ��long long: �� << n_llong << endl << endl;
    Cout << ��int�� �ּڰ� = �� << INT_MIN << endl��;
    Cout << ������Ʈ �� ��Ʈ�� = �� << CHAR_BIT << endl;
    Return 0;
}

// exceed.cpp ? ���� �Ѱ谪�� �ʰ��Ѵ�
#include <iostream> 
#define ZERO 0                  // �� 0���� ��ü�� ��ȣ ��� ZERO�� �����Ѵ�
#include <climits>              // INT_MAX�� int���� �ִ밪���� ���ǵǾ� �ִ�
Int main()
{
    using namespace std;
    Short Dohee = SHRT_MAX;             // ������ �ִ밪���� �ʱ�ȭ
    Unsigned short Insuk = Dohee;      // Dohee�� ���ǵǾ� �����Ƿ� �´�
    Cout << �������� ���¿��� �� << Dohee < ������ ��� �ְ�, ��;
    Cout << ���μ����� ���¿��� �� << Insuk << ������ ��� �ִ�.�� << endl;
    Cout << �������� ���¿� 1���� �Ա��Ѵ�.�� << endl << ������ ��;
    Dohee = Dohee + 1;
    Insuk = insuk + 1;
    Cout << �������� �ܰ�� �� << Dohee << ������ �Ǿ���, ��;
    Cout << ���μ����� �ܰ�� �� << insuk << ������ �Ǿ���----------------
    */ 
