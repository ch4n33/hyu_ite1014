#include <stdio.h>

void line(int n){
    int i = 1;
    for (;i<=n;i++){
        printf("%d",i);
    }
    printf("\n");
}
int main() {
    int input;
    scanf("%d",&input);
    for (int a = 1; a <= input; a++){
        line(a);
    }

    for (int a = input; a > 0; a--){
        line(a);
    }
}