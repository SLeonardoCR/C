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

int main()
{
	if(Prime(15)==1)
	{
		printf("pene");
	}
	
}
