#include "myheader.h"

void List(BOOK *head)
{
    BOOK *temp=head;

    //if list is empty
    if(temp==NULL)
    {
        printf("No books Found...!\n");
        return;
    }

    printf("Available Books are:\n");

    while(temp)
    {
        printf("Name: %s  Author: %s  No.of Pages: %d  Avl Books: %d\n",temp->name,temp->author,temp->pages,temp->cnt);
        temp=temp->link;
    }

    return;    
}