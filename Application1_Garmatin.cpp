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
	while (spros == true){                                 //�������� �� �����		
		cout << "������� ����� �� 1 �� 3999: \n";
		cin >> num;
		if (cin.good()){
			spros = false;
		}
		else {
			cout << "�� ����� �����. ������� �����. ��������� ����: \n";
		}
		cin.clear();
		_flushall();
	}                                                     
	spros = true;
	if (num < 1 || num > 3999){                   //�������� �� ������ �����
		cout << "�� ����� ������� ������� ��� ��������� �����.\n" << "��������� ����: \n";
		goto prov;
	}


	cout << "���� ����� � ������� ������: ";
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

	cout << "\n������� ��������� ���� �����? (Y-��)";
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
