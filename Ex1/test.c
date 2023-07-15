//
// Created by antouan on 15/7/2023.
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

int main(){

    char cmd[20];
    fgets(cmd,sizeof(cmd),stdin);
    cmd[strcspn(cmd,"\n")] = '\0';
    printf("%s \n",cmd);
    return 0;


}