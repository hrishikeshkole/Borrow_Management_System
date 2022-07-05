/*
    Installment Module - This Module Accepts Borrowed Installments from user.
*/
void Installment(){
    struct Node *temp;
    int id;
    float amt;
    printf("\n");
    printf("\tEnter Borrower ID to pay Installment ->  ");
    scanf("%d",&id);
    temp = start;

    while(temp->next != NULL){
        if(temp->BID == id)
            break;
        temp = temp->next;
    }

    if(temp->BID != id){
            printf("\tNo Such user there \n");
            system("pause");
            return;
    }

    printf("\tName of Borrower -> %s \n",temp->name);
    printf("\tBorrowed Amount -> %0.2f \n",temp->amt);
    printf("\tCurrent due -> %0.2f \n",temp->due);
    if(temp->due == 0){
        printf("\n\tNo Need to Repay Account Cleared Already...\n");
        system("pause");
        return;
    }
    printf("\tEnter Current Installment Amount ->  ");
    scanf("%f",&amt);
    temp->due = temp->due - amt;

    if(temp->due <= 0 ){
        printf("\tNo Dues \n\tNow Your Account is cleared\n");
        temp->due = 0;
        temp->I_Count += 1;
    }else{
        printf("\tNow Remaining due -> %0.2f\n",temp->due);
        temp->I_Count++;
    }
    system("pause");
}//void Installmetnt
