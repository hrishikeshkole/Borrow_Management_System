/*
    Total Module - Sum of all borrowed money given to borrowers from institution
*/

float sum() {
   struct Node *p;
   p = start;
   float sum = 0;
    if(p == NULL){
        return 0;
    }else {
        while(p != NULL) {
            sum = sum + p->amt;
            p = p->next;
        }
        return sum;
    }
}//end sum
