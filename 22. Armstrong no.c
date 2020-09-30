//1634 = 1^4+6^4+3^4+4^4 = 1634


#include<stdio.h>
#include<math.h>

int main()
{
int number, temp, remainder, result = 0, n = 0 ;

printf("Enter an integer: ");
scanf("%d", &number);

temp = number;

// Finding the number of digits

while (temp != 0)
{
temp /= 10;
++n;
}

temp = number;

// Checking if the number is armstrong

while (temp != 0)
{
remainder = temp%10;
result += pow(remainder, n);
temp /= 10;
}1

if(result == number)
printf("%d is an Armstrong number\n", number);
else
printf("%d is not an Armstrong number\n", number);

return 0;
}





//for 3-digits
//#include <stdio.h>
//int main() {
//    int num, originalNum, remainder, result = 0;
//    printf("Enter a three-digit integer: ");
//    scanf("%d", &num);
//    originalNum = num;
//
//    while (originalNum != 0) {
//       // remainder contains the last digit
//        remainder = originalNum % 10;
//        
//       result += remainder * remainder * remainder;
//        
//       // removing last digit from the orignal number
//       originalNum /= 10;
//    }
//
//    if (result == num)
//        printf("%d is an Armstrong number.", num);
//    else
//        printf("%d is not an Armstrong number.", num);
//
//    return 0;
//}

