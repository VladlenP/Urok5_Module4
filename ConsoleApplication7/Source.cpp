#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <locale>
#include <time.h>

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
		int kolvosports;
		cout << "Введите количество Спортсменов" << endl;
		cin >> kolvosports;
		int kolvoigr;
		cout << "Введите количество Игр" << endl;
		cin >> kolvoigr;
		srand(time(0));
		int balls;
		int summ = 0;
		for (int i = 1; i <= kolvosports; i++)
		{
			balls = 0;
			summ = 0;
			for (int j = 1; j <= kolvoigr; j++)
			{
				balls = 1 + rand() % 20;
				summ += balls;
			}

			cout << "Спортсмен " << i << " Заработал" << " - " << summ << endl;
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
		int kolvouchen;
		cout << "Введите количество Учеников" << endl;
		cin >> kolvouchen;
		srand(time(0));
		int k1, k2, sum1 = 0, sum2 = 0;
		for (int i = 1; i <= kolvouchen; i++)
		{
			k1 = 1 + rand() % 5;
			k2 = 1 + rand() % 5;
			sum1 += k1;
			sum2 += k2;
		}
		float sr1 = sum1 / (float)kolvouchen;
		float sr2 = sum2 / (float)kolvouchen;
		cout.precision(3);
		cout << "1 класс - " << sr1 << endl;
		cout << "2 класс - " << sr2 << endl;
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
		int region;
		cout << "Введите количество Областей" << endl;
		cin >> region;
		srand(time(0));
		int gitelei;
		int ploshad;
		int summ1 = 0;
		int summ2 = 0;
		for (int i = 1; i <= region; i++)
		{
			gitelei = 1 + rand() % 1000;
			ploshad = 1 + rand() % 500;
			summ1 += gitelei;
			summ2 += ploshad;
		}
		cout.precision(3);
		float plotnost;
		plotnost = (summ1 / region) / (summ2 / region);
		cout << "Всего в " << region << " областях " << " Всего жителей" << " - " << summ1 << endl;
		cout << "Всего в " << region << " областях " << " Общая площадь" << " - " << summ2 << endl;
		cout << "Всего в " << region << " областях " << " Средняя плотность" << " - " << plotnost << endl;



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
		int p;
		cout << "Спортзал Веселые Медведи" << endl;
		cout << "За сегодня" << endl;
		cout << "Введите количество Посетителей" << endl;
		cin >> p;
		int v;
		int summ = 0;
		int max = 0;
		int min = 100;
		cout << "Введите Возраст каждого поситителя" << endl;
		for (int i = 1; i <= p; i++)
		{
			cin >> v;
			summ += v;
			if (v > max)
				max = v;
			if (v < min)
				min = v;
		}
		float average = summ / (float)p;
		cout << "Восего посетило" << p << " человек " << endl;
		cout << "Возраст самого старшего посетителя " << max << " лет" << endl;
		cout << "Возраст самого младшего посетителя " << min << " лет" << endl;
		cout << "Средний возраст " << average << " лет" << endl;


		cout << "Хотите продолжить? (y/n)" << endl;
		cin >> s;
		if (s == 'y')
		{
			goto Tryagain1;
		}
		else

			break;
	}
	case 5:
	{
		system("cls");
		cout << "Задание номер 5" << endl;
		int p;
		int i = 15, n = 0, x;
		do
		{
			n++;
		Tryagainhere:
			cout << "Осталось" << i << " ящиков" << endl;
			cout << "Сколько ящиков загрузить в " << n << " машину?" << endl;
			cin >> x;
			if (x > i)
			{
				cout << "Введено большее количество ящиков, чем осталось на складе" << endl;
				goto Tryagainhere;
			}
			i -= x;
		} while (i > 0);
			cout << "Ящики закончились " << endl;
		cout << "Хотите продолжить? (y/n)" << endl;
		cin >> s;
		if (s == 'y')
		{
			goto Tryagain1;
		}
		else

			break;
	}
	break;
	}

}