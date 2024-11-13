#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CountFrequency(int arr[], int size);

int main() {
    int sizeOfArr = 10;

    srand(time(0));
    int array1[sizeOfArr];
    for (int i = 0; i < sizeOfArr; i++) {
        array1[i] = rand() % 11; // numbers between 0 and 10
    }
    printf("Array is: [ ");
    for (int i = 0; i < sizeOfArr; i++) {
        printf("%d ", array1[i]);
    }
    printf("]\n");
    CountFrequency(array1, sizeOfArr);

    return 0;
}

void CountFrequency(int arr[], int size) {
    int counted[size]; 
    int count, alreadyCounted;
    for (int i = 0; i < size; i++) {
        counted[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        if (counted[i] == 1) continue;

        count = 1;  // Initialize count for each unique element
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1;  // Mark as counted
            }
        }


        // Print unique element and its count
        printf("The value %d has frequency: %d\n", arr[i], count);
    }
}
