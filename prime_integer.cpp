// isdigit example (C++)
#include <iostream>       // std::cout
#include <locale>         // std::locale, std::isdigit
#include <sstream>        // std::stringstream

#include "Sieve_Eratosthen.h"

using namespace std;

int main(){
	

while(true)
	{

				//int y;
				string k; //строка для ввода
				cout<<"Enter integer\t";
				cin>>k;
				const char *m=k.c_str();//указатель на строку						
				char* p;
				long converted = strtol(m, &p, 10);//конвертация строки в long int
					if (*p) //если строка не конвертится в int, то выполняется код ниже
						{ 
							cout<<"Wrong input\n";
							cout<<"\nNew number? Press \"y\" and to continue or any key for exit. Confirm with Enter"<<endl;
							char c;
							cin>>c;
							if (!cin || c!='y')
							break;
						}
					else { //если строка конвертится в int, то выполняется код ниже
						//y=(int)converted;
						Sieve_Eratosthen * MyInteger = new Sieve_Eratosthen((int)converted); //переделал конструктор на (const int& value), было без const. Заработало, но я не могу понять в чем такая критическая разница. Без const не компилируется даж
						if(MyInteger->getStatus()) MyInteger->printPrimaryValue(); //собственно вычисление простых чисел
						else cout<<"Wrong input\n";
						delete MyInteger;
						}

	};
	int t;//просто задержать на экране
	std::cin>>t;
    return 0;
}