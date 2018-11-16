#include <iostream>
using namespace std;
int main()
{
	int primeInteger; //value to read from keyboard
	bool isPrime;//indicator for 
	cin.exceptions(istream::failbit | istream::badbit);//exception if input is not integer

				while(true)
				{
					try		
						{
							cout<<"enter number"<<endl;
							cin>>primeInteger;
							cout<<"Prime integers below number "<<primeInteger<<" are shown"<<endl;
							for (int i=2; i<primeInteger; i++)
								{
									isPrime=true; //assume current i is prime integer
									for (int k=2; k<i; k++)
									{
														
									if (i % k ==0) 
										{
											isPrime=false;//if expression i % k ==0 is true at least once, indicator switches to "no" prime integer
											break;
										};
											
									};
										if(isPrime) cout<<"prime_integer\t"<<i<<endl;//print only prime integer based on indicator status
									};
									cout<<endl;
									
						}
					catch (exception e)
					{
										cin.clear();//clean stream from the wrong input
										cin.ignore();
										cout<<e.what()<<"\nNew number? Press \"y\" and to continue or any key for exit. Confirm with Enter"<<endl;
										char c;
										cin>>c;
										if (!cin || c!='y')
										break;
									
					};
				
				};
				
	cout<<"end of work"<<endl;		
	char k;//just hold on the screen
	cin>>k;
	return 0;
}