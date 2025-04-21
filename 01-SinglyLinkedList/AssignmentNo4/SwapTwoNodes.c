#include<stdio.h>
#include<stdlib.h>

typedef struct SingleLinkedList
{
    int no;
    char name[10];
    struct SingleLinkedList *next;
}sl;

sl *createNodes(sl*);
void display(sl*);
void swapNodeDisplay(sl*);

int main()
{
    sl *start = NULL;
    start = createNodes(start);
    display(start);
    swapNodeDisplay(start);

    return(0);
}

sl *createNodes(sl *head)
{
    sl *newNode, *lastNode;
    int ans;

    do
    {
        printf("Enter No and Name:");
        newNode = (sl*)malloc(sizeof(sl));
        scanf("%d%s", &newNode->no, newNode->name);
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            lastNode->next = newNode;
        }
        lastNode = newNode;

        printf("\nDo You Want To Create More Nodes?(Yes: 1, No: 0)");
        scanf("%d", &ans);
    }while(ans == 1);

    return(head);
}

void display(sl *head)
{
    printf("\nBefore Swapping Displaying Nodes");
    for(; head != NULL; head = head->next)
    {
        printf("\nNo: %d And Name: %s", head->no, head->name);
    }
}

void swapNodeDisplay(sl *head)
{
    
}
