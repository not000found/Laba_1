#include "stdafx.h" //
#include "iostream" //Подключение библиотек
#include "string"	//

using namespace std;

int roman(int, int, string rom);

int main()
{
	setlocale(LC_ALL, "Russian"); //Задаём русский язык для программы

	int numb;
	char vop;
	bool let = true;

vvod: //Метка 
	while (let == true)
	{
		cout << "Введите число от 1 до 3999: "; //Ввод числа, которое хотим перевести в римское
		cin >> numb;
		if (cin.good())
		{
			let = false;
		}
		else
		{
			cout << "\n\n<<< Вводить нужно только цифры. >>>\n\n";
		}
		cin.clear();
		_flushall();
	}
	let = true;

	if ((numb < 1) || (numb > 3999)) // Проверка на вводимoе число 
	{
		cout << "\n\n<<< Введите число в диапазоне от 1 до 3999! >>>\n\n";
		goto vvod;
	}

	cout << "\nВаше число в римских цифрах: ";
	numb = roman(numb, 1000, "M");
	numb = roman(numb, 900, "CM");
	numb = roman(numb, 500, "D");
	numb = roman(numb, 400, "CD");
	numb = roman(numb, 100, "C");
	numb = roman(numb, 90, "XC");
	numb = roman(numb, 50, "L");
	numb = roman(numb, 40, "XL");
	numb = roman(numb, 10, "X");
	numb = roman(numb, 9, "IX");
	numb = roman(numb, 5, "V");
	numb = roman(numb, 4, "IV");
	numb = roman(numb, 1, "I");

pov: //Метка
	cout << "\n\n======================================================\n\n";
	cout << "Что бы продолжить работать с программой введите \"Y\".\n" << "Что бы выйти введите \"N\".\n\n";
	cout << "======================================================\n\n";
	cout << "Ваш выбор: ";
	cin >> vop;
	if ((vop != 'Y') || (vop != 'y') || (vop != 'N') || (vop != 'n'))
	{

		if (vop == 'Y' || vop == 'y')
		{
			system("cls");
			goto vvod;
		}
		if (vop == 'N' || vop == 'n')
		{
			return 0;
		}
		else
		{
			system("cls");
			cout << "<<< Прочитайте внимательней! >>>\n";
			goto pov;
		}
	}
}
	int roman(int i, int j, string rom)
	{
		while (i >= j)
		{
			cout << rom;
			i = i - j;
		}
		return(i);
	}
