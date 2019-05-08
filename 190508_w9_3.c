#include <stdio.h>

int main() {
    int a,b,c;
    a=0;
    for (;a < 5; a++){
        b=c=0;
        for(;b<4-a;b++){
            printf(" ");
        }
        for (;c < 2*a + 1;c++){
            printf("*");
        }
        printf("\n");
    }
}
