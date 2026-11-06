#include <stdio.h>

int main() {
int mat[3][3],sum_upper=0,sum_lower=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("Enter number at [%d] [%d]=",i,j);
        scanf("%d",&mat[i][j]);
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i<j){ 
            sum_upper=sum_upper+mat[i][j];
        }
        else if(i>j){
            sum_lower=sum_lower+mat[i][j];
        }
    }
}
printf("%d\n",sum_lower);
printf("%d",sum_upper);
    return 0;
}