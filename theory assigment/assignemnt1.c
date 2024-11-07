// #include <string.h>
// #include <stdio.h>
// #include <ctype.h>

// // struct Book
// // {
// //     char title[100];
// //     char author[50];
// //     int yearOfPub;
// // };

// // struct Library
// // {
// //     char name[100];
// //     struct Book books[5];    

// // };

// // struct Student
// // {
// // char name[50];
// // int score;
// // };

// struct Product
// {
//     int id;
//     char name[100];
//     float price;
//     int quantityInStock;

// };



// void main(){

// // struct Library library = {
// //     "City library",
// //     {{"David Copperfield","Charles Dickens",1849},{"Madame Bovary","Gustave Flaubert",1856}},

// // };
// // printf("%s\n",library.name);
// // for (int i = 0; i < 2; i++)
// // {
// // printf("author: %s , title %s , yop: %d \n",library.books[i].author,library.books[i].title,library.books[i].yearOfPub);
// // }

// // // ------------------
// // int lengthOfStudents = 5;
// // struct Student students[lengthOfStudents];
// // for (int i = 0; i < lengthOfStudents ; i++)
// // {
    
// //     printf("Enter the name of %d student : " ,i+1);
// //     scanf("%s",&students[i].name);
    
// //     printf("Enter the score of %d student : " ,i+1);
// //     scanf("%d",&students[i].score);
// // }

// // for (int i = 0; i < lengthOfStudents; i++)
// // {
// //     printf("student %d is : %s with score --> %d \n",i+1,students[i].name,students[i].score);
// // }
// // // uppercasing
// // for (int i = 0; i < lengthOfStudents; i++)
// // {
// //         printf("Lower cased name : %s ",students[i].name);
// //             for (int j = 0; students[i].name[j] != '\0' ; j++)
// //         {
// //             students[i].name[j]= toupper((unsigned char)students[i].name[j]);
// //         }
// //         printf("now becomes uppercase --> %s \n",students[i].name);     
// // }
// // // ---------------------
// // // printing highest score student

// // int highest= 0 ;
// // char highestScorer[50] ;

// // for (int i = 0; i < lengthOfStudents; i++)
// // {
// //     if (students[i].score>highest)
// //     {
// //         highest = students[i].score;
// //         strcpy(highestScorer,students[i].name);
// //     }
// // }
// // printf("\nHIGHEST SCORER IS --> %s with score of %d ",highestScorer,highest);

// int lengthOfProducts = 3 ;
// struct Product products[lengthOfProducts];

// for (int i = 0; i < lengthOfProducts; i++)
// {
//     printf("Enter the id of %d product : ",i+1);
//     scanf("%d",&products[i].id);
//     printf("Enter the name of %d product : ",i+1);
//     scanf("%s",&products[i].name);
//     printf("Enter the price of %d product : ",i+1);
//     scanf("%f",&products[i].price);
//     printf("Enter the stock quantity of %d product : ",i+1);
//     scanf("%d",&products[i].quantityInStock);
// }
// float productPrice= 0;
// float totalPrice = 0;
// for (int i = 0; i < lengthOfProducts ; i++)
// {
// productPrice = products[i].price*products[i].quantityInStock;
// printf("name : %s , Quantity : %d , price: %.2f , total : %.2f \n",products[i].name,products[i].quantityInStock,products[i].price,productPrice);
// totalPrice= totalPrice+productPrice;
// }
// printf("The total value of the inventory is %.3f ",totalPrice);


// float expensive= 0 ;
// char expensiveProduct[50] ;

// for (int i = 0; i < lengthOfProducts; i++)
// {
    
//     if (products[i].price > expensive )
//     {
//         expensive = products[i].price;
//         strcpy(expensiveProduct,products[i].name);
//     }
// }
// printf("\n MOST EXPENSIVE PRODUCT IN INVENTORY IS %s HAVING PRICE OF %.2f ",expensiveProduct,expensive);



// }

