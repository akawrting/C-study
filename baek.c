#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int B;
    int count=0;
    char N[11];

    scanf("%d", &B);
    scanf("%s",N);
    int len = strlen(N);
    for(int i=len-1, j=0; i>=0; i--,j++){
        int power = 1;
        for (int k = 0; k < j; k++) {
            power *= B;
        }
        count += (N[i] - '0') * power;
        printf("%d\n",count);
    }

    printf("%d", count);

    return 0;
}