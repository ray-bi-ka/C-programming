//qn 22
//WAP to input decimal number and display its digits in words with reverse order

#include <stdio.h>
#include <conio.h>
int main()
{

long int num;
int digit;
printf("Enter Number: ");
scanf("%ld", &num);
printf("\nThe reverse of digit in word is: \n");
while(num)
{ digit=num%10;
num = num/10;
switch(digit)
{
    case 0: printf("Zero "); break;
    case 1: printf("One "); break;
    case 2: printf("Two "); break;
    case 3: printf("Three "); break;
    case 4: printf("Four "); break;
    case 5: printf("Five "); break;
    case 6: printf("Six "); break;
    case 7: printf("Seven "); break;
    case 8: printf("Eight "); break;
    case 9: printf("Nine "); break;
}
}
return 0;
}