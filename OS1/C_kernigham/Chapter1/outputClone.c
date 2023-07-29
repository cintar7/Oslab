//
// Created by antouan on 24/7/2023.
//

# include <stdio.h>


main () {

    int c;
    int lines =0;
    int space = 0;
    int tab = 0 ;
    int pivot ;
    c = getchar();
    while (c != EOF ){
        if (c == '\n') {
            lines ++;
        }
        else if (c == ' '){
            space++;
        }
        else if( c=='\t'){
            tab++;
        }
        putchar(c);
        c = getchar();
    }
    printf("The number of the lines are : %d \n",lines);
    printf("The number of the spaces are : %d\n",space);
    printf("The number of the tabs are : %d \n",tab);


}