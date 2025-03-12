#include <stdio.h>

int main(void){

    int a, b, v;
    int day;
    scanf("%d%d%d", &a, &b, &v);

    if((v%(a-b))==0){
        day=v/(a-b);
    }
    else day=v/(a-b)+1;

    printf("%d",day);

    return 0;

}