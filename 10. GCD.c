#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1/i==0 && n2/i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}


//using recursion
//#include<stdio.h>
//int gcd(int a, int b)
//{
//if (b != 0)
//return gcd(b, a % b);
//else
//return a;
//}
//
//int main()
//{
//int a, b;
//printf("Enter two numbers: ");
//scanf("%d %d", &a, &b);
//
//printf("\nGCD of %d and %d is %d\n", a, b, gcd(a,b));
//return 0;
//}
