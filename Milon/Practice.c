struct student{
    int roll;
    char name[10];
    int phn;
};

main(){
    struct student p1;
    for(int i=0; i<5; i++)
    {
        scanf("%d %s %d",&p1.roll,&p1.name, &p1.phn);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d - %s - %d", p1.roll, p1.name, p1.phn);
    }

}
