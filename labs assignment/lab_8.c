#include <stdio.h>
#include <string.h>
#include <ctype.h>
// void highestFreqChecker(char string[100]);
// int main(){

// // 1
// char fname[15];
// char lname[15];
// char fullName[30];
// printf("Enter your first name : ");
// scanf("%s",&fname);
// printf("Enter your last name : ");
// scanf("%s",&lname);
// fullName[0] = '\0'; //makes sure that the fullname starts from the \0 so that our strcat knows that its empty 
// strcat(fullName,fname);
// strcat(fullName, " "); //adds a space in the last 
// strcat(fullName,lname);
// printf(fullName);
// printf("\n");
// int lengthOfname=0;
// char reversedFname[30];
// while (fullName[lengthOfname] != '\0')
// {
//     lengthOfname++;
// }
// // printf( "%d",lengthOfname);
// int start=0;
// int end=lengthOfname-1;
// while (start!=lengthOfname)
// {
//     reversedFname[start]=fullName[end]; 
//     start++;
//     end--;
// }
// printf(reversedFname);

// ------------------------------------------------------------------------------------------------------------------

// // char name[50];
// // printf("Enter your name : ");
// // fgets(name , sizeof(name), stdin);
// // char courses[5][50];
// // printf("Enter your courses offered in Fall 2021 \n");
// // for (int  i = 0; i < 5 ; i++)
// // {
// //     printf("Course %d : ",i+1);
// //     fgets(courses[i], sizeof(courses[i]), stdin);
// // }


// // highestFreqChecker(name);
// // for (int i = 0; i < 5 ; i++)
// // {
// //     highestFreqChecker(courses[i]);
// // }
// // ------------------------------------------------------------------------------------------------------------------

// // 3

// char std1input[100];
// char std2input[100];
// printf("Student 1 : Enter your string -->");
// fgets(std1input,sizeof(std1input),stdin);
// printf("Student 2 : Enter your string -->");
// fgets(std2input,sizeof(std2input),stdin);


// if (strlen(std1input) > strlen(std2input))
// {
//     printf("Student 1's string \"%s\" is greater",std1input);
// }
// else if (strlen(std2input) > strlen(std1input))
// {
//     printf("Student 2's string \"%s\" is greater",std2input);
// }
// else
// {
//     printf("Both student 1's string \"%s\" and student 2's string \"%s\" are of same length ",std1input,std2input);
// }







// }


int main ()
{
char a[11] = "hello world";
int i;
for(i = 0; i <= 9; i++)
{
a[i] = a[i + 1];
printf("%d \t %s \n", i, a);
}
printf("\n %d", a);
return 0; 
}
// void highestFreqChecker(char string[50]){

// int frequency[256]={0}; 
// // Count occurrences of each character
//     for (int i = 0; i < strlen(string); i++) {
//           if (isalpha(string[i])) {  // Check if the character is an alphabetic letter
//             frequency[(unsigned char)string[i]]++;
//         }
//     }

// int highestFreq= frequency[0];
// int highestFreqChar;
//     // Display the frequency of each character
//     for (int i = 0; i < 256; i++) {
//         if (frequency[i] > highestFreq ) {
//             highestFreq=frequency[i];
//             highestFreqChar = i;
//         }
//     }
//     printf("In %s Character \"%c\" frequency is highest of (%d) :\n",string,highestFreqChar,highestFreq);
// }
// ------------------------------------------------------------------------------------------------------------------
