#include <stdio.h>

int main(void)
{
    int n, b, c=1;
    
    scanf("%d %d", &n,&b);

    int b1=1;
    int n1 = n;
    while(n/b1 >= b){
        c++;
        b1*=b;
    }
    int size = c;
    char arr[size];
    c-=1;
    printf("c=%d\n",c);

    for(int i=c,j=0; i>=0; i--,j++){
        int d=1;

        for(int k=0; k<i; k++){
            d*=b;
        }
        if(n/d >= 10 && n/d <= 35){
            arr[j] = n/d +'A'-10;
        }
        else arr[j] = n/d;
        printf("arr%d=%d\n",j,arr[j]);
        n = n%d;
    }
    
    for(int i=0; i<size; i++){
        printf("%d",arr[i]);
    }

    

    return 0;
}