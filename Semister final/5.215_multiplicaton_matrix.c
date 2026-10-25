#include <stdio.h>

int main() {
int first[10][10],second[10][10],row1,row2,cul1,cul2,i,j;
printf("Enter row and cul for first matrix:");
scanf("%d %d",&row1,&cul1);
printf("Enter row and cul for second matrix:");
scanf("%d %d",&row2,&cul2);
while(cul1!=row2){
printf("Error! column of first matrix not equal to row of second.");
printf("Enter row and cul for first matrix:");
scanf("%d %d",&row1,&cul1);
printf("Enter row and cul for second matrix:");
scanf("%d %d",&row2,&cul2);
}
for(i =0;i<row1;i++){
    for( j=0;j<cul1;j++){
        printf("Enter element for first matrix [%d][%d]:",i,j);
        scanf("%d",&first[i][j]);
    }
}
for(i =0;i<row1;i++){
    for( j=0;j<cul1;j++){
        printf("Enter element for second matrix [%d][%d]:",i,j);
        scanf("%d",&second[i][j]);
    }
}
printf("First matrix is \n");
for(i =0;i<row1;i++){
    for( j=0;j<cul1;j++){
        printf("%d ",first[i][j]);
    }
    printf("\n");
}
printf("Second matrix is \n");
for(i =0;i<row2;i++){
    for(j=0;j<cul2;j++){
        printf("%d ",second[i][j]);
    }
    printf("\n");
}
    

    return 0;
}