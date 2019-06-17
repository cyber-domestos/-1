//Данная программа выводить сведенья о автомобилях марки форд зарегестрированых до 2000 года
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct cars
{
	string model;
	string manufacturer;
	string type;
	int date_of_issue;
	struct date 
	{
		int day;
		int month;
		int year;
	} date_of_registration;
};
void show (cars str)
{
	cout<<"Марка автомобиля: "<<str.model<<endl;
	cout<<"Производитель; "<<str.manufacturer<<endl;
	cout<<"Тип: "<<str.type<<endl;
	cout<<"Год выпуска: "<<str.date_of_issue<<endl;
	cout<<"Дата регистрации: "<<str.date_of_registration.day<<"/"<<str.date_of_registration.month<<"/"<<str.date_of_registration.year<<endl;
	cout<<"**************************************************************************************************"<<endl;
}
int main ()
{
	//Смена кодировки консоли
	system("chcp 1251>nul");
	cars car[5];
	//Пройдет проверку
	car[0]={"Ford","Ford Motor Company","Седан",1997,{10,12,1998}};
	//Аналогично
	car[1]={"Ford","Ford Motor Company","Универсал",1986,{15,10,1990}};
	//С датой регистрации все хорошо, вот только это не Ford
	car[2]={"BMW","Bayerische Motoren Werke AG","Купе",2015,{15,10,2015}};
	//У этого Ford дата регистрации больше нужной
	car[3]={"Ford","Ford Motor Company","Внедорожник",2005,{19,03,2006}};
	//Слишком новенький и не Ford
	car[4]={"Dodge","FCA US PLS","Внедорожник",2009,{25,03,2009}};
	for (int i=0;i<5;++i)
	{
		if((car[i].model=="Ford")and(car[i].date_of_registration.year<2000))
		{
			show(car[i]);
		}
	}
	//Задержка консоли
	system("pause>nul");
	return 0;
}