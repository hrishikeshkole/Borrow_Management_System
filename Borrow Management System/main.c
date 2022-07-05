#include "BMS.h"
#include "Login_Module.h"
#include "Add_User.h"
#include "Installment_Module.h"
#include "Total_Module.h"
#include "View_Dues_Module.h"
#include "Nill_Account_Module.h"
#include "Display_Module.h"
#include <stdlib.h>

int main(void)
{
    int ch;

    if(Login()){

        while(1){
        system("cls");
        printf("\n\t\t\t\t\t\tWELCOME TO \n");
        printf("\t\t\t\t\t BORROW MANAGEMENT SYSTEM\n\n");
        printf("\t 1. Add New Borrower \n");
        printf("\t 2. Accept Installment \n");
        printf("\t 3. Display All Records \n");
        printf("\t 4. Display Total Amount Institution Given to Borrowers \n");
        printf("\t 5. View Dues of Each Borrower \n");
        printf("\t 6. View Nill Accounts \n");
        printf("\t 7. Exit \n");

        printf("\tEnter Your Choice - ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                Add();
                break;
            case 2:
                Installment();
                break;
            case 3:
                display();
                system("pause");
                break;
            case 4:
                if(sum())
                    printf("\n\tThe Total Amount Institution Given to Borrowers %0.1f \n", sum());
                else{
                    printf("\n\tNo Such Money Given \n");
                }
                system("pause");
                break;
            case 5:
                viewdues();
                break;
            case 6:
                Nill();
                break;
            case 7:
                exit(1);
                system("pause");
                break;

            default :
                printf("Enter Correct choice\n");
                system("pause");
                break;
        }//end switch

    }//end while

}else {
    exit(1);
}//end if-else

    return 0;
}
