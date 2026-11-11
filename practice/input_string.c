#include <stdio.h>

int main() {
char name[30];
int i=0;
while(name[i]!='\n'){
    scanf("%s",name[i]);
    i++;
}
name[i]='\0';
for(i=0;name[i] != '\0';i++){
    printf("%s",name[i]);
}
    return 0;
}