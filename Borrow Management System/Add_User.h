/*
    Add User Module - This Module Add New Borrowers into System.
*/
void Add() {
    struct Node *temp, *p, *k;
    int id;
    temp = (struct Node*)malloc(sizeof(struct Node));
    printf("\n");
    printf("\tEnter Name of Borrower -> ");
    scanf("%s",temp->name);
    printf("\tEnter Amount to be borrowed -> ");
    scanf("%f", &temp->amt);
    printf("\tAssign Borrow ID to borrower -> ");
    scanf("%d",&id);

    k = start;

    if(start == NULL)
        temp->BID = id;
    else{
        while(k != NULL){
            if(k->BID == id){
                printf("\tBID already taken. Choose another ");
                scanf("%d",&id);
                temp->BID = id;
            }else{
                temp->BID = id;
            }
            k = k->next;
        }//end while
    }//end else

    temp->due = temp->amt;
    temp->I_Count = 0;
    temp->next = NULL;

    if(start == NULL)
        start = temp;
    else{
        p = start;

        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
}//void Add

