#include <stdio.h>

int pibo(int n){
    if(n < 3){
        return 1;
    }
    return pibo(n - 1) + pibo(n - 2);

}


int main() {
    int n;
    scanf("%d", &n);
    int p = pibo(n);
    printf("%d", p);
}