#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, b, a=1,c=0;
    
    scanf("%d %d", &n,&b);

    while(a<n){
        a*=b;
        c++;
    }
    int size = c;
    int arr[size];
    c-=1;
    printf("c=%d\n",c);

    for(int i=c,j=0; i>=0; i--,j++){
        int d=1;
        for(int k=0; k<i; k++){
            d*=b;
        }
        arr[j] = n/d;
        printf("arr%d=%d\n",j,arr[j]);
        n = n%d;
    }
    printf("size = %d\n",sizeof(arr)/sizeof(int));

    for(int i=0; i<size; i++){
        printf("%d",arr[i]);
    }

    

    return 0;
}