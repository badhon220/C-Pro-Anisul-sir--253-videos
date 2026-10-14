#include <stdio.h>

int main() {
int num[5]; 
int sum=0;
float avg=0;
for(int i=0;i<5;i++){
    printf("number [%d] =",i);
    scanf("%d",&num[i]);
}
for(int i=0;i<5;i++){
    printf("%d ",num[i]);
sum = sum+ num[i];
}
avg = (float)sum/5;
printf("\nsum =%d \naverage is %.3f",sum,avg);



    return 0;
}