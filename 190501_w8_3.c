#include <stdio.h>
#include <math.h>
#include <sys/dtrace.h>

int find(int a){
    float b = a;
    float c = sqrt(b);
    a = c;
    if (c == a){
        return 1;
    }
    else{
        return 0;
    }

}
int main() {
    int num;
    printf("-------------------------\n");
    printf("Please input number : ");
    scanf("%d", &num);

    if(find(num)){
        int rt = sqrt(num);
        printf("\n%d is the square number of %d",num ,rt);

    }
    else{
        printf("\n%d is not square number.", num);
    }
    printf("\n\nTry again? [yes(any number), no(0)]");
    int a;
    scanf("%d",&a);
    if(a){
        main();
    }
    return 0;
}