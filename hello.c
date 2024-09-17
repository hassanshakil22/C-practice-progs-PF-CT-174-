#include <string.h> 
#include <stdio.h>
#include <math.h>

int main(){
    printf("enter your name:  ");
    char name [90];
scanf("%s", &name);
if(strcmp( name,"hassan")==0){
printf("hello master !");
}
else
{
    // printf("%d",sqrt(9));
printf("your name is --> %s",name);
}
    return 0;
}
