struct s{
    char name[10];
    int id;
};

main(){
    struct s name[10];
    int id;
    for(int i=0; i<10; i++)
    {
        scanf("%c",&name[i]);

    }
    for(int i=0; i<10; i++)
    {
        printf("%c",name[i]);

    }
}
