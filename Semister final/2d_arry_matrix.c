#include <stdio.h>

int main() {
int matrix[3][2]= {
    {2,3},
    {4,5},
    {6,7}
};
for(int row= 0;row<3;row++){
     for(int cul =0;cul<2;cul++){
        printf(" %d ",matrix[row][cul]);
     }
     printf("\n");
}
    return 0;
}