//Program to check whether a number is a Harshad number or not (Niven number).
//Harshad Number is an integer that is divisible by the sum of its digits.

#include<stdio.h>
int main()
{
	printf("Enter the number:");
	int num;
	int temp;
	scanf("%d",&num);
	int sum = 0;
	temp = num;
	while(temp)
	{
		sum = temp % 10;
		temp = temp / 10;
	}
	int res = num % sum;
	if(res == 0)
		printf("Harshad Number");
	else
		printf("Not a Harshad Number");
	return 0;
}
