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
	cout << "Введите имя, фамилию и возраст студента: ";
	cin >> typical.name >> typical.surname >> typical.age;
	vec.push_back(typical);
	cout << "Данные студентов были успешно собраны!\n\n";
}

void imagination()
{
	list<complex> list;
	complex number;
	cout << "Введите числа: ";
	cin >> number.real >> number.imaginary;
	list.push_back(number);
	cout << "Комплексное число успешно сохранено!" << endl << endl;

}

void carWash()
{
	queue<string> queue;
	string car = { 0 };
	cout << "Введите описание вашего автомобиля : ";
	cin >> car;
	queue.push(car);
	cout << "Успешно добавлен автомобиль в очередь!" << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "1) Хранить информацию о студенте\n"
		<< "2) Хранить комплексное число\n"
		<< "3) Организовать очередь на автомойку\n"
		<< "4) Выход\n";
	char choice;
	while (true)
	{
		cout << "Введите номер: ";
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
			cout << "Неверный ввод\n";
		}
	}
}
