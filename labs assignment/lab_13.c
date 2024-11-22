#include<stdio.h>
char* encryption(char *input);
char* decryption(char *input) ;
int main (){

char input[100];
char output[100];
FILE *file;
printf("Enter the text you want to print! : ");
fgets(input,sizeof(input),stdin);
file = fopen("abc.txt","w");
fprintf(file,"%s",encryption(input));
fclose(file);
file = fopen("abc.txt","r");
 while (fgets(output, sizeof(output), file) != NULL) {

printf("%s",decryption(input));
    }

return 0;
}
char* encryption(char *input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = (input[i] - 'a' + 3) % 26 + 'a';  // Wrap around after 'z'
        }
        
        else if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = (input[i] - 'A' + 3) % 26 + 'A';  // Wrap around after 'Z'
        }
    }

    return input; 

}
char* decryption(char *input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = (input[i] - 'a' - 3 + 26) % 26 + 'a';  
        }
        else if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = (input[i] - 'A' - 3 + 26) % 26 + 'A'; 
        }
    }

    return input; 
}