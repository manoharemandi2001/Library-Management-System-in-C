#include "myheader.h"

BOOK *sync(BOOK *head)
{
    BOOK *temp= head;

    FILE *fp;

    //open file
    fp= fopen("data","r");

    if(fp==NULL)
    {
        printf("File opening unsuccessfull..!\n");
        return head;
    }
    
    int size= (sizeof(BOOK)-sizeof(BOOK*));
    BOOK v,*nu=NULL;

    while(fread(&v,size,1,fp)==1)
    {

        //Allocate new node dynamically
        nu= calloc(1,sizeof(BOOK));

        //copy data from v to nu
        strcpy(nu->name,v.name);
        strcpy(nu->author,v.author);
        nu->pages= v.pages;
        nu->cnt= v.cnt;


        if(temp==NULL)
        {
            temp=nu;
            head =temp;
        }
        else
        {
            temp->link=nu;
            temp=temp->link;
        }
    }

    printf("Sync Successful..!\n");
    fclose(fp);

    if(head==NULL)
    {
        printf("head is null\n");
    }

    return head;

}