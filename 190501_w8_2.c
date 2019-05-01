#include <stdio.h>

int main() {
    int a,b,c;
    printf("A + B - C = ?\nInput A : ");
    scanf("%d", &a);
    printf("Input B : ");
    scanf("%d", &b);
    printf("Input C : ");
    scanf("%d", &c);
    int d = a + b - c ;
    printf("%d + %d - %d = %d",a,b,c,d);

    return 0;
}