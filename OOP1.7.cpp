#include<iostream>
#include"Bankomat.h"
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Bankomat b;
	cout << " Введіть кількість грошей , яку ви хочете завантажити " << endl;
	b.Read();
	b.Display();
	Money m;
	m.Init();
	cout << " Введіть кількість грошей , яку ви хочете зняти " << endl;
	m.Read();
	b.getMoney(m);
	cout << " Кількість грошей , яка залишилась " << endl;
	b.Display();
	cout << " Завантаження 50 по 500 " << endl;
	m.Init(50);//завантажили довільну суму
	b.insertMoney(m);// метод завантаження
	b.Display();//вивід

 }