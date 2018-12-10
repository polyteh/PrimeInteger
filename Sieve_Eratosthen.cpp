#include <iostream>
#include <string>         
#include <vector>  
#include "Sieve_Eratosthen.h"

using namespace std;

Sieve_Eratosthen::Sieve_Eratosthen(const int& value):currentValue(value)
{
	if(value>=1) //работаем только с целыми числами больше 1
	{
		isCorrectValue=true;
		//currentValue=value; инициализация поля ушла из конструктора
	}
	else isCorrectValue=false;
}
bool Sieve_Eratosthen::getStatus()
{
	return isCorrectValue; //получение статуса правильности обрабатываемого значения
}

void Sieve_Eratosthen::printPrimaryValue()
{
	if(isCorrectValue)
		{
			cout << "Primary integer bellow " <<currentValue<<" are shown"<<endl;	
			 //создали и заполнили массив целыми числами для решета
			 vector<int> intVector;
			 for (int i = 0; i <= currentValue; i++) intVector.push_back(i);


			 
			 //Цикл для перебора множителей
			 for (int i = 2; i * i <= currentValue; i++)
				{
			   //цикл для вычеркивания кратных
				 if(intVector[i]) //если ноль, то пропускаем шаг, так как число уже встречалось на предыдущих шагах
				 for (int j = 2*i; j <= currentValue; j += i)
				 intVector[j] = 0;
				}
			 
			 //вывод всех не нулей в массиве, т.е. простых чисел
			 for (int i = 2; i < currentValue; i++)
				{
					if (intVector[i])
					{
					cout <<"\t"<< intVector[i] <<endl; 
					} 
				} 
			 
 
			cout << "Print ended" << endl<<endl;
		}	
}