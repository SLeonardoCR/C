#include <stdio.h>

int main()
{
	int i, suma;
	suma=0;
	for (i=0; i<1000; i++)
	{
		if(i%3==0)
			suma = suma + i;
		else
		{
			if(i%5==0)
				suma = suma + i;
		}	
	}

	printf("%d ", suma);
}
