#include <stdio.h>

void main(){
//     int number ;
//     printf("enter any number : ");
//     scanf("     %d",&number);
//     int factorial=0;
//     factorial=number;
// for (int i = number-1 ; i > 0 ; i--)

// {
//     number=number*i;
// }
// printf("%d",number);

// --------------------------


// int num1,num2,num3;
// printf("give first number : ");
// scanf("%d",&num1);
// printf("give second number : ");
// scanf("%d",&num2);
// printf("give third number : ");
// scanf("%d",&num3);

// if (num1>num2 && num1>num3)
// {
// printf("first number %d is the greatest ",num1);
// }
// else if (num2>num1 && num2>num3)
// {
// printf("second number %d is the greatest ",num2);
    
// }
// else
// {
// printf("third number %d is the greatest ",num3);
    
// }

// ------------------------------------------------



int num1 = 2;
int num2 = 6;




for (int i = num2-1 ;  i >= num1 ; i--)
{
num2=num2+ i;
}
printf("%d",num2);


// ----------

// Write a C program that calculates the sum of the first N natural numbers using a loop. For example, if N = 5, the output should 
// int n;
// printf("enter the value of n : ");
// scanf("%d",&n);
// int sum = 0 ;
// for (size_t i = 0; i <= n; i++)
// {
//    sum = sum + i  ;
// }
// printf("%d",sum);

// --------------------------------------

// int i = 1, j = 2, k = 3 , m = 2;

//    printf( "\n%d", k + m < j || 3 - j >= k );
//     printf( "\n%d", !( j - m ) );
 

// printf("Write your age : ");
// int age;
// scanf("%d",&age);
// if (age>54)
// {
//     printf("please pay $10.00.");
// }
// else if (age<55 && age>21)
// {
//     printf("please pay $15.00.");
// }
// else if (age<21 && age>12)
// {
//     printf("please pay $10.00.");
// }
// else if (age<13 && age>1)
// {
//     printf("please pay $5.00.");
// }
// else
// {
//     printf("please pay $0.00.");
// }
// --------------------------------------------------------------------------------
// int number;
// printf("Enter number : ");
// scanf("%d",&number);
// int reversed= 0;
// int lastdigit;
// while (number !=0)
// {
//     lastdigit= number%10;
//     reversed = (reversed*10)+lastdigit;
//     number=number/10;
// }
// printf("%d",reversed);
// -------------------------------------------------------------------------------------------------------------------
int year;
printf("\nEnter the year to check \n");
scanf(" %d",&year);

if (year % 4 == 0) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            printf("Leap Year");
        } else {
            printf("Not a leap year");
        }
    } else {
        printf("Leap Year");
    }
} else {
    printf("Not a leap year");
}



}
