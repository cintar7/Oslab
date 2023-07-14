int Hello() {
    printf("Hellow world from My function Hello.\n");
    return 0;
};

void Create_dir(char *DirName, char *( DirPerms)){

    int check;

    check = mkdir("MyLogs",S_IRWXU);

    if (!check) {
        printf("Directory successful created.\n");
    }
    else {
        printf("Unable to create the directory\n");
        exit(1);
    }


}