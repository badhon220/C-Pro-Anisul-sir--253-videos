#include <stdio.h>
#include <string.h>

int main() {
char name1[10];
char total[50];
char name2[10];
char fname[10];
char name[10];
printf("Enter your 1at name :");
gets(name1);
printf("Enter 2nd name ");
gets(name2);
printf("Enter your forter name");
gets(fname);
printf("Enter mother Name");
gets(name);
strcat(total,name1);
strcat(total,name2);
strcat(total,fname);
puts(total);

    return 0;
}