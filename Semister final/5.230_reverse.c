#include <stdio.h>
#include <string.h>

int main() {
char name[50];
int i=0;
int count=0;
printf("Enter somthing: ");
gets(name);
while(name[i]!='\0'){
    count++;
    i++;
}
for(int j=count-1;j>=0;j--){
    printf("%c",name[j]);
}

    return 0;
}