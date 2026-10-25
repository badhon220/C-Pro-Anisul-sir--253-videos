#include <stdio.h>

int main() {
int matrixA[3][2],matrixB[3][2],sum[3][2];
// Input for matrix A
for(int row= 0;row<3;row++){
     for(int cul =0;cul<2;cul++){
        printf("Enter element FOR A Matrix [%d][%d]: ",row,cul);
        scanf("%d",&matrixA[row][cul]);
     }  
}
// Input for matrix B
for(int row= 0;row<3;row++){
     for(int cul =0;cul<2;cul++){
        printf("Enter element FOR B Matrix [%d][%d]: ",row,cul);
        scanf("%d",&matrixB[row][cul]);
     }  
}
// Calculate sum
for(int row=0;row<3; row++){
    for(int cul=0;cul<2;cul++){
        sum[row][cul]= matrixA[row][cul]+matrixB[row][cul];
    }
}
for(int  row=0;row<3;row++){
    for(int cul=0;cul<2;cul++){
        printf(" %d ",sum[row][cul]);
    }
    printf("\n");
}
    return 0;
}