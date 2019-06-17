//Данная программа выводит свойства товаров у которых цена больше средней
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct product {
	string name;
	int amount;
	double price;
	string manufacturer;
	string date;
};
//Функция для вывода свойств товара в консоль
void show (product str)
{
	cout<<"Название товара: "<<str.name<<endl;
	cout<<"Количество: "<<str.amount<<endl;
	cout<<"Цена (грн.): "<<str.price<<endl;
	cout<<"Производитель: "<<str.manufacturer<<endl;
	cout<<"Дата поступления на склад: "<<str.date<<endl;
	cout<<"***************************************************************************************************************"<<endl;
}
int main()
{
	//Изменение кодировки консоли
	system("chcp 1251>nul");
	product product_list[5];
	//Что-бы вы не тратили время на ввод ;)
	product_list[0]={"Футболка AutomatiX",548,199.99,"? China Com.","30/05/2019"};
	product_list[1]={"Програматор для Power Stone",5,2789.99,"AutomatiX Ltd.","06/03/2019"};
	product_list[2]={"Кибер-имплант Power Stone",22,4999.99,"AutomatiX Ltd.","06/03/2019"};
	product_list[3]={"Смарт-Кондиционер Hell Furnace",168,2999.99,"Poly Tech Inc.","32/02/2077"};
	product_list[4]={"Кулон Дизайнера",9999,00.01,"IP TrenD Market","01/01/1999"};
	//Среднее значение | average=2197.99
	double average=(product_list[0].price+product_list[1].price+product_list[2].price+product_list[3].price+product_list[4].price)/5;
	for(int i=0;i<=5;i++)
	{
		if(product_list[i].price>average)
		{
			show(product_list[i]);
		}
	}
	//Задержка консоли
	system("pause>nul");
	return 0;
}