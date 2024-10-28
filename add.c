#include "myheader.h"

BOOK *Add(BOOK *head)
{

    //Allocate new node dynamically
    BOOK *nu= calloc(1,sizeof(BOOK));
    
    //Initialize the node
    printf("Enter Name:\n");
    gets(nu->name);

    printf("Enter author:\n");
    gets(nu->author);
    
    if(find_sys(head,nu->name,nu->author)==1)
    {
        printf("We already have this book..!\n");
        return head;
    }

    printf("Enter No. of Pages:\n");
    scanf("%d",&nu->pages);

    printf("Enter No. of books:\n");
    scanf("%d",&nu->cnt);

    BOOK *temp=head,*prev=head;

    //empty list
    if(head==NULL)
    {
        head =nu;
        return head;
    }

    //if 1st node place is best
    else if(strcmp(temp->name, nu->name)>0)
    {
        nu->link=temp;
        return nu; //nu will be head
    }

    //finding best place for nu node
    else
    {
        while(temp)
        {
            if(strcmp(temp->name, nu->name)>0)
            {
                prev->link=nu;
                nu->link=temp;
                printf("\nadded\n");
            }
            else if(strcmp(temp->name, nu->name)==0)
            {
                nu->link=temp;
                return nu; //nu will be head
            }

            prev= temp;
            temp= temp->link;
        }

        //if no best place till last node so add at last
        if(nu->link==NULL)
        {
            prev->link=nu;
        }
        
        return head;      
    }
}