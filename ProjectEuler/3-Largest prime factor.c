#include <stdio.h>
#include <math.h>

float PrimeNumber;

float Prime()
{
	float x, ctrl;
	ctrl=0;
	if(PrimeNumber == 2) 
	{
		return PrimeNumber;
	}	
  	if (PrimeNumber == 4) 
	  	PrimeNumber++;
	while(ctrl==0)
	{
		printf("\nWhile");
		for(x=2; x<PrimeNumber/2; x++) 
		{
			printf("\n\tPrimeNumber=%f x=%f", PrimeNumber, x);
    		if (fmod(PrimeNumber, x)==0) 
    		{
    			printf("\n\tNo es Primo");
    			x=PrimeNumber;
			}	
  		}
  		if(x==PrimeNumber)
  			PrimeNumber++;
		else
			ctrl++;
	}
  	return PrimeNumber;
}

int main()
{
	int Num=1;
	
	PrimeNumber=2;
	for(PrimeNumber; PrimeNumber<15; PrimeNumber++)
		{
			PrimeNumber=Prime(PrimeNumber);
			printf("\nPrimeNumber=%f\n", PrimeNumber);
			Num=Num*PrimeNumber;
		}
	printf("\nNumero=%d", Num);
		
}
/*
	|  x  |  x  |  x  |
y   |
y   |
y   |
y   |
y   |
y   |
    
*/
