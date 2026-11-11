#include <stdio.h>

int main() {
printf("Enter your name");
char name[50];
gets(name);
printf("Your details");
char det[20];
gets(det);
int len=0,i=0;

while(name[i] != '\0'){
len++;
i++;
}
for(int j=0;det[j]!='\0';j++){
    name[j+i]=det[j];
}
puts(name);

    return 0;
}