#include <stdio.h>

int main() {
    int numbers[]={36,35,37};
    int length_arry = sizeof(numbers)/sizeof(numbers[0]);
    if( length_arry<2){
        printf("Enter more than 2");
    }
    int first, second;
    if( numbers[0]>numbers[1]){
        first=numbers[0];
        second= numbers[1];
    }
    else {
        second = numbers[0];
        first = numbers[1];
    }
    for(int index = 2; index< length_arry;index++){
        if( numbers[index]>first){
            second= first;
            first = numbers[index];
        }
        else if( numbers[index]>second && numbers[index]!=first){
            second = numbers[index];
        }
    }
    printf(" 1st  is %d and 2nd is %d",first,second);
    return 0;
}