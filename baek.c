#include <stdio.h>

int main(void) {
    
    char s[5][16];
    char* p;
    int n[5] = {0,0,0,0,0};

    for(int i=0; i<5; i++){
        scanf("%s",&s[i]);
    }

    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if (s[j][i] == '\0') n[j] = 1;
            if (n[j] == 1) continue;
            printf("%c", s[j][i]);
        }
    }

    return 0;
}