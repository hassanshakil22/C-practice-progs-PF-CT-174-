#include<stdio.h>

// struct Employee
// {
//     int id;
//     char name[30];
//     int salary;
//     char dept[100];
// };
struct Number
{
int areaCode;
int exchange;
int number;
};
void main(){
// struct Employee emp1 ;
// printf("Enter the id : ") ;
// scanf("%d",&emp1.id);   
// printf("Enter the name : ") ;
// scanf("%s",&emp1.name);
// printf("Enter the Salary : ") ;
// scanf("%d",&emp1.salary);
// printf("Enter the dept : ") ;
// scanf("%s",&emp1.dept);
// printf("Name: %s \nId : %d \nSalary : %d \ndept : %s ",emp1.name,emp1.id,emp1.salary,emp1.dept);
struct Number myNumber={212,767,8900} ;
struct Number yourNumber;
printf("Enter area code:");
scanf("%d",&yourNumber.areaCode);
printf("Enter Exchange :");
scanf("%d",&yourNumber.exchange);
printf("Enter number :");
scanf("%d",&yourNumber.number);

printf("My number is : (%d) %d-%d \n",myNumber.areaCode,myNumber.exchange,myNumber.number);
printf("your number is : (%d) %d-%d",yourNumber.areaCode,yourNumber.exchange,yourNumber.number);


}