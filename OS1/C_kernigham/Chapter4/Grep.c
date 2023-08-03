//
// Created by antouan on 31/7/2023.
//
//

#define Maxline 1000

#include <stdio.h>
#include "Funct.h"
#include "Funct.c"



int main(){

    char Line[Maxline];
    char word[50];
    int len = 0;
    int wordlen = 0;
    int comp = 0;

    printf("Please give the input word: ");
    scanf("%s",word);
    printf("So we are looking for <%s>'\n",word);
    wordlen = getlength(word);
    while((len= getlines(Line,Maxline)) > 1){
        comp = Compare(Line,word,wordlen,len);
        if (comp==1) {
            puts(Line);
        }
    }

    return 0;

}
