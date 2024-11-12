#include <stdio.h>


int main(){

// int num1,num2,temp ;
// printf("give first number --> ");
// scanf("%d",&num1);
// printf("give second number --> ");
// scanf("%d",&num2);
// printf("your given numbers are : \n num1 ---> %d \n" ,num1  );
// printf("num2 ---> %d \n" ,num2);
// char userChoice;
// printf("do you want to swap numbers ? (y/n) \n\n");
// scanf(" %c", &userChoice);
// if (userChoice == 'y')
// {
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
// printf("your swapped numbers are : \nnum1 ---> %d \n" ,num1  );
// printf("num2 ---> %d" ,num2);
// }
// else
// {
// printf("your Unswapped numbers are : \n num1 ---> %d \n" ,num1  );
// printf("num2 ---> %d" ,num2);
// }

// // ---------------------------

// float salary,taxRate,payableTax,salarAfterTax;
// printf("please write your salary --> ");
// scanf("%f",&salary);
// printf("please mention the tax rate in your country  --> \n");
// scanf(" %f",&taxRate);
// taxRate= taxRate/100; // tax rate in %
// payableTax = salary*taxRate;
// salarAfterTax= salary-payableTax;
// printf("your tax is --> %f Rs\n " ,payableTax);
// printf("your salary after tax deduction is --> %f Rs " ,salarAfterTax);

// ---------------------------

int time  ;
printf("how much time did the car travelled for in hours? (choose betwen 1/5) : \n");
scanf(" %d" , &time);
while (time <1 || time>5)
{
printf("time should be greater 0 and less than 5 , try again \n\n");
printf("how much time did the car travelled for in hours? (choose betwen 1/5) : \n");
scanf(" %d" , &time);
}


int distance=0;
int TotalDistance=0;
    
    for (size_t i = 1 ; i <= time; i++)
    {
        printf("enter the distance travelled by the car in %d hour \n" , i);
        scanf(" %d" , &distance);
        TotalDistance=TotalDistance + distance;
        }
    printf ("total distance covered by the car --> %d \n" ,TotalDistance);
    printf("Average speed of the car throuhgout the covered distance is --> %d" , TotalDistance/time);

// // --------------------------
// int principleValue = 0;
// printf("this program calculates the rate of intrest in given ammount of time \n");
// printf("input value of the Principle which must be between 100 Rs. To 1,000,000 Rs --> ");
// scanf(" %d",&principleValue);
// if (principleValue<100 || principleValue>1000000)
// {
//     printf("principle value should be be between 100 Rs. To 1,000,000 Rs");
//     return 0 ;
// }
// float rateOfIntrest;
// printf("input rate of intrest which must be between 5%%. To 10%% --> ");
// scanf(" %f",&rateOfIntrest);
// if (rateOfIntrest<5 || rateOfIntrest>10)
// {
//     printf("rate of intrest should be between 5%%. To 10%% ");
//     return 0 ;
// }
// float timePeriod;
// printf("input Time Period which must be between 1 To 10 years --> ");
// scanf(" %f",&timePeriod);
// if (timePeriod<1 || timePeriod>10)
// {
//     printf("Time Period must be between 1 To 10 years ");    
//     return 0 ;
// }

// printf("your total intrest  during %.2f years is : ", timePeriod );
// printf("%.2f" ,(principleValue*(rateOfIntrest/100)) * timePeriod);







return 0;
}