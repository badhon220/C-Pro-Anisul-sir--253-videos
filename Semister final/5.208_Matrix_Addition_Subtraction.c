#include <stdio.h>

int main() {
 int arr1[3][3] ,arr2[3][3],sum[3][3];
 printf("Enter A ARRY \n");
 for(int row =0;row<3;row++){
    for(int cul =0;cul<3;cul++){
        printf("Enter number at [%d] [%d]=",row,cul);
        scanf("%d",&arr1[row][cul]);
    }
 }
 printf("A ARRAY IS \n");
  for(int row =0;row<3;row++){
    for(int cul =0;cul<3;cul++){
        printf("%d ",arr1[row][cul]);
    }
    printf("\n");
 }
 printf("Enter B ARRY \n");
 for(int row =0;row<3;row++){
    for(int cul =0;cul<3;cul++){
        printf("Enter number at [%d] [%d]=",row,cul);
        scanf("%d",&arr2[row][cul]);
    }
 }
 printf("B ARRAY IS\n ");
  for(int row =0;row<3;row++){
    for(int cul =0;cul<3;cul++){
        printf("%d ",arr2[row][cul]);
    }
    printf("\n");
 }
 for(int row=0;row<3;row++){
    for(int cul=0;cul<3;cul++){
        sum[row][cul]=arr1[row][cul]+arr2[row][cul];
    }
 }
 printf("Sum arry is \n");
  for(int row =0;row<3;row++){
    for(int cul =0;cul<3;cul++){
        printf("%d ",sum[row][cul]);
    }
    printf("\n");
 }

 
    return 0;
}