#include <stdio.h>

void main() {
    char name[20];
    char gend[7];
    int birth;
    int peri;
    char desti[20];

    printf("<<<Interview for Travel Plan>>>\nInput your name : ");
    scanf("%s", name);

    printf("Gender : ");
    scanf("%s", gend);

    printf("Day of Birth(ex. 20000512) : ");
    scanf("%d", &birth);

    printf("Destination : ");
    scanf("%s", desti);

    printf("Period of trip(ex. 5) : ");
    scanf("%d", &peri);

    printf("\n\n==========\nNAME :           %s\nGENDER :         %s\nDAY OF BIRTH :   %d\nDESTINATION :    %s\nPERIOD OF TRIP : %d\n==========",name, gend, birth, desti, peri);

}