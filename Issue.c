#include "myheader.h"

void Issue(BOOK *head)
{
    BOOK *temp=head;

    if(temp==NULL)
    {
        printf("Library Empty..!\n");
        return;
    }

        char name[20],author[20];

        __fpurge(stdin);
        puts("Enter book name to issue: ");
        gets(name);

        __fpurge(stdin);
        puts("Enter author name to issue: ");
        gets(author);

        while(temp)
        {
            if(strcmp(name,temp->name)==0 && strcmp(author,temp->author)==0 && (temp->cnt>0))
            {
                printf("Book Issued.. Happy Reading..!\n");

                temp->cnt--;

                return;           
            }

            temp= temp->link;
        }

        printf("Book not found..! Select from below list\n");
        List(head);
    
    return;
}