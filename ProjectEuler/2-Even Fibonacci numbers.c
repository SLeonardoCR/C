#include <stdio.h>

int main() 
{
	long int n0, n1, next, suma;
	int i;
	n0 = 0; n1 = 1; next = 0;
	i=1;
	
	while(i!=0)
	{
		printf("%ld ", next);
		next = n0 + n1;
		n0 = n1;
		n1 = next;
		if(next%2!=0)
			suma = suma + next;
		if(next > 4000000)
			i = 0;
	}

	printf("\nSum of even numbers: %ld", suma);
	
}
