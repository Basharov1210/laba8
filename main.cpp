#include <iostream>
#include <vector>
#include "Student.h"
#include <list>
#include "Complex.h"
#include <queue>

using namespace std;

void interview()
{
	vector<student> vec;
	student typical;
	cout << "������� ���, ������� � ������� ��������: ";
	cin >> typical.name >> typical.surname >> typical.age;
	vec.push_back(typical);
	cout << "������ ��������� ���� ������� �������!\n\n";
}

void imagination()
{
	list<complex> list;
	complex number;
	cout << "������� �����: ";
	cin >> number.real >> number.imaginary;
	list.push_back(number);
	cout << "����������� ����� ������� ���������!" << endl << endl;

}

void carWash()
{
	queue<string> queue;
	string car = { 0 };
	cout << "������� �������� ������ ���������� : ";
	cin >> car;
	queue.push(car);
	cout << "������� �������� ���������� � �������!" << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "1) ������� ���������� � ��������\n"
		<< "2) ������� ����������� �����\n"
		<< "3) ������������ ������� �� ���������\n"
		<< "4) �����\n";
	char choice;
	while (true)
	{
		cout << "������� �����: ";
		cin >> choice;
		switch (choice)
		{
		case '1':
			interview();
			break;
		case '2':
			imagination();
			break;
		case '3':
			carWash();
			break;
		case '4':
			return 0;
		default:
			cout << "�������� ����\n";
		}
	}
}
