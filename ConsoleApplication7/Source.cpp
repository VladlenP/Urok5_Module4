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
	cout << "������� ����� �������" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		system("cls");
		cout << "������� ����� 1" << endl;
		int pricea;
		cout << "������� ��������� ������ ������" << endl;
		cin >> pricea;
		cout << "������� ���������� ������ (� ������)" << endl;
		int number;
		cin >> number;
		int pricenumber;
		for (int i = 1; i <= number; i++)
		{
			pricenumber = pricea*i;
			cout << pricenumber << " ����" << endl;
		}
		cout << "������ ����������? (y/n)" << endl;
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
		cout << "������� ����� 2" << endl;
		int pound = 453;
		int kg;
		cout << "������� ���������� ������������" << endl;
		cin >> kg;
		for (int i = 1; i <= kg; i++)
		{
			int ipound;
			ipound = i*pound;
			cout << i << " ��." << " " << ipound << " ������" << endl;

		}
		cout << "������ ����������? (y/n)" << endl;
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
		cout << "������� ����� 3" << endl;
		float mm = 25.4;
		int duym;
		cout << "������� ���������� � ������" << endl;
		cin >> duym;
		for (int i = 1; i <= duym; i++)
		{
			float imm;
			imm = i*mm;
			cout << i << " ������" << " " << imm << " �����������" << endl;

		}
		cout << "������ ����������? (y/n)" << endl;
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
		cout << "������� ����� 4" << endl;
		float dollar;
		int tenge;
		cout << "������� ���� ������� �� ��������� � �����" << endl;
		cin >> dollar;
		cout << "������� ���������� �����" << endl;
		cin >> tenge;
		for (int i = 1; i <= tenge; i++)
		{
			float idt;
			idt = i*dollar;
			cout << i << " �����" << " " << idt << " ��������" << endl;

		}
		cout << "������ ����������? (y/n)" << endl;
		cin >> s;
		if (s == 'y')
		{
			goto Tryagain1;
		}
	}
	case 5:
		{
			system("cls");
			cout << "������� ����� 5" << endl;
			float multipletable = 7;
			int seven;
			cout << "������� ���������� 7" << endl;
			cin >> seven;
			for (int i = 1; i <= seven; i++)
			{
				float iseven;
				iseven = i*multipletable;
				cout << i << " = " << iseven << endl;

			}
			cout << "������ ����������? (y/n)" << endl;
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
		cout << "������� ����� 6" << endl;
		int kolvosports;
		cin >> kolvosports;
		int kolvoigr;
		cin >> kolvoigr;


		break;
	}
	break;
	}

}