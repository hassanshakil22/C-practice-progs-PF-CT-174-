#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Math.h>

// void CountFrequency(int arr[], int size);
// void recruitementPolicy(int testMarks,int experience);
// float volumeCall(float base, float height);
// void getData(float base, float height);

struct House
{
    int initialHouseCost;
    int annualFuelCose;
    float taxRate;
};
void dispPriceAfterTax(int iteration,int initCost,float finalPrice);
int main() {
    // int sizeOfArr = 10;

    // srand(time(0));
    // int array1[sizeOfArr];
    // for (int i = 0; i < sizeOfArr; i++) {
    //     array1[i] = rand() % 11; // numbers between 0 and 10
    // }
    // printf("Array is: [ ");
    // for (int i = 0; i < sizeOfArr; i++) {
    //     printf("%d ", array1[i]);
    // }
    // printf("]\n");
    // CountFrequency(array1, sizeOfArr);
// ------------------------------------------------------------------------------

// int testMarks;
// int experience;
// printf("Welcome to SalesFlow Recruitement program ! \n");
// printf("Please Enter your Test Marks : ");
// scanf("%d",&testMarks);
// printf("Please Enter your Experience in years : ");
// scanf("%d",&experience);
// recruitementPolicy(testMarks,experience);

// ------------------------------------------------------------------------------------------------

// float height;
// float base;
// printf("Enter the height : ");
// scanf("%f",&height);
// printf("Enter the base : ");
// scanf("%f",&base);
// getData(base,height);

// ------------------------------------------------------------------------------------------------

// float num;
// printf("Enter the number you want to round of : ");
// scanf(" %f",&num);
// float rounded = roundf(num * 100) / 100;
// printf(" the number %.4f is : %.2f ",num,rounded);
//     return 0;

// ------------------------------------------------------------------------------------------------
struct House houses[3] ={ 
{67000,2300, 0.025},
{62000,2500, 0.025},
{67000,1850, 0.020},
};
printf(" \t Initial cost \t Annual fuel cost \t Tax rate \n");
for (int i = 0; i < 3; i++)
{
printf("House %d : %d \t\t %d \t\t %.1f%% \n",i+1,houses[i].initialHouseCost,houses[i].annualFuelCose,(houses[i].taxRate*100));    
}
printf("\n");
float finalPrice;
for (int i = 0; i < 3 ; i++)
{
finalPrice = ((houses[i].initialHouseCost*houses[i].taxRate)*5)+(houses[i].annualFuelCose*5)+houses[i].initialHouseCost;
dispPriceAfterTax(i,houses[i].initialHouseCost,finalPrice) ;
    }

}
void dispPriceAfterTax(int iteration,int initCost,float finalPrice)
{
    printf("House %d with initial Cost of %d , after five years after including all the taxes and given expenditures becomes : %.2f \n",iteration+1,initCost,finalPrice);
}


// float volumeCall(float base, float height){
//  return base * base * height / 3 ;
// }
// void getData(float base, float height){
//  printf("the volume of the shape at height %.2f and base %.2f is %.2f ",height,base,volumeCall(base,height));
// }

// void recruitementPolicy(int testMarks,int experience){
// if (testMarks<50){ 
//     printf("Your marks is below the selection criteria");
// }
// else
// {
//     if (testMarks>=60 && experience >= 1)
//     {
//          if ( testMarks>=70 && experience >=2)
//                 {
//                     printf("Congrats ! , You are selected as a Associate Developer \n");
//                 }
//          else
//          {
//                     printf("Congrats ! , You are selected as a Assistant Developer \n");
//          }
                
//     }
//     else 
//     {
//         printf("Congrats ! , You are selected as a Trainee Engineer \n");            
//     }
// }
// }

// void CountFrequency(int arr[], int size) {
//     int counted[size]; 
//     int count, alreadyCounted;
//     for (int i = 0; i < size; i++) {
//         counted[i] = 0;
//     }
//     for (int i = 0; i < size; i++) {
//         if (counted[i] == 1) continue;

//         count = 1;  // Initialize count for each unique element
//         for (int j = i + 1; j < size; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 counted[j] = 1;  // writing 1 at the second iteration
//             }
//         }
//         printf("The value %d has frequency: %d\n", arr[i], count);
//     }
// }
