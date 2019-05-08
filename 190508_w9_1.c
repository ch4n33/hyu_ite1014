#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count = 1;
int game(int r1){
    int guess;
    for(;count <=6;count++) {
        printf("Take a guess.\n");
        scanf("%d", &guess);
        if (guess == r1){
            return 1;
        }
        else if(count == 6){
            return 0;
        }
        else if(guess > r1){
            printf("Your guess is too high.\n");
        }
        else{
            printf("Your guess is too low.\n");
        }
    }
    return 0;
}

int main() {
    srand(time(NULL));

    int r1 = rand()%20 + 1;
    printf("**answer = %d\n",r1);


    printf("Hello, what is your name?\n");
    char name[20];
    scanf("%s", &name);

    printf("Well, %s, I am thinking of a number between 1 and 20.\n", name);

    if (game(r1)){
        printf("Good job, %s! You guessed my number in %d guesses!\n",name ,count);
    }
    else{
        printf("Nope, the number I was thinking  of was %d.\n", r1);
    }


}