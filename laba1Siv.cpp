#include "stdafx.h" //
#include "iostream" //����������� ���������
#include "string"	//

using namespace std;

int roman(int, int, string rom);

int main()
{
	setlocale(LC_ALL, "Russian"); //����� ������� ���� ��� ���������

	int numb;
	char vop;
	bool let = true;

vvod: //����� 
	while (let == true)
	{
		cout << "������� ����� �� 1 �� 3999: "; //���� �����, ������� ����� ��������� � �������
		cin >> numb;
		if (cin.good())
		{
			let = false;
		}
		else
		{
			cout << "\n\n<<< ������� ����� ������ �����. >>>\n\n";
		}
		cin.clear();
		_flushall();
	}
	let = true;

	if ((numb < 1) || (numb > 3999)) // �������� �� ������o� ����� 
	{
		cout << "\n\n<<< ������� ����� � ��������� �� 1 �� 3999! >>>\n\n";
		goto vvod;
	}

	cout << "\n���� ����� � ������� ������: ";
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

pov: //�����
	cout << "\n\n======================================================\n\n";
	cout << "��� �� ���������� �������� � ���������� ������� \"Y\".\n" << "��� �� ����� ������� \"N\".\n\n";
	cout << "======================================================\n\n";
	cout << "��� �����: ";
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
			cout << "<<< ���������� ������������! >>>\n";
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
