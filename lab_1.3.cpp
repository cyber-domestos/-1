/*
Данная программа
1. Определяет размер структурного объекта в байтах
2. Записывает предложенную структуру в виде битовой структуры и определяет ее размер в байтах
*/
#include <iostream>
#include <cstdlib>
using namespace std;
struct datetime
{
	unsigned short Year;
	unsigned short Month;
	unsigned short Day;
	unsigned short Hour;
	unsigned short Minute;
	unsigned short Second;
};
struct bit_datetime
{
	//11бит (0-2047)
	unsigned short Year:11;
	//4бит (0-15)
	unsigned short Month:4;
	//5бит (0-31)
	unsigned short Day:5;
	//аналогично
	unsigned short Hour:5;
	//6бит (0-63)
	unsigned short Minute:6;
	//аналогично
	unsigned short Second:6;
};
int main()
{
	//меняем кодировку консоли
	system("chcp 1251>nul");
	datetime x;
	bit_datetime y;
	cout<<"Размер структуры: "<<sizeof(x)<<" байт"<<endl;
	cout<<"Её битной версии: "<<sizeof(y)<<" байт"<<endl;
	//задержка консоли
	system("pause>nul");
	return 0;
}
/*
Битная структурв весит в 2 раза меньше
Отсюда можно сделать вывод, что битные структуры экономять память компьютера
*/