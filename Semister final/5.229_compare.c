 #include <stdio.h>
 #include <string.h>
 
 int main() {
 char name[50];
 char criminla[50];
 printf("Enter name");
 gets(name);
 printf("Enter criminl name");
 gets(criminla);
 int result = strcmp(name,criminla);
 if(result==0){
    printf("Same");
 }
 else if (result<0){
    printf(" Criminla large");
 }
else
printf("Name is large");
    return 0;
 }