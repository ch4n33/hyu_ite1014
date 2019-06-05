#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void page1(){
    int* ptr;
    printf("[Page1]\n");
    int arr_2d[3][4] = {
            {10,20,30,40,},
            {50,60,70,80},
            {90,100,110,120}};

    printf("with []operator\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ",arr_2d[i][j]);
        }
        printf("\n");
    }

    printf("with *operator\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ", *(*(arr_2d +i)+ j));
        }
        printf("\n");
    }

}
int my_strlen(const char *s) {
    char* first = s;
    while( *first++ );
    return (int)(first -s-1);
}
int my_strcmp(const char *i, const char *j){
    int cmp=0;
    char* a = i;
    char* b = j;
    while (!(cmp = (*(a++) - *(b++))))
    if(cmp<0) cmp = -1;
    if(cmp >0) cmp = 1;
    return cmp;
}
void my_strcpy(char *i, const char *j){

    char* a = i;
    char* b = j;
    while(*a||*b){
        *a++ = *b++;
    }

}
void my_strcat(char *i, const char *j){
    char* a = i;
    char* b = j;
    while( *++a);
    while( *b){
        *a++ = *b++;
    }
}

void page2(){

    printf("[Page2]\n");

    printf("%d", my_strlen("asdf"));
    printf("[strlen function]\n");

    printf("%d", my_strcmp("13","22"));
    printf("[strcmp function]\n");


    char a[20] = "11111";
    my_strcpy(a,"22222");
    printf("%s",a);
    printf("[strcpy function]\n");
    char b[20] = "11111";
    my_strcat(b,"22222");

    printf("%s",b);
    printf("[strcat function]\n");

}


int baseball (int input, int n[3]){
    int strike = 0;
    int ball = 0;
    int m[3];
    m[0] = input/100;
    m[1] = (input%100)/10;
    m[2] = input%10;
    if(m[0] == m[1]|| m[1]==m[2]|| m[0]==m[2]) return -1;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == j){
                if(n[i] == m[j]) strike++;

            }
            else{
                if(n[i] == m[j]) ball++;
            }
        }

    }


    return strike*10 + ball;
}
void page3(){
    printf("[Page3]\n");

    srand(time(NULL));
    int n[3];
    while(1){
        int num = rand()%865+123;

        n[0] = num/100;
        n[1] = (num%100)/10;
        n[2] = num%10;
        if(n[0] == n[1]|| n[1]==n[2]|| n[0]==n[2]) continue;
        else break;

    }

    printf("answer : %d%d%d\n", n[0],n[1],n[2]);
    int input;
    while(1) {
        printf("=======================\n");
        printf("Guess number(123~987)\n");
        scanf("%d", &input);
        int a;
        a = baseball(input,n);
        if(a < 0){
            printf("wrong input. please input again.\n");
            continue;
        }
        int strike = a/10;
        int ball = a%10;

        if(strike == 3){
            printf("you've won! the secret number is %d!\nplay again?(y/n)\n", input);
            char i[2];
            getchar();
            scanf("%c", i);
            if(i == "y") {
                page3();
            }
            else {
                break;
            }
        }
        else printf("%d strike, %d ball\n", strike, ball );

    }

}

void page4(){
    printf("[Page4] : flow chart\n");

}
void page5(){
    printf("[Page5]\n");
    int input;
    scanf("%d", &input);
    for (int j = 1; j <= input; ++j) {

        int k = j;
        int clap =0;

        while (k){
            int num =  k%10;
            k = k /10;
            if (num == 6 || num == 3 || num == 9) {
                clap++;
            }
        }
        if (clap == 0) {
            printf("%d",j);
        }

        while (clap--) {
            printf("clap ");
        }
        printf("\n");
    }
}
int main() {
    page1();
    page2();
    page3();
    page4();
    page5();

}