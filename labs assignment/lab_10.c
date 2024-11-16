#include<stdio.h>

// struct Employee
// {
//     int id;
//     char name[30];
//     int salary;
//     char dept[100];
// };
// struct Number
// {
// int areaCode;
// int exchange;
// int number;
// };
// struct Course{
//     float gpa;
//     char courseName[30];
// };
// struct Address{
//     char streetAdress[50];
//     char city[10];
//     char state[10];
//     char zip[10];
// };
// struct StudentData{
//     float cgpa;
//     struct Course courses[6]; //6 courses per sem
//     struct Address address;
// };

struct ComplexNumber
{
    float real;
    float imaginary;
};
struct ComplexNumber addition(struct ComplexNumber c1, struct ComplexNumber c2);
struct ComplexNumber multiplication(struct ComplexNumber c1, struct ComplexNumber c2) ;
void writeComplex(struct ComplexNumber c) ;
void main(){
struct ComplexNumber comp1; 
struct ComplexNumber comp2;
printf("Enter a complex number : \n");
printf("Real part : ");
scanf("%f",&comp1.real);
printf("Imaginary part : ");
scanf("%f",&comp1.imaginary);
printf("Enter another complex number : \n");
printf("Real part : ");
scanf("%f",&comp2.real);
printf("Imaginary part : ");
scanf("%f",&comp2.imaginary);

  struct ComplexNumber sum = addition(comp1, comp2);
    printf("After addition, the complex number becomes: ");
    writeComplex(sum);

    struct ComplexNumber product = multiplication(comp1, comp2);
    printf("After multiplication, the complex number becomes: ");
    writeComplex(product);

}
void writeComplex(struct ComplexNumber c) {
        printf("%.0f + %.0fi\n", c.real, c.imaginary);
}

struct ComplexNumber addition(struct ComplexNumber c1, struct ComplexNumber c2) {
    struct ComplexNumber result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
struct ComplexNumber multiplication(struct ComplexNumber c1, struct ComplexNumber c2) {
    struct ComplexNumber result;
    result.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    result.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    return result;
}













// struct StudentData students[2];

// for (int i = 0; i < 2; i++)
// {   
// printf("Enter the Data for student %d \n",i+1);
// for (int j = 0; j < 2 ; j++)
// {    
// printf("Course %d Name : ",j+1);
// scanf("%s",&students[i].courses[j].courseName);
// printf("Enter Gpa in the respective course : ");
// scanf("%f",&students[i].courses[j].gpa);
// }
// }
// float student1Cgpa=0;
// float student2Cgpa=0;
// for (int j = 0; j < 2; j++) {
//   student1Cgpa  =student1Cgpa + students[0].courses[j].gpa;
//   student2Cgpa  = student2Cgpa + students[1].courses[j].gpa;
//     if (students[0].courses[j].gpa > students[1].courses[j].gpa) {
//         printf("Student 1 has a higher GPA of %.2f in %s\n",
//                students[0].courses[j].gpa, students[0].courses[j].courseName);
//     } else {
//         printf("Student 2 has a higher GPA of %.2f in %s\n",
//                students[1].courses[j].gpa, students[1].courses[j].courseName);
//     }
// }
// if (student1Cgpa/2>student2Cgpa/2)
// {
//     printf("Student 1's cgpa is greater %.2f",student1Cgpa/2);
// }
// else
// {
//         printf("Student 2's cgpa is greater %.2f",student2Cgpa/2);
// }

// }




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
// struct Number myNumber={212,767,8900} ;
// struct Number yourNumber;
// printf("Enter area code:");
// scanf("%d",&yourNumber.areaCode);
// printf("Enter Exchange :");
// scanf("%d",&yourNumber.exchange);
// printf("Enter number :");
// scanf("%d",&yourNumber.number);

// printf("My number is : (%d) %d-%d \n",myNumber.areaCode,myNumber.exchange,myNumber.number);
// printf("your number is : (%d) %d-%d",yourNumber.areaCode,yourNumber.exchange,yourNumber.number);




