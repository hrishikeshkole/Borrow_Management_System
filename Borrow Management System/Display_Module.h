/*
    Display Module - This Module Display all users with Borrowed Amount.
*/

void display(){

    struct Node *p;
    p = start;
    if(p == NULL)
        printf("\tThier is no Borrowers added in system\n");
    else{
        while(p != NULL) {
            if(p->BID != 0){
                printf("\n");
                printf("\tName of Borrower -> %s \n", p->name);
                printf("\tAmount Borrowed -> %0.2f \n", p->amt);
                printf("\tBorrower ID -> %d \n",p->BID);
                printf("\tRemaining Dues -> %0.2f \n",p->due);
            }
            p = p->next;
        }
    }//end else
}//end display
