#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string address;

    // ����ڷκ��� �̸� �Է� �ޱ�
    std::cout << "�̸��� �Է��ϼ���: ";
    std::getline(std::cin, name);

    // ����ڷκ��� �ּ� �Է� �ޱ�
    std::cout << "�ּҸ� �Է��ϼ���: ";
    std::getline(std::cin, address);

    // �Էµ� �̸��� �ּ� ���
    std::cout << "\n�Էµ� ����:" << std::endl;
    std::cout << "�̸�: " << name << std::endl;
    std::cout << "�ּ�: " << address << std::endl;

    return  0;
}