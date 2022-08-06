//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.
#include <stdio.h>
#include <math.h>

int Palindrome(int num)
{
    int n = num;
    int rev = 0;
    
    while (n) //Turn the original number backwards
    {
        int r = n % 10; //"r" is equal to the last digit of "n"
        rev = rev * 10 + r;//append digit "r" to "rev"
        n = n / 10; //"n" is equal to "n" without the last digit
    }
    return (num == rev); //Compare if the original number is the same to the number backwards
}
 
int main(void)
{
    int n = 1001, exit=0, digits, i;
    float num1, num2;
    num1=0, num2=0;
    
    digits=3;
    for(i=0; i<digits; i++) //We stablish the top start number to both of variables based on the digits we want.
    {
    	num1=num1*10+9;
    	num2=num2*10+9;
	}
	
	i=num1; //Using variable "i" to save the original start top number
    
    while(exit==0)
    {
    	if(Palindrome(num1*num2)) //check if the product is a palindrome
    	{
    		printf("\nlargest palindrome product: %f\n\t %f*%f=%f", (num1*num2), num1, num2, (num1*num2));
    		exit=1;
		}
		else
		{
			if(num1==num2) //if both numbers are equal we "num1--" and stablish "num2" to the original top number
			{
				num1--;
				num2=i;
			}
			else 
			{
				num2--;
			}
		}
	}
}
