﻿//Тема: Циклы
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

#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	
	int color = 6; // 
	cout << "Enter the number for color - ";
	cin >> color;
	cout << "Enter the number for character between 0 to 255 - ";
	int s;
	cin >> s;
	char star = s; // 15 is sun
	cout << star << endl;
	cout << "Enter the number for length - ";
	int l = 8;
	cin >> l;
	cout << "Enter the number for height - ";
	int h = 10;
	cin >> h;

	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < l; x++)
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, color);
			cout << star;
		}
		cout << endl;
	}
}

// Тема: Массивы одномерные
// Задания для самостоятельной работы 2

//Задание 1. Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев.Пользователь вводит прибыль
//фирмы за каждый месяц.

//Задание 2. Написать программу, которая выводит одномерный массив в обратном порядке.

//Задание 3. Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, необходимо
//вычислить периметр пятиугольника(периметр — сумма всех сторон).
	
//Задание 4. Пользователь вводит прибыль фирмы за год (12 месяцев).Необходимо определить месяц, в котором
// прибыль была максимальна и месяц, в котором прибыль была минимальна.