#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <locale>

using namespace std;
char s;
void main()
{
Tryagain1:
	setlocale(LC_ALL, "RU");
	cout << "Введите номер задания" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		system("cls");
		cout << "Задание номер 1" << endl;
		int pricea;
		cout << "Введите стоимость одного товара" << endl;
		cin >> pricea;
		cout << "Введите количество товара (в штуках)" << endl;
		int number;
		cin >> number;
		int pricenumber;
		for (int i = 1; i <= number; i++)
		{
			pricenumber = pricea*i;
			cout << pricenumber << " штук" << endl;
		}
		cout << "Хотите продолжить? (y/n)" << endl;
		cin >> s;
		if (s == 'y')
		{
			goto Tryagain1;
		}
		else

			break;
	}
	case 2:
	{
		system("cls");
		cout << "Задание номер 2" << endl;
		int pound = 453;
		int kg;
		cout << "Введите количество киллограммов" << endl;
		cin >> kg;
		for (int i = 1; i <= kg; i++)
		{
			int ipound;
			ipound = i*pound;
			cout << i << " кг." << " " << ipound << " фунтов" << endl;

		}
		cout << "Хотите продолжить? (y/n)" << endl;
		cin >> s;
		if (s == 'y')
		{
			goto Tryagain1;
		}
		else

			break;
	}
	case 3:
	{
		system("cls");
		cout << "Задание номер 3" << endl;
		float mm = 25.4;
		int duym;
		cout << "Введите расстояние в дюймах" << endl;
		cin >> duym;
		for (int i = 1; i <= duym; i++)
		{
			float imm;
			imm = i*mm;
			cout << i << " дюймов" << " " << imm << " миллиметров" << endl;

		}
		cout << "Хотите продолжить? (y/n)" << endl;
		cin >> s;
		if (s == 'y')
		{
			goto Tryagain1;
		}
		else

			break;
	}
	case 4:
	{
		system("cls");
		cout << "Задание номер 4" << endl;
		float dollar;
		int tenge;
		cout << "Введите курс Доллара по отношению к тенге" << endl;
		cin >> dollar;
		cout << "Введите количество тенге" << endl;
		cin >> tenge;
		for (int i = 1; i <= tenge; i++)
		{
			float idt;
			idt = i*dollar;
			cout << i << " тенге" << " " << idt << " долларов" << endl;

		}
		cout << "Хотите продолжить? (y/n)" << endl;
		cin >> s;
		if (s == 'y')
		{
			goto Tryagain1;
		}
	}
	case 5:
		{
			system("cls");
			cout << "Задание номер 5" << endl;
			float multipletable = 7;
			int seven;
			cout << "Введите количество 7" << endl;
			cin >> seven;
			for (int i = 1; i <= seven; i++)
			{
				float iseven;
				iseven = i*multipletable;
				cout << i << " = " << iseven << endl;

			}
			cout << "Хотите продолжить? (y/n)" << endl;
			cin >> s;
			if (s == 'y')
			{
				goto Tryagain1;
			}
		else

			break;
	}
	case 6:
	{
		system("cls");
		cout << "Задание номер 6" << endl;
		int kolvosports;
		cin >> kolvosports;
		int kolvoigr;
		cin >> kolvoigr;


		break;
	}
	break;
	}

}