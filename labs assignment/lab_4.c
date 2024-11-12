#include <stdio.h>
#include <math.h>
void main(){


// printf("Enter a Character : ");
// char user_inp;
// scanf(" %c",&user_inp);
// int asciiValue = (int)user_inp;
// if (asciiValue>=65 && asciiValue<=90 )
// {
//     printf(" the entered character --> %c is a Capital Alphabet" , user_inp);
// }
// else if (asciiValue>=97 && asciiValue<=122)
// {
//     printf(" the entered character --> %c is a Small Alphabet", user_inp);
    
// }
// else if (asciiValue>=48 && asciiValue<=57 )
// {
//     printf(" the entered character --> %c is a digit", user_inp);
    
// }

// else
// {
//       printf(" the entered character --> %c is a Special Character", user_inp);

// }


// . An online shopping store is providing discounts on the items due to the Eid. If the cost of items
// is more than 1999 it will give a discount up to 50%. If the cost of shopping is 2000 to 4000, a 20%
// discount will be applied. If the cost of shopping is 4001 to 6000, a 30% discount will be applied.
// If it's more than 6000 then 50% discount will be applied to the cost of shopping. Print the actual
// amount, saved amount and the amount after discount.

// printf("Enter your total : ");
// float totalBill = 0;
// float discountPercentage= 0; 
// scanf(" %f",&totalBill);
// if (totalBill<2000)
// {
//     discountPercentage = 50 ;
// }
// else if (totalBill<=4000 && totalBill>=2000)
// {
//     discountPercentage = 20 ;

// }
// else if (totalBill<6000 && totalBill>4000)
// {
//     discountPercentage = 30 ;

// }
// else
// {
//     discountPercentage = 50 ;
    
// }
// float savedAmmount = (discountPercentage/100)*totalBill ;
// printf("Your total ammount was : %.2f Rs \n" , totalBill);
// printf("Your ammount after %.2f%% discount is : %.2f Rs\n" , discountPercentage, totalBill-savedAmmount  );
// printf("Congrats ! , You saved :  %.2f Rs\n" ,  savedAmmount  );


// --------------------------------------------------------------------------------------

// float a,b,c;
// printf("Enter values \na = ");
// scanf("%d",&a);
// printf("b = ");
// scanf("%d",&b);
// printf("c = ");
// scanf("%d",&c);

// float discriminant = (b * b) - (4 * a * c);
// if (discriminant < 0) {
//     // Handle case where the roots are imaginary
//     printf("The roots are imaginary.\n");
// } else {
//     float root1 = (-b + sqrt(discriminant)) / (2 * a);
//     float root2 = (-b - sqrt(discriminant)) / (2 * a);
//     printf("Root 1: %.2f\n", root1);
//     printf("Root 2: %.2f\n", root2);

// ------------------------------------------------------------------------

// int number;
// printf("Enter Any number : ");
// scanf(" %d",&number);

// int lastDigit= number%10;
// if (lastDigit!= 7 )
// {
// while (number!= 7 && number!= -7)
// {lastDigit= number%10;
//     lastDigit=lastDigit*2;
//     number=number/10;
//     printf("%d - %d \n",number,lastDigit);
//     number = number-lastDigit  ;

// }
    
//    printf("%d divisible by 7",number);

// }
// else
// {
//    printf("Already divisible by 7");
// }

// ------------------------------------------------------------------------
float totalCalories;
printf("Write total calories in your food in grams : \n");
scanf("%f",&totalCalories);
while (totalCalories<0)
{
printf("Please make sure that the calories quantity are in positive\n");
scanf("%f",&totalCalories);
}
float totalFat;
printf("Write total fat in your food in grams : \n");
scanf("%f",&totalFat);
while (totalFat<0)
{
printf("Please make sure that the Fats quantity are in positive \n");
scanf("%f",&totalFat);
}

float caloriesFromFat= 9*totalFat;
if (caloriesFromFat>totalCalories)
{
      printf("Error: calories from fat exceed total calories. Please re-enter values.\n");
}
else
{
float percentageOfCalories = (caloriesFromFat/totalCalories)*100;

if (percentageOfCalories<30)
{
    printf("the total calorie from fats is %.2f %% \n" ,percentageOfCalories);
    printf("Your diet is Low in Fat");
}
else
{
    printf("the total calorie from fats is %.2f %% \n" ,percentageOfCalories);
    printf("Your diet is adequate in Fat\n");
}    
}






}