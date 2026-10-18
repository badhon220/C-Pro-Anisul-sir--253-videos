#include <stdio.h>

int main() {
int num[]={10, 20, 90, 40, 50};
for(int i=1;i<5;i++){
    if(num[0]<num[i]){
        num[0]=num[i];
    }
}
printf(" max num %d",num[0]);
    return 0;
}