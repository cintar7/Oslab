//
// Created by antouan on 29/7/2023.
//

#include <stdio.h>

main (){

    int c;
    while((c=getchar())!= EOF ){

        putchar(c);
        if (c==' '){

            while((c=getchar())==' ');
            putchar(c);

        }

    }


}