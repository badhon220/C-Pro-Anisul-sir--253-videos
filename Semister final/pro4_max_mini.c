#include <stdio.h>

int main() {
int num[]={10, 20, 7, 40, 50};
int max = num[0];
int min = num[0];
for(int i=1;i<5;i++){
    if (max<num[i]){
        max= num[i];
    }
    if (min>num[i]){
        min= num[i];
    }
   
}
printf(" min num %d",min);
printf(" max num %d",max);
    return 0;
}