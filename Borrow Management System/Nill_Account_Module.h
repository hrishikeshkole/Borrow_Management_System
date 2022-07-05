/*
    Nill_Account_Module - This module let us know that how many users
    completed their borrowed amount with installment count
*/

void Nill(){
    struct Node *p;
    p = start;
    if(p == NULL){
        printf("\tCurrently no nill Borrowers in system\n");
        system("pause");
    }else{
        while(p != NULL) {
            if(p->due <= 0){
                printf("\n");
                printf("\tName of Borrower -> %s \n", p->name);
                printf("\tAmount Borrowed -> %0.2f \n", p->amt);
                printf("\tBorrower ID -> %d \n",p->BID);
                printf("\tTotal No. of Installments : %d\n",p->I_Count);
                printf("\tThis Account is cleared\n");
            }
            p = p->next;
        }
        system("pause");
    }//end else
}//end Nill
