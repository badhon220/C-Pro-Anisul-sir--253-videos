#include <stdio.h>

int main() {
int numbers[] ={20,40,50,60,5,-4};
int searchNumber = 5;
int found=0;
for(int index =0; index<6;index++){
    if(numbers[index] == searchNumber){
 found=1;
 break;
    }
}
if( found ==1)
printf("Found it");
else
printf("Not foud");
    return 0;
}