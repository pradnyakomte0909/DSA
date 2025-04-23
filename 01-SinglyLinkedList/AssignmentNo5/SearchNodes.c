#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct SingleList
{
    int no;
    char name[10];
    struct SingleList *next;    
}sl;

sl *createList(sl*);
void display(sl*);
void searchNode(sl*);
void searchNode1(sl*, int);

int main()
{
    sl *start = NULL;
    int key;
    start = createList(start);
    display(start);
    searchNode(start);

    printf("\nEnter Key:");
    scanf("%d", &key);

    return(0);
}

sl *createList(sl *head)
{
    sl *newNode, *nextNode;
    int ans;
    do
    {
       printf("\nEnter No And Name:");
       newNode = (sl*)malloc(sizeof(sl));
       scanf("%d%s", &newNode->no, newNode->name);
       newNode->next = NULL;
       if(head == NULL)
       {
        head = newNode;
       }
       else
       {
        nextNode->next = newNode;
       }
       nextNode = newNode;
       printf("\nDo You Want To Enter More Nodes(Yes: 1 or No: 0)?");
       scanf("%d", &ans);
    } while (ans == 1);

    return(head);
}

void display(sl *head)
{
    for(; head != NULL; head = head->next)
    {
        printf("\nNo: %d And Name: %s", head->no, head->name);
    }
}

void searchNode(sl *head)
{
    int searchNo;
    int count = 0;
    printf("\nEnter Search Key:");
    scanf("%d", &searchNo);

    while(head != NULL)
    {
        if(head->no == searchNo)
        {
            count = 1;
            break;
        }
        head = head->next;
    }
    if(count == 1)
    {
        printf("\nNode Found");
    }
    else
    {
        printf("\nNode Not Found");
    }
}
