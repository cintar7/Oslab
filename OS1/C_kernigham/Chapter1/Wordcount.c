//
// Created by antouan on 29/7/2023.
//
#include <stdio.h>

#define IN 1
#define OUT 0

int main (){

    int c, nl, nw, nc , state, ns;

    ns = nl = nw = nc = state = 0;

    while((c=getchar())!=EOF){

        if (c=='\n') nl++;

        if (c==' ' || c=='\t' || c=='\t'){

            state=OUT;
            ns++;
        }
        else if(state==OUT){
            state=IN;
            nw++;
            nc++;
        }
        else if (state=IN && c!='\n'){
            nc++;
        }

    }

    printf("The number of the words are : %d\n",nw);
    printf("The number of the lines are : %d\n",nl);
    printf("The number of the space are : %d\n",ns);
    printf("The number of the chars are : %d\n",nc);

}