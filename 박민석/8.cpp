/*if (test-condition)
        statement
        
      test-condition ���̸� ���� �����̸� �����ϰ� �ǳʶ� */


/*if (test - condition)
        statement
else
         statement2              -> test - condition ���̸�  statement�����ϰ� �����̸� statement2����
         
         
         if else �������� ���������ϴ� �� �۾��� ���� ���� �̾�� �Ѵ�  �ϳ� �̻��� ������ �䱸�� ���� �߰�ȣ {} �� ����� �Ѵ�. */


/*if else if else ����
-> if (ch == 'A')
        a_grade++; -> ���� 1
   else
       if (ch == 'B')���� 2
         b_grade++; ���� ���� 1
       else
         soso++; ���� ���� 2*/

/*for�� ->

for�� �ܰ� ó��
1. ���� �˻翡 ����� ī���� ���� �ʱ�ȭ �Ѵ�.
2. ������ ������ ������ ������ �˻��Ѵ�.]
3.���� ��ü�� �����Ѵ�. -> ������ ���� ���� �����Ѵ�. 
4. ī���� ���� �����Ѵ�

int main()
{
    int i; // ī���� ���� 

    for (i = 0; i < 5; i++)
    {
        cout << "c++�� ������ ����մϴ�\n";
    }
    cout << "������ ���� ������ �ϴ��� �˰� �ֽ��ϴ�\n";

    return 0;
}
for ������ ���� ���� �����̴�. �� ���� �ֱ⿡ ������ �� ���� �˻� ǥ������ �򰡵�

*/



/*#include <iostream>

using namespace std;


int main()
{
    cin;
    cout;

    char ch;

    int spaces = 0;
    int total = 0;

    cin.get(ch);

    while (ch == '.')
    {
        if (ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }

    cout << "�� ������ �� ���� ����" << total << "�̰�";
    cout << "�� �߿��� ��ĭ��" << spaces << "���Դϴ� \n";

    return 0;
}*/

/*#include <iostream>

using namespace std;


int main()
{
    char ch;

    cout << Ÿ���� �Ͻø�, �ݺ�����\n;
    cin.get(ch);
    while(ch !='.')
    {
       if(ch == '\n');
               cout << ch; -> ���� �����ϋ� ����

       else
           cout << ++ch -> ���� ���ڰ� �ƴ� �ٸ� �����ϋ� ����
        cin.get(ch)
    }
    return 0;
}*/
