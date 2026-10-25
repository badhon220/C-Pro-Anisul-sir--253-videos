#include <stdio.h>

int main() {
int matrix[3][2];
for(int row= 0;row<3;row++){
     for(int cul =0;cul<2;cul++){
        printf("Enter element [%d][%d]: ",row,cul);
        scanf("%d",&matrix[row][cul]);
     }  
}
for(int row= 0;row<3;row++){
     for(int cul =0;cul<2;cul++){
        printf(" %d ",matrix[row][cul]);
     }
     printf("\n");
}
    return 0;
}