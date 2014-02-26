// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int roman(int, int, string rim); 

int main()
{
	char quest;
	setlocale(LC_ALL, "Russian");
	int num;
	bool spros = true;
prov:
	while (spros == true){                                 //Проверка на букву		
		cout << "Введите число от 1 до 3999: \n";
		cin >> num;
		if (cin.good()){
			spros = false;
		}
		else {
			cout << "Вы ввели букву. Введите число. Повторите ввод: \n";
		}
		cin.clear();
		_flushall();
	}                                                     
	spros = true;
	if (num < 1 || num > 3999){                   //Проверка на размер числа
		cout << "Вы ввели слишком большое или маленькое число.\n" << "Повторите ввод: \n";
		goto prov;
	}


	cout << "Ваше число в римских цифрах: ";
	num = roman(num, 1000, "M"); 
	num = roman(num, 900, "CM");
	num = roman(num, 500, "D");
	num = roman(num, 400, "CD");
	num = roman(num, 100, "C");
	num = roman(num, 90, "XC");
	num = roman(num, 50, "L");
	num = roman(num, 40, "XL");
	num = roman(num, 10, "X");
	num = roman(num, 9, "IX");
	num = roman(num, 5, "V");
	num = roman(num, 4, "IV");
	num = roman(num, 1, "I");

	cout << "\nЖелаете повторить ввод чисел? (Y-да)";
	cin >> quest;
	if (quest == 'Y' || quest == 'y'){
		system("cls");
		goto prov;
	}
	return(0);
}

int roman(int i, int j, string rim)
{
	while (i >= j)
	{  
	 cout << rim;
		i = i - j;
	}
	return(i);
}
