
#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#include<cstring>
using namespace std;
void task1()
{
	char c1[26] = {"пасмурно, возможны осадки"};
	char c2[6] = {"дождь"};
	char c3[5] = { "снег" };
	char c4[5] = { "град" };
	int a,f;
	do
	{
		a=0+rand()%2;
		if (a==0)
		{
			cout << "солнечно" << endl;
		}
		else
		{
			int g = 100 + rand() % 500;
			int h = 0 + rand() % 5;
			switch (h)
			{
			case 1:cout << c1 << endl; break;
			case 2:cout << c2 << ' ' << "количестов осадков" << ':' << g << endl; break;
			case 3:cout << c3 << ' ' << "количестов осадков" << ':' << g << endl; break;
			case 4:cout << c4 << ' ' << "количестов осадков" << ':' << g << endl; break;
			default:
				break;
			}

		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &f);
	} while (f == 1);
}
void task2()
{
	int a;
	cin >> a;
	int c = 0;
	int g = a;
	while (a > 0)
	{
		static int t = a;
		t = a / 8;
		a = t;
		c++;
	}
	int *b = new int[c];
	for (int  i = c-1; i > -1; i--)
	{
		static int t = a;
		t = g / 8;
		b[i] = g - 8 * t;
		g = t;
		cout << b[i] << endl;
	}
	for (size_t i = 0; i < c; i++)
	{
		cout << b[i];
	}
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}