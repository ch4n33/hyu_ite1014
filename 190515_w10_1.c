#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        int a;
        for (a = i; a < n; a++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (int b = -i+3; b < i; b++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    for(int c = -n+1; c<n;c++){
        printf("*");
    }

}