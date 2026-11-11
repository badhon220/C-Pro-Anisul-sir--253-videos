#include <stdio.h>
#include <string.h>

int main() {
char name[10];
int i=0;
printf("Enter your name :");
gets(name);
while(name[i]!='\0'){
    i++;
}
char copy[10];
strcpy(copy,name);
puts(copy);
    return 0;
}