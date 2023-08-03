//
// Created by antouan on 29/7/2023.
//
#define MAXLINE 1000

#include <stdio.h>

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

void copy (char to[], char from[]){
    int i;
    i=0;
    while((to[i]=from[i]) !='\0'){
        i++;
    }
};

int main(){

    int len,max;

    char Line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while((len = getlines(Line,MAXLINE)) > 1){
        if (len>max) {
        copy(longest,Line);
        max=len;
        };
    };
    if (max>0){
        printf("The biggest line is:\n");
        puts(longest);
    }
    return 0;

}