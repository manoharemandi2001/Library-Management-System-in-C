#include "myheader.h"


//choice =0 -> find based on book name
//choice =1 -> find based on author name

void find(BOOK *head)
{
    BOOK *temp=head;

    if(temp==NULL)
    {
        printf("Library Empty..!\n");
        return;
    }

    char name[20];
    int choice=0, f=0;

    puts("find based on (0)->Book name (>0)->Author name\n");
    scanf("%d",&choice);

    if(choice) 
    {
        //find based on author name
        __fpurge(stdin);
        puts("Enter author name to find: ");
        gets(name);

        while(temp)
        {
            if(strcmp(name,temp->author)==0)
            {
                //printf("Book found..!\n");
                printf("Name: %s  Author: %s  No.of Pages: %d  Avl Books: %d\n",temp->name,temp->author,temp->pages,temp->cnt);
                f=1;
                //return;           
            }

            temp= temp->link;
        }

        printf("Book not found..!\n");
    }

    else
    {
        //find based on author name
        __fpurge(stdin);
        puts("Enter book name to find: ");
        gets(name);

        while(temp)
        {
            if(strcmp(name,temp->name)==0)
            {
                //printf("Book found..!\n");
                printf("Name: %s  Author: %s  No.of Pages: %d  Avl Books: %d\n",temp->name,temp->author,temp->pages,temp->cnt);
                f=1;
                //return;           
            }

            temp= temp->link;
        }

        if(!f)
        printf("Book not found..!\n");
    }
    
    return;
}

int find_sys(BOOK *head, char *name, char *author)
{
     BOOK *temp=head;

    if(temp==NULL)
    {
        //printf("Library Empty..!\n");
        return 0;
    }

    //find based on author name

        while(temp)
        {
            if(strcmp(name,temp->name)==0 && strcmp(author,temp->author)==0)
            {
                return 1;           
            }

            temp= temp->link;
        }

        //if(!f)
        return 0;
}