#include <stdio.h>

int main() {
int n, a[30];
printf("Enter number");
scanf("%d",&n);
a[0]=0;
a[1]=1;
for(int i=2;i<n;i++){
    a[i]=a[i-1]+a[i-2];}
    printf("\n");
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    
}
    return 0;
}