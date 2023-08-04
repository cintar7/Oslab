//
// Created by antouan on 31/7/2023.
//
#include <stdio.h>
#include "Funct.h"

int getlength(char Word[]){
    int i;
    for(i = 0 ; Word[i]!='\0';i++);

    return i;
}

int getlines (char Line[], int maxline){
    int c,i;
    i=0;
    for (i=0;i<maxline-1 && (c = getchar())!= EOF && c!='\n';i++){
        Line[i]=c;
    }
    if (c=='\n'){
        Line[i]=c;
        i++;
    }
    Line[i]='\0';
    i++;
    return i;
};

int Compare(char Line[],char word[],int wlength,int lilenght){
    int cmp = 0;
    for(int i=0; i<lilenght;i++ ){
        for (int k = 0 ; k < wlength; k ++  ){
            if (Line[i+k]==word[k]){
                cmp = 1;
            }
            else {
                cmp = 0;
                break;
            }
        }
        if (cmp == 1 ){
            break;
        }
    }
    return cmp;
};
