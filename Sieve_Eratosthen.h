#include <iostream>
//#ifndef Sieve_Eratosthen_H
//#define Sieve_Eratosthen_H

class Sieve_Eratosthen
{
	private:
	bool isCorrectValue;
	int currentValue;
	
	public:
	Sieve_Eratosthen(int& value);
	void printPrimaryValue();
	bool getStatus();
	
};

