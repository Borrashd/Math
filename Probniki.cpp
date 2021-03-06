﻿/**
*\file
*\brief контейнер методов для работы с числами
*\author Владислав Дахин
*\version 1.0
*\example вычисление n-ого числа Фибоначчи
*/

/**

\mainpage Главная страница

Данный проект проводит различные операции на числами.

*/
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>

/**
*\brief Функция высчитывает кол-во чисел Фибоначчи до n
*\param[in] n Кол-во чисел Фибоначчи
*/

void Fibonacci(int n);

/**
*\brief Функция возвращает кол-во простых
чисел в диапазоне от a до b
*\param[in] a начало диапазона
*\param[in] b конец диапазона
*\return кол-во простых чисел
*/

int Count_Simple(int a, int b);

/**
*\brief Функция выводит квадраты чисел от a до b
*\param[in] a Начало диапазона
*\param[in] b Конец диапазона
*/

void Square(int a, int b);

/**
*\brief Функция считает среднее арифметическое чисел от a до b
*\param[in] a Начало диапазона
*\param[in] b Конец диапазона
*\return Среднее арифметическое
*/

float Mid(int a, int b);

/**
*\brief Функция высчитывает факториал определённого числа
*\param[in] c Число, факториал которого высчитывается
*\return Факториал числа c
*/

int Fuctorial(int c);

int main()
{
	int n;
	int a, b;
	int c;
	while (scanf_s("%d %d %d %d", &n, &a, &b, &c) != 4)
	{
		printf("Неверные значения. Попробуйте ещё раз: ");
		while (getchar() != '\n')
	}
	putchar('\n');
	printf("%d\n", Count_Simple(a, b));
	Square(a, b);
	printf("\n");
	Fibonacci(n);
	printf("\n%.3f", Mid(a, b));
	printf("\n%d", Fuctorial(c));
	return 0;
}

void Fibonacci(int n)
{
	int a = 1;
	int b = 1;
	int m = 1;
	printf("%d %d ", a, b);
	for (int i = 0; i < n - 2; i++)
	{
		printf("%d ", a + b);
		b = a;
		a = a + m;
		m = b;
	}
}

int Count_Simple(int a, int b)
{
	int count = 0;
	int m = 0;
	if (a > b)
	{
		for (; b <= a; b++)
		{
			for (int i = 2; i < b; i++)
			{
				if (b % i == 0)
					m = 1;
			}
			if (m == 0)
				count++;
			m = 0;
		}
	}
	else
	{
		for (; a <= b; a++)
		{
			for (int i = 2; i < a; i++)
			{
				if (a % i == 0)
					m = 1;
			}
			if (m == 0)
				count++;
			m = 0;
		}
	}
	return count;
}

void Square(int a, int b)
{
	for (; a <= b; a++)
	{
		printf("%d ", a * a);
	}
}

float Mid(int a, int b)
{
	float sum = 0;
	for (; a <= b; a++)
	{
		sum += a;
	}
	return sum / abs(b - a);
}

int Fuctorial(int c)
{
	if (c <= 1)
	{
		return 1;
	}
	else
	{
		return Fuctorial(c - 1) * c;
	}
}
