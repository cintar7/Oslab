//
// Created by antouan on 29/6/2023.
//
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "FUNC.h"
#include "FUNC.c"
int main() {
    char *uname;


    bool Session_Active=true;

    User(uname);
    printf("FROM inside the main function %s \n",uname);
    while(Session_Active){

        Cmd_prompt(&Session_Active);

 //   printf("%b\n",Session_Active); Printing the result of the active Session

    }

    return 0;


}