#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>


//book structure

typedef struct Book 
{
    char name[20];
    char author[20];
    int pages;
    int cnt;
    struct Book *link;
}BOOK;


//functions
void List(BOOK *head);
BOOK *Add(BOOK *head);
void find(BOOK *head);
void save(BOOK *head);
BOOK *sync(BOOK *head);
void Count(BOOK *head);
void edit(BOOK *head);
void Issue(BOOK *head);
void Return(BOOK *head);
int find_sys(BOOK *head, char *name, char *author);
