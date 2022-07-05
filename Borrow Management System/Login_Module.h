#include <stdio.h>
#include <string.h>


int Login(){

    char passwd[] = "admin@123";
    char user[] = "admin";
    char pass[50], username[50];
    int passcount = 5;

while(1){
    system("cls");
    printf("\n");
    printf("\t\t\tTo Access Borrow Management System \n");
    printf("\t\t\t Log In With Admin Credentials !!\n\n");

    printf("\tUser ID -> ");
    scanf("%s",username);
    printf("\tPassword -> ");
    scanf("%s",pass);


    if(strcmp(username, user) == 0 && strcmp(passwd, pass) == 0) { //comparing user-name and Password
        return 1;
    } else{
        passcount--;

    if(passcount == 0){
        printf("\n\t\tToo Many Wrong Attempts Done!!!!\n");
        printf("\t\t\tAccess Denied\n");
        return 0;
    }else{
        printf("\t%d Attemp%s Remaining..\n",passcount, passcount > 1 ? "ts":"t");
        system("pause");
    }

    }//outer else

}//end while


}//end Login
