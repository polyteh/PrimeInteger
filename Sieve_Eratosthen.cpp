#include <iostream>
#include <string>         // std::string
#include "Sieve_Eratosthen.h"

using namespace std;

Sieve_Eratosthen::Sieve_Eratosthen(int& value)
{
	if(value>=1) //работаем только с целыми числами больше 1
	{
		isCorrectValue=true;
		currentValue=value;
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
			 int *intArray = new int[currentValue + 1]; 
			 for (int i = 0; i <= currentValue; i++)
			 intArray[i] = i;

			 
			 //Цикл для перебора множителей
			 for (int i = 2; i * i <= currentValue; i++)
				{
			   //цикл для вычеркивания кратных
				 if(intArray[i]) //если ноль, то пропускаем шаг, так как число уже встречалось на предыдущих шагах
				 for (int j = 2*i; j <= currentValue; j += i)
				 intArray[j] = 0;
				}
			 
			 //вывод всех не нулей в массиве, т.е. простых чисел
			 for (int i = 2; i < currentValue; i++)
				{
					if (intArray[i])
					{
					cout <<"\t"<< intArray[i] <<endl; 
					} 
				} 
			 
			 delete[] intArray; 
			cout << "Print ended" << endl<<endl;
		}	
}