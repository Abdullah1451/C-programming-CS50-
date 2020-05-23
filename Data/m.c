{
    printf("\n If You Want Change Any Student Press 'Y' Or 'y' : ");
    getchar();
    scanf("%c",&input);

    while(input=='y'||input=='Y')
    {
        change(&head,&tail);
        printf("\n If You Want Change Again Any Student Press 'Y' Or 'y' : ");
        getchar();
        scanf("%c",&input);
    }
}