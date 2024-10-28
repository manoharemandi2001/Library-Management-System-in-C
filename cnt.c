#include "myheader.h"

void Count(BOOK *head)
{
    BOOK *temp=head;

    if(temp==NULL)
    {
        printf("Library Empty..!\n");
        return;
    }

        char name[20];

        //find based on author name
        __fpurge(stdin);
        puts("Enter book name to get cnt: ");
        gets(name);

        while(temp)
        {
            if(strcmp(name,temp->name)==0)
            {
                printf("Book found..!\n");
                printf("%s Avl. Books: %d\n",temp->name,temp->cnt);
                //return;           
            }

            temp= temp->link;
        }

        printf("Book not found..!\n");
    
    return;
}