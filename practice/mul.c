#include <stdio.h>

int main()
{
    int mat1[10][10], mat2[10][10], row1, cul1, row2, cul2, i, j, k, sum = 0,mul[10][10];
    printf("Enter 1st mtrix row");
    scanf("%d", &row1);
    printf("Enter 1st mtrix cul");
    scanf("%d", &cul1);
    printf("Enter 2nd mtrix row");
    scanf("%d", &row2);
    printf("Enter 2nd mtrix cul");
    scanf("%d", &cul2);
    while (cul1 != row2)
    {
        printf("Enter aganin");
        printf("Enter 1st mtrix row");
        scanf("%d", &row1);
        printf("Enter 1st mtrix cul");
        scanf("%d", &cul1);
        printf("Enter 2nd mtrix row");
        scanf("%d", &row2);
        printf("Enter 2nd mtrix cul");
        scanf("%d", &cul2);
    }
    for(i=0;i<row1;i++){
        for(j=0;j<cul1;j++){
            printf("Enter [%d][%d] no value: ",i,j);
            scanf("%d",&mat1[i][j]);

        }
    }
    for(i=0;i<row2;i++){
        for(j=0;j<cul2;j++){
            printf("Enter [%d][%d] no value: ",i,j);
            scanf("%d",&mat2[i][j]);

        }
    }
    //multiplication
for(i=0;i<row1;i++){
    for(j=0;j<cul2;j++){
        for(k=0;k<cul1;k++){
            sum=sum+mat1[i][k]*mat2[k][j];
            
        }
        mul[i][j]=sum;
        sum=0;

    }

}
    return 0;
}