#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

 void displayIntro(){
    printf("You are in a land full of dragons. In front of you,\n");
    printf("you see two caves. In one cave, the dragon is friendly\n");
    printf("and will share his trasure with you. The other dragon\n");
    printf("is greedy and hungry, and will eat you on sight.\n");
}
int chooseCave(){
    int cave;
    scanf("%d", &cave);
    return cave;
}
void checkCave(int chosencave){
    printf("You approach the cave...\n");
    sleep(2);
    printf("It is dark and spooky...\n");
    sleep(2);
    printf("A large dragon jumps out in front of you! He opens his jaws and...\n");
    sleep(2);
    srand(time(NULL));
    int friendlycave = rand()%2+1;
    if(chosencave == friendlycave){
        printf("Gives you his treasures!\n");
    }
    else{
        printf("Gobbles you down in one bite!\n");
    }
}

int main() {
    char playAgain[5] = "y";

    while(strcmp(playAgain,"yes") ==0|| strcmp(playAgain, "y")==0){
        displayIntro();
        checkCave(chooseCave());
        printf("Do you want to play again? (yes or no)");
        scanf("%s", playAgain);
    }
}