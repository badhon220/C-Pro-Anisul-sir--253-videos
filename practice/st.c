#include <stdio.h>

int main() {
int n,tem;
printf("Enter arry size");
scanf("%d",&n);
int number[n];
for(int i=0;i<n;i++){
    printf("Enter number");
    scanf("%d",&number[i]);
}
for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(number[j]>number[j+1]){
            tem=number[j];
            number[j]=number[j+1];
            number[j+1]=tem;

        }
    }
}
for(int i=0;i<n;i++){
    printf("%d\n",number[i]);
}
    return 0;
}