// Lab100.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;
void information(char num, char massive_dv[]);
void numbers();
void numbers()
{
	ifstream input;
	input.open("Input.txt");

	if (!input.is_open())
	{
		std::cout << "Ошибка открытия файла." << "\n";
	}
	else
	{
		std::cout << "Файл открыт!" << "\n" << "\n";
	}

	std::cout << "Считываем число." << "\n";
	char massive_dv[] = "";
	char num;
	while (input.get(num))
	{
		std::cout << "Цифра " << num << "\n";
		information(num, massive_dv);
	}

}

void information(char num,char massive_dv[])
{
	char n0 = '0';
	char n1 = '1';
	char n2 = '2';
	char n3 = '3';
	char n4 = '4';
	char n5 = '5';
	char n6 = '6';
	char n7 = '7';

	char N0[] = "000";
	char N1[] = "001";
	char N2[] = "010";
	char N3[] = "011";
	char N4[] = "100";
	char N5[] = "101";
	char N6[] = "110";
	char N7[] = "111";

	if (num == n0)
	{
		strcpy_s(massive_dv, strlen(N0) + 1, N0);
	}
	else if (num == n1)
	{
		strcpy_s(massive_dv, strlen(N1) + 1, N1);
	}
	else if (num == n2)
	{
		strcpy_s(massive_dv, strlen(N2) + 1, N2);
	}
	else if (num == n3)
	{
		strcpy_s(massive_dv, strlen(N3) + 1, N3);
	}
	else if (num == n4)
	{
		strcpy_s(massive_dv, strlen(N4) + 1, N4);
	}
	else if (num == n5)
	{
		strcpy_s(massive_dv, strlen(N5) + 1, N5);
	}
	else if (num == n6)
	{
		strcpy_s(massive_dv, strlen(N6) + 1, N6);
	}
	else if (num == n7)
	{
		strcpy_s(massive_dv, strlen(N7) + 1, N7);
	}	
	std::cout << "В двоичном варианте" << massive_dv << "\n";
}

int main()
{
	setlocale(LC_ALL, "RU");
	pointer:
	std::cout << "Считать число из файла?" << "\n";
	short choice;
	std::cout << "1. Да" << "\n" << "2. Нет" << "\n";

	std::cin >> choice; 
	if (choice == 1)
	{
		numbers();
	}
	else if (choice == 2)
	{
		std::cout << "Конец работы." << "\n";
		return 0;
	}
	if ((choice > 2) && (choice < 1))
	{
		std::cout << "Ошибка, выберите еще раз." << "\n";
		goto pointer;
	}
}


