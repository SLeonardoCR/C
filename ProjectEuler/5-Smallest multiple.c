//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <stdio.h>
#include <math.h>

int Divisible(int number)
{
	int i;
	
	for(i=1; i<=20; i++)
	{
		if(number%i==0)
		{
			continue;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int number, ctrl;
	number=1, ctrl=0;
	
	while(ctrl==0)
	{
		if(Divisible(number)==1)
			ctrl=1;	
		else
			number++;
	}
	
	printf("Smallest Positive Number Divisible by 1-20: %d\n", number);
}
