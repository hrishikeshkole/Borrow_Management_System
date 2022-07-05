#include <stdio.h>
#include <stdlib.h>

struct Node{
    char name[20];
    float amt;
    float due;
    int BID;
    int I_Count;
    struct Node *next;
};

struct Node *start = NULL;
