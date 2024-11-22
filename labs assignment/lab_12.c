#include<stdio.h>
#include<stdlib.h>

int main(){
// int n ,sum=0;
// printf("Enter the size of the array:");
// scanf("%d",&n);
// int *arr = (int*)malloc(n*sizeof(int)) ;
// printf("Enter valeus : ");
// for (int i = 0; i < n ; i++)
// {
//     printf("%d ) ",i+1);
//     scanf("%d",(arr+i));
// }
// for (int i = 0; i < n; i++)
// {
//     sum+= *(arr+i);
// }

// float average = (float)sum/n; 
// printf("Sum : %d , Average : %.2f",sum,average);
// free(arr);

    int n;
    printf("Enter the total 'N' number of characters in the user's name (First Name + Last Name): ");
    scanf("%d", &n);

 // Clear the input buffer properly
    getchar();

    char *dynamicArray = (char *)malloc((n + 1) * sizeof(char));  
    char fullname[100];
    printf("Enter your full name: ");
    fgets(fullname, sizeof(fullname), stdin);

    for (int i = 0; i < n+1 && fullname[i] != '\0'; i++) {
        *(dynamicArray+i) = fullname[i];
    }
    dynamicArray[n+1] = '\0';  // Ensure the string is null-terminated

    printf("Your name in the dynamic array: %s\n", dynamicArray);
    free(dynamicArray);

    return 0;
}

