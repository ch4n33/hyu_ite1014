#include<stdio.h>


int main() {
    int alp[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    FILE *ptr_file;
    char ch = ' ';
    ptr_file = fopen("article.txt", "r");

    int wcount = 1, ctotal =0, ltotal=0;
    while (ch != EOF){
        /// word count
        ltotal++;
        ch = fgetc(ptr_file);
        if (ch == ' ') wcount ++;

        if (64<ch && ch <91) {
            alp[ch-65]++;
            ctotal ++;
        }
        if(96 < ch && ch <123){
            alp[ch-97] ++;
            ctotal ++;
        }

    }
    fclose(ptr_file);
    printf("total number of word is %d.\n", wcount);
    printf("total number of character is %d.\n", ctotal);
    printf("total number of letter is %d.\n",ltotal);
    int most = 0, least = ctotal;
    int mosta, leasta;
    for(int a=0; a<26; a++){
        if (most <alp[a]) most = alp[a], mosta = a + 65;
        if (least>alp[a]) least = alp[a], leasta = a + 65;
    }
    printf("'%c' is the most frequent.",mosta);
    printf("'%c' is the least frequent.",leasta);
}