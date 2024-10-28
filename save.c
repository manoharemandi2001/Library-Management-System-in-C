#include "myheader.h"

void save(BOOK *head)
{
    BOOK *temp= head;

    if(temp==NULL)
    {
        printf("Library Empty..!\n");
        return;
    }

    FILE *fp;

    //open file
    fp= fopen("data","w");

    if(fp==NULL)
    {
        printf("File opening unsuccessfull..!\n");
        return;
    }

    int size= (sizeof(BOOK)-sizeof(BOOK*));

    //write the data into file node by node
    while(temp)
    {
        fwrite(temp,size,1,fp);
        temp=temp->link;
    }

    printf("Saved Successfully..!\n");
    fclose(fp);

    return;
}
