#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    system("color F2");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // �������
    string last_name;
    cout << "������ �������: ";
    getline(cin, last_name);

    // ��'�
    string first_name;
    cout << "������ ��'�: ";
    getline(cin, first_name);

    // ³�
    int age;
    cout << "������ ��: ";
    cin >> age;

    // �������� ������ ���� �������� �����
    cin.ignore();

    // ���� �������� �����
    cout << "\n���� ���:" << endl;
    cout << "�������: " << last_name << endl;
    cout << "��'�: " << first_name << endl;
    cout << "³�: " << age << endl;

    return 0;
}
