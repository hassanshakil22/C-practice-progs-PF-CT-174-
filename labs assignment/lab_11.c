#include <stdio.h>

// void swaped(int *aPtr, int *bPtr, int *cPtr);
int main(){

    // long int value1=200000;
    // long int value2;
    // long *lptr = &value1;
    // printf("%d\n",*lptr);
    // value2 = *lptr;
    // printf("%d\n",value2);
    // printf("%p\n",&value1);
    // printf("%p\n",lptr); //same as value1
// [---------------][---------------[---------------[---------------
// int a=2; 
// int b=5; 
// int c=3;
// printf("a : %d\n",a);
// printf("b : %d\n",b);
// printf("c : %d\n",c);
// int *aPtr=&a; 
// int *bPtr=&b; 
// int *cPtr=&c; 
//  swaped(aPtr,bPtr,cPtr);
// printf("a : %d\n",a);
// printf("b : %d\n",b);
// printf("c : %d\n",c);
// [---------------][---------------[---------------[---------------]

// int arr[]={2,4,6,8,1,3};
// int sum = 0;
// for (int i = 0; i < 6; i++)
// {
//     printf("%d\n",arr+i);
//     printf("%d\n",*(arr+i));
//     sum += *(arr+i);
//     printf("%d\n",sum);
// }
// printf("Sum : %d",sum);

// [---------------][---------------[---------------[---------------]
float array[20] = {
    23.5, 12.1, 34.6, 7.9, 56.3,
    45.0, 78.1, 89.2, 11.5, 90.3,
    67.8, 21.2, 49.4, 37.1, 82.6,
    19.7, 33.4, 14.8, 99.0, 100.1
};
float highest= *array;
int highest_index = 0;
for (int i = 1; i < 20; i++)
{
    if (*(array+i)>highest)
    {
        highest=*(array+i);
        highest_index = i ;
    }
}
float shighest= *array;
*(array+highest_index) = 0;
for (int i = 1; i < 20; i++)
{
    if (*(array+i)>shighest)
    {
        shighest=*(array+i);
    }
}
printf("Second highest value of array is %.2f",shighest);




    return 0 ;
}
// void swaped(int *aPtr, int *bPtr, int *cPtr){
// int temp;
// temp=*bPtr;
// *bPtr=*aPtr; // a ----> b
// *aPtr=*cPtr; // c ----> a
// *aPtr=temp;  // temp -> a

// }
