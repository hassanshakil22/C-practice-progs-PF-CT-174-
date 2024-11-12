
// //1. Write a program that reads the numbers from user and store these numbers into an array of 
// // same size. Find and display the sum of all positive numbers and calculate the average.

// int sizeOfArr;
// printf("write the quantity of numbers you want to input ! : ");
// scanf("%d",&sizeOfArr);
// int arr[sizeOfArr];
// for (int i = 0 ; i < sizeOfArr ; i++)
// {
//     printf("Enter the %d number ",i+1);
//     scanf("%d",&arr[i]);
// }
// float sum = 0;
// float positiveCount = 0;
// for (int i = 0; i < sizeOfArr ; i++)
// {
//     if (arr[i]>0)
//     {
//         sum = sum + arr[i];
//         positiveCount++;
//     }
        
// }
// printf("Sum of all positive numbers is %.0f \n and average is %.2f",sum,sum/positiveCount);

// ----------------------------------------------------------


// int rows, cols;
// printf("Enter the rows and columns of matrix \nRows :");
// scanf("%d",&rows);
// printf("Cols :");
// scanf("%d",&cols);

// int matrix[rows][cols];
// printf("\nEnter elements of matrix:\n");
//  for(int row=0; row<rows; row++) // Storing elements of the matrix
//  {
//     for(int col=0; col<cols; col++){
//         printf("Enter element [%d][%d]: ",row+1,col+1);
//         scanf("%d", &matrix[row][col]);
//     }
// }

//  printf("\nEntered Matrix: \n"); // Displaying the matrix[][]
//  for(int row = 0; row < rows; row++){
//     for(int col=0; col < cols ; col++){
//         printf("%d ", matrix[row][col]);
        
//     }
//     printf("\n");
// }
// int zeros=0;
//  for(int row=0; row<rows; row++) // checking zeros 
//  {
//     for(int col=0; col<cols; col++){
//         if (matrix[row][col]==0)
//         {
//             zeros ++;
//         }
        
//     }
// }
// int isSparseMatrix= zeros >= (rows*cols/2);
// if (isSparseMatrix)
// {
//     printf("\nEntered matrix is a Sparse matrix ");
// }
// else{
//     printf("\nEntered matrix is not a Sparse matrix ");
// }
// ----------------------------------------------------------
// #include<string.h>
// char firstName[15];
// char lastName[15];
// char fullName[30];
// printf("Enter your first name : ");
// scanf("%s",&firstName);
// printf("Enter your last name : ");
// scanf("%s",&lastName);
// fullName[0] = '\0'; 
// strcat(fullName, firstName);
// strcat(fullName, " ");
// strcat(fullName, lastName);
// printf("%s",fullName);

// --------------------------------------------------------

// int rows, cols;
// do{
// printf("Enter the rows and columns of a Square matrix \nRows :");
// scanf("%d",&rows);
// printf("Cols :");
// scanf("%d",&cols);
// if (rows!=cols)
// {
//     printf("Please enter a square matrix \n");
// }

// }while (rows!=cols);
// int matrix[rows][cols];
// printf("\nEnter elements of matrix:\n");
//  for(int row=0; row<rows; row++) // Storing elements of the matrix
//  {
//     for(int col=0; col<cols; col++)
//     {
//         printf("Enter element [%d][%d]: ",row+1,col+1);
//         scanf("%d", &matrix[row][col]);
//     }
// }
//  printf("\nEntered Matrix: \n"); // Displaying the matrix[][]
//  for(int row = 0; row < rows; row++){
//     for(int col=0; col < cols ; col++){
//         printf("%d ", matrix[row][col]);       
//     }
//     printf("\n");
// }
// int transpose[rows][cols];
//  for(int row = 0; row < rows; row++){
//     for(int col=0; col < cols ; col++){
//         transpose[row][col] = matrix[col][row]; //transposing putting rows in place of cols
//     }
//     printf("\n");
// }
//  printf("Transpose Matrix: \n"); // Displaying the matrix[][]
//  for(int row = 0; row < rows; row++){
//     for(int col=0; col < cols ; col++){
//         printf("%d ", transpose[row][col]);       
//     }
//     printf("\n");
// }
// int isTranpose=1;
// for (int row = 0; row < rows ; row++)
// {
//     for (int col = 0; col < cols; col++)
//     {
//         if (matrix[row][col] != transpose[row][col])
//         {
//             isTranpose = 0;
//         }
//     }
// }
// if (isTranpose)
// {
//     printf("Given matrix is Symmetric");
// }
// else
// {
//         printf("Given matrix is ASymmetric");
// }



#include<stdio.h>
void main(){

int rows, cols;
printf("Enter the rows and columns of matrix \nRows :");
scanf("%d",&rows);
printf("Cols :");
scanf("%d",&cols);

int matrix[rows][cols];
printf("\nEnter elements of matrix:\n");
 for(int row=0; row<rows; row++) // Storing elements of the matrix
 {
    for(int col=0; col<cols; col++){
        printf("Enter element [%d][%d]: ",row+1,col+1);
        scanf("%d", &matrix[row][col]);
    }
}
int maxElement = matrix[0][0];
 printf("\nEntered Matrix: \n"); // Displaying the matrix[][]
 for(int row = 0; row < rows; row++){
    for(int col=0; col < cols ; col++){
        printf("%d ", matrix[row][col]);
        if (matrix[row][col]>maxElement)
        {
            maxElement = matrix[row][col];
        }
    }
    printf("\n");
}
printf("Max element of matrix : %d ",maxElement);


}