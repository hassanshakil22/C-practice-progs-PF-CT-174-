#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// void CountFrequency(int arr[], int size);
void recruitementPolicy(int testMarks,int experience);
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

int testMarks;
int experience;
printf("Welcome to SalesFlow Recruitement program ! \n");
printf("Please Enter your Test Marks : ");
scanf("%d",&testMarks);
printf("Please Enter your Experience in years : ");
scanf("%d",&experience);
recruitementPolicy(testMarks,experience);

    return 0;
}

void recruitementPolicy(int testMarks,int experience){
if (testMarks<50){ 
    printf("Your marks is below the selection criteria");
}
else
{
    if (testMarks>=60 && experience >= 1)
    {
         if ( testMarks>=70 && experience >=2)
                {
                    printf("Congrats ! , You are selected as a Associate Developer \n");
                }
         else
         {
                    printf("Congrats ! , You are selected as a Assistant Developer \n");
         }
                
    }
    else 
    {
        printf("Congrats ! , You are selected as a Trainee Engineer \n");            
    }
    
    
}





}

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
