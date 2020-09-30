// An abundant number is a number for which the sum of its proper divisors is greater than the number itself.


#include<stdio.h>
int main()
{
	printf("Enter the number:");
	int i,num;
	int temp;
	scanf("%d",&num);
	int sum = 0;
	for(i = 1; i < num; i++)
	{
		if(num / i == 0)
		{
			sum = sum + i;
		}
	}
	if(num < sum)
		printf("Abundant Number");
	else
		printf("Not Abundant Number");
	return 0;
}
