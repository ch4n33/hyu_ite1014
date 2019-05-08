#include <stdio.h>

int main() {
    int num;
    printf("Input dan\n");
    scanf("%d",&num);
    printf("**********%ddan**********\n");
    for (int n = 1;n<10;n++){
        printf("%d*%d=%d\n",num,n,num*n);
    }
    printf("************************");
    return 0;
}