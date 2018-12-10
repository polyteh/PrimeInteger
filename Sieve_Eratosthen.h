#include <iostream>
#pragma once

class Sieve_Eratosthen
{
	private:
	bool isCorrectValue;
	int currentValue;
	
	public:
	Sieve_Eratosthen(const int& value);
	void printPrimaryValue();
	bool getStatus();
	
};

