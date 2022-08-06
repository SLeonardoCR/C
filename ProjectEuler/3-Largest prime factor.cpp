#include <stdio.h>
#include <math.h>

float PrimeNumber;

int Prime(float Number)
{
	int x;
	
	if(Number == 2) 
		return 1;
	if(Number == 4)
		return 0;
	for(x=2; x<Number/2; x++) 
    	if (fmod(Number, x)==0)
    		return 0;
  	return 1;
}

void PrimeFactor(double *number, float n) 
{
	printf("\nPrimeFactor()");
	if(fmod(*number, n)==0) //if the residue of the number by another given equal 0 then it is a prime factor
		*number = *number / n;
	else
		PrimeNumber++;
}

int main() 
{
	
	int LargestPrime, ctrl=0;
	double number;
	number = 600851475143, LargestPrime=0;
	PrimeNumber = 2;
	
	while(true)
	{
		while(ctrl!=1)//We get the next prime number 
			if(Prime(PrimeNumber)==1)
				ctrl=1;
			else
				PrimeNumber++;
				
		ctrl=0;
		printf("\nnumber=%f\t%f", PrimeNumber, number);
		
		PrimeFactor(&number, PrimeNumber);
		LargestPrime=PrimeNumber;
		if(number==1)
			break;
	}	
	printf("\n\tLargest Prime Factor: %d", LargestPrime);
}

