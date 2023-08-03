//
// Created by antouan on 22/7/2023.
//

#include <stdio.h>
/*This programm converts Fahreneit to Celsius
 * A simple and elegant solution to a common problem
 * in order to learn to use C


main() {

    int fahr , celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr =  lower;
    while (fahr <= upper) {

        celsius = 5 * (fahr - 32 ) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;

    }

}

*/

#include <stdio.h>

main() {

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper =300;
    step =20;

    fahr = lower;
    printf("--------------------\n");
    printf("-Temperature table -\n");
    while ( fahr <= upper) {

        celsius =( 5.0 / 9.0 ) * ( fahr - 32.0);

        printf("-  %3.0f    %6.1f   -\n",fahr, celsius);
        fahr += step;

    }
    printf("--------------------\n");
}