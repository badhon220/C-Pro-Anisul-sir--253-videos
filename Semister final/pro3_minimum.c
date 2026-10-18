#include <stdio.h>

int main() {
int num[]={10, 20, 7, 40, 50};
for(int i=1;i<5;i++){
    if(num[0]>num[i]){
        num[0]=num[i];
    }
}
printf(" min num %d",num[0]);
    return 0;
}