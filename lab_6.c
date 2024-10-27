#include <stdio.h>
void main(){


// // Q1
// int num;
// printf("Enter a positive number : ");
// scanf("%d",&num);
// long long int factorial=1 ;
// if (num>=0)
// {
    
//     for (int i = num ; i > 0; i--)
//     {
//         factorial=factorial*i;
//     }
//     printf("\nfactorial of %d is %lld  ",num,factorial);
// }
// else
// {
//     printf("Enter a positive number ");
// }
// --------------------------------------------------------------------------------------------------------------------------------

// // Q2


// // WHILE LOOP 
// int x=1,y=1,nextNum;
// int series[20]={x,y};
// nextNum=x+y;
// int j = 2;
// while (nextNum<1000)
// {
// series[j]=nextNum;
// j++;
//     x=y;
//     y=nextNum;
// nextNum=x+y;
// }
// printf("Series is : { ");
// int sumOf3=0;
// int sumOf5=0;
// int sumOf7=0;
// int i = 0;
// while ( i < j)
// {
//     printf("%d , ",series[i]);
//     if (series[i] % 3 == 0 )
//     {
//     sumOf3 = sumOf3 + series[i];
//     }
//     if (series[i] % 7 == 0 )
//     {
//     sumOf7 = sumOf7 + series[i];
//     }
//     if (series[i] % 5 == 0 )
//     {
//     sumOf5 = sumOf5 + series[i];
//     }
    
//  i++;
// }


// printf("} \n");
// printf("Sum of numbers divisible by 3 are %d \n" , sumOf3);
// printf("Sum of numbers divisible by 5 are %d \n" , sumOf5);
// printf("Sum of numbers divisible by 7 are %d \n" , sumOf7);


// // --------------------------------------------------------------------------------
// // For LOOP 
// int x=1,y=1,nextNum;
// int series[20]={x,y};
// nextNum=x+y;
// int j = 2;
// for ( j  ; nextNum < 1000 ; j++)
// {
// series[j]=nextNum;
//     x=y;
//     y=nextNum;
// nextNum=x+y;
// }

// printf("Series is : { ");
// int sumOf3=0;
// int sumOf5=0;
// int sumOf7=0;

// for (int  i = 0; i < j ; i++)
// {
//     printf("%d , ",series[i]);
//     if (series[i] % 3 == 0 )
//     {
//     sumOf3 = sumOf3 + series[i];
//     }
//     if (series[i] % 7 == 0 )
//     {
//     sumOf7 = sumOf7 + series[i];
//     }
//     if (series[i] % 5 == 0 )
//     {
//     sumOf5 = sumOf5 + series[i];
//     }
    

// }
// printf("} \n");
// printf("Sum of numbers divisible by 3 are %d \n" , sumOf3);
// printf("Sum of numbers divisible by 5 are %d \n" , sumOf5);
// printf("Sum of numbers divisible by 7 are %d \n" , sumOf7);




// q3


// int input;
// printf("Enter a five digit number : ");
// scanf(" %d" , &input);
// int sumOfDigs= 0;
// int isPrime;
// int actualnum = input;
// int actualnum2 = input;
// int reversed=0;
// while (input>0)
// {
// sumOfDigs=sumOfDigs+(input%10);
//     input = input/10;
// }
// if (sumOfDigs%2==0)
// {
// printf("Sum of digits is even so checking for prime number \n");
//     for (int i = 2 ; i < input ; i++)
//     {
//         if (actualnum%i==0)
//         {
//             isPrime=0;
//         }
//         else{isPrime=1;}
        
//     }
//     if (isPrime)
//     {
//         printf("the sum of digits \"%d\" is a prime num ",sumOfDigs);
//     }
//     else
//     {
//         printf("the sum of digits \"%d\" is not a prime num",sumOfDigs);
        
//     }
// }
// else
// {
// printf("Sum of digits is odd so checking for palindrome number \n");
// while (actualnum>0)
// {
 
//     reversed=(reversed*10)+actualnum%10;
//     actualnum= actualnum/10;
    
// }
//     printf("%d , %d \n",actualnum2,reversed);
// if (actualnum2==reversed)
// {
//     printf("%d is a palindrome " ,actualnum2);
// }
// else{
//     printf("%d is not a palindrome " ,actualnum2);
// }


// }


// --------------------------------------------------------------------------------

// Q5



    double pi_approx = 0.0;      
    int terms_count = 0;        
    int precision_314 = 0;       
    int precision_3141 = 0;
    int precision_31415 = 0;
    int precision_314159 = 0;
    int max_terms = 1000;       

    while (!(precision_314 && precision_3141 && precision_31415 && precision_314159) && terms_count < max_terms) {
        double term = (terms_count % 2 == 0 ? 1.0 : -1.0) / (2 * terms_count + 1);
        pi_approx += term;
        terms_count++;

        double current_pi = 4 * pi_approx;

        if (terms_count <= 10 || terms_count % 100 == 0) { 
            printf("Term %d: pi approximates to %.15f\n", terms_count, current_pi);
        }
        
        if (!precision_314 && (int)(current_pi * 100) == 314) {
            precision_314 = 1;
            printf("Reached 3.14 after %d terms\n", terms_count);
        }
        if (!precision_3141 && (int)(current_pi * 1000) == 3141) {
            precision_3141 = 1;
            printf("Reached 3.141 after %d terms\n", terms_count);
        }
        if (!precision_31415 && (int)(current_pi * 10000) == 31415) {
            precision_31415 = 1;
            printf("Reached 3.1415 after %d terms\n", terms_count);
        }
        if (!precision_314159 && (int)(current_pi * 100000) == 314159) {
            precision_314159 = 1;
            printf("Reached 3.14159 after %d terms\n", terms_count);
        }
    }

    printf("Final approximation after %d terms: is %.15f\n", terms_count, 4 * pi_approx);
    }
