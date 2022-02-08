//Тема: Циклы
//Задания для самостоятельной работы 1

//Задание 1. Вывести на экран прямоугольник с заданными сторонами заданным символом.

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	cout << "Enter the number for character between 0 to 255 - ";
//	int s;
//	cin >> s;
//	char star = s; // 15 is sun
//	cout << star << endl;
//	cout << "Enter the number for length - ";
//	int l = 8;
//	cin >> l;
//	cout << "Enter the number for height - ";
//	int h = 10;
//	cin >> h;
//	
//	for (int y = 0; y < h; y++)
//	{
//		for (int x = 0; x < l; x++)
//		{
//			cout << star;
//		}
//		cout << endl;
//	}
//}

//Задание 2. Вывести на экран пустой прямоугольник с заданными размерами заданным символом заданного цвета.

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	
//	int color = 6; // 
//	cout << "Enter the number for color - ";
//	cin >> color;
//	cout << "Enter the number for character between 0 to 255 - ";
//	int s;
//	cin >> s;
//	char star = s; // 15 is sun
//	cout << star << endl;
//	cout << "Enter the number for length - ";
//	int l = 8;
//	cin >> l;
//	cout << "Enter the number for height - ";
//	int h = 10;
//	cin >> h;
//	for (int y = 0; y < h; y++)
//	{
//		for (int x = 0; x < l; x++)
//		{
//			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//			SetConsoleTextAttribute(h, color);
//			cout << star;
//		}
//		cout << endl;
//	}
//}

// Тема: Массивы одномерные
// Задания для самостоятельной работы 2

//Задание 1. Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев. Пользователь вводит прибыль
//фирмы за каждый месяц

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	const int size = 6;
//	float month[size] = {2013.23, 1543.46, 1789.37, 8076.18, 9765.57, 12345};
//
//	float total = 0;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter your earning for " << i + 1 << " month.\n";
//		cin >> month[i];
//		cout << " UAH\n";
//		total += month[i];
//	}
//	cout << "Total icome for 6 months - " << total << " UAH\n";
//}

//Задание 2. Написать программу, которая выводит одномерный массив в обратном порядке.

//#include <iostream>
//using namespace std;
//int main()
//{
//	const int size = 10;
//	int num[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	for ( int i = 0; i < size; i++)
//	{
//		cout << num[size - 1 - i] << endl;
//	}
//}

//Задание 3. Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, необходимо
//вычислить периметр пятиугольника(периметр — сумма всех сторон).

//#include <iostream>
//using namespace std;
//int main()
//{
//	const int size = 5;
//	float side[size];
//	float sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter the metres of side " << i + 1 << " of pentagon. \n";
//		cin >> side[i];
//		sum += side[i];
//	}
//	cout << "Perimetr of pentagon - " << sum << " metres";
//}
	
//Задание 4. Пользователь вводит прибыль фирмы за год (12 месяцев). Необходимо определить месяц, в котором
// прибыль была максимальна и месяц, в котором прибыль была минимальна.

#include <iostream>
using namespace std;
int main()
{
	const int size = 12;
	float month[size];
	float max = 0;
	float min = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter income of month " << i + 1 << "\n";
		cin >> month[i];
		if (month[i] > max && i == 0) min = month[i], max = month[i];
		else if (month[i] > max) max = month[i];
		else if (month[i] < min) min = month[i];

	}
	cout << "Minimum incame of - " << min << "UAH\n";
	cout << "Maximum income of - " << max << "UAH\n";
}


