#include<stdio.h>
void  coffeeMakingTime(char coffee,char cupsize);
void main(){

// // 
// char input;
// printf("Are you sure to delete [Y/y] / [N/n] ? \n");
// scanf(" %c",&input);

// switch (input)
// {
// case 'Y':
// printf("Deleted successfully") ;
// break;
// case 'y':
// printf("Deleted successfully") ;
// break;
// case 'N':
// printf("Delete cancelled") ;
// break;
// case 'n':
// printf("Delete cancelled") ;
// break;

// default:
// printf("choose the right option");
//     break;
// }

// 2. Write a program to control a coffee machine. Allow the user to input the type of coffee as B 
// for Black and W for White. Ask the user if the cup size is double and if the coffee is manual. 
// The following table details the time chart for the machine for each coffee type. Display a 
// statement for each step. If the coffee size is double, increase the baking time by 50 percent. 
// Use functions to display instructions to the user and to compute the coffee time.

// char coffee;
// printf("which type of Coffee do you want? \n B for Black \n W for White \n -->");
// scanf(" %c",&coffee);

// char cupSize;
// printf("What size of cup do you want? \n D for Double \n S for Single \n --> ");
// scanf(" %c",&cupSize);

// coffeeMakingTime(coffee,cupSize);

float ntsMarks;
float fscMarks;
printf("Enter your NTS marks /100 ");
scanf("%f",&ntsMarks);
printf("Enter your fsc marks /1100 ");
scanf("%f",&fscMarks);
float fsc =( fscMarks/1100)*100;
float nts =( ntsMarks/100)*100;


printf("your nts %%age %.2f%% \n",nts);
printf("your fsc %%age %.2f%% \n",fsc);

if (fsc>=70 )
{
    if (nts>70)
    {
        printf("You're eligible for all the fields of Oxford and MIT (IT/Electronics/Telecommunication/Chemical/Computer) ");
    }
    else if (nts>60)
    {
        printf("You're eligible for all the fields of  MIT (IT/Chemical/Computer) and these fields of Oxford (Electronics/Telecommunication)");
    }
else if (nts>50)
{
        printf("You're eligible for all the fields of  MIT (IT/Chemical/Computer) and these fields of Oxford (Telecommunication)");

}
else
{
    printf("you have low marks in NTS :(");
}

}
else if (fsc>=60 && nts>=50)
{
        printf("You're eligible for all the fields of  MIT (IT/Chemical/Computer) and no fields of Oxford ");
}
else if (fsc>=50 && nts>=50)
{
        printf("You're eligible for these the fields of  MIT (Chemical/Computer) and no fields of Oxford ");
}
else if (fsc>=40 && nts>=50)
{
        printf("You're eligible for these the fields of  MIT (Computer) and no fields of Oxford ");
}

else
{
    printf("Low marks in fsc and nts");
}









}

// void coffeeMakingTime(char coffee,char cupsize){
// int putWater ;
// int sugar ;
// int mixWell  ;
// int addCoffee  ;
// int addMilk ;

// switch (coffee)
// {
// case 'W':
// putWater =  15 ;
// sugar =  15 ;
// mixWell =  20 ;
// addCoffee =  2 ;
// addMilk=  4 ;
// switch (cupsize)
// {
// case 'S':
// printf("the time to make your small white coffee is %d mins" ,putWater+sugar+mixWell+addCoffee+addMilk);

// break;
// case 'D':
//  putWater =  putWater + (putWater*0.5) ;
// sugar =  sugar + (sugar*0.5) ;
// mixWell =  mixWell + (mixWell*0.5);
// addCoffee =  addCoffee+ (addCoffee*0.5);
// addMilk=  addMilk + (addMilk*0.5);
// printf("the time to make your double black coffee is %d mins" ,putWater+sugar+mixWell+addCoffee+addMilk);

// break;

// default:
// printf("Enter a valid Cupsize");
//     break;
// }

//     break;
// case 'B':
// putWater =  20 ;
// sugar =  20 ;
// mixWell =  25 ;
// addCoffee =  15 ;
// addMilk=  0 ;
// switch (cupsize)
// {
// case 'S':
// printf("the time to make your small black coffee is %d mins" ,putWater+sugar+mixWell+addCoffee+addMilk);
// break;
// case 'D':
// putWater =  putWater + (putWater*0.5) ;
// sugar =  sugar + (sugar*0.5) ;
// mixWell =  mixWell + (mixWell*0.5);
// addCoffee =  addCoffee+ (addCoffee*0.5);
// addMilk=  addMilk + (addMilk*0.5); 
// printf("the time to make your double black coffee is %d mins" ,putWater+sugar+mixWell+addCoffee+addMilk);

// break;

// default:
// printf("Enter a valid Cupsize");
//     break;
// }
//     break;


// default:
// printf("Invalid Coffee Type");
//     break;
// }


// }