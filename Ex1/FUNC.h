int User(char *uname) {
    uname = getlogin();
    printf("Hello %s!\n",uname);
    return 0;
};


void Get_Command(char* cmd){
    char Command[20];

    fgets(Command, sizeof(Command), stdin);
    //fgets(cmd, sizeof(cmd),stdin);

    Command[strcspn(Command, "\n")] = '\0';

    printf("Before %s \n",Command);

    cmd = Command;

    printf("%s \n",cmd);

}



void Create_dir(char* Folder_name){

    int check;

    check = mkdir(Folder_name,S_IRWXU);

    if (!check) {
        printf("Directory successful created.\n");
    }
    else {
        printf("Unable to create the directory\n");
        exit(1);
    }


}

void Cmd_prompt(bool* Session_Active){

    char cmd[20];
    char PromtVars[20];
    char mkdir1[] = "mkdir";
    char exit1[] = "EXIT";
    printf("MyShell# ");

    Get_Command(&cmd);
//    fgets(cmd, sizeof(cmd),stdin);

    printf("%s",cmd);

    printf("The result is %d \n",strcmp(cmd,"EXIT"));
    printf("%s == %s\n",cmd,exit1);
    if(strcmp(cmd, exit1)){


        *Session_Active=false;
        printf("Why?\n");
    }
    else if  (strcmp(cmd,mkdir1)){
        printf("Please give the name of the folder :");
        fgets(PromtVars, sizeof(PromtVars),stdin);
        Create_dir(PromtVars);
    }
//    printf("active session is %b\n",*Session_Active);
}

