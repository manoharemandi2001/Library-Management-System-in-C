#include "myheader.h"

int main()
{
    //menu

    char ch;
    BOOK *head=NULL;

    head=sync(head);

    while(1)
    {
        __fpurge(stdin);
        printf("\nEnter A/a:Add L/l:List C/c:Count E/e:edit I/i:Issue R/r:Return F/f:Find S/s:Save Q/q:Quit\n");
       
        scanf("%c",&ch);
        __fpurge(stdin);

        switch(ch)
        {
            case 'A': head= Add(head); break;
            case 'a': head= Add(head); break;

            case 'I': Issue(head); break;
            case 'i': Issue(head); break;

            case 'R': Return(head); break;
            case 'r': Return(head); break;

            case 'L': List(head); break;
            case 'l': List(head); break;

            case 'F': find(head); break;
            case 'f': find(head); break;

            case 'S': save(head); break;
            case 's': save(head); break;

            case 'C': Count(head); break;
            case 'c': Count(head); break;
            
            case 'E': edit(head); break;
            case 'e': edit(head); break;

            

            case 'Q': exit(0);
            case 'q': exit(0);

            case 'z': system("clear"); break;

            default: printf("\nPlease Enter valid option..!\n");
        }
    }

}