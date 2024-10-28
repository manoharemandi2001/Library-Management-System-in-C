#include "myheader.h"

void edit(BOOK *head)
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
        puts("Enter book name to edit: ");
        gets(name);

        while(temp)
        {
            if(strcmp(name,temp->name)==0)
            {
                printf("Book found..!\n");
                
                    //Initialize the node
                printf("Enter Name:\n");
                gets(temp->name);

                printf("Enter author:\n");
                gets(temp->author);

                printf("Enter No. of Pages:\n");
                scanf("%d",&temp->pages);

                printf("Enter No. of books:\n");
                scanf("%d",&temp->cnt);

                return;           
            }

            temp= temp->link;
        }

        printf("Book not found..!\n");
    
    return;
}