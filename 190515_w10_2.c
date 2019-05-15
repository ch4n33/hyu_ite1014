#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(float var1, float var2){
    if(var1 > var2){
        return 1;
    }
    if(var2 > var1){
        return  -1;
    }
    return 0;
}

int main() {
    srand(time(NULL));
    int r = rand()%100 +1;
    printf("**answer : %d\n",r);
    int input;
    while(1){
        printf("Number=?\n");
        scanf("%d", &input);
        if(compare(input, r) == 1){
            printf("Smaller than %d.\n", input);

        }
        if(compare(input, r) == -1){
            printf("Largeer than %d.\n", input);
        }
        if(compare(input, r) == 0){
            printf("Yes, right.");
            break;
        }


    }

}

