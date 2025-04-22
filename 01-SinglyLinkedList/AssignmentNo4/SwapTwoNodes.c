#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    printf("\nBefore Swapping The Elements:");
    display(start);
    swapNodeDisplay(start);
    printf("\nAfter Swapping The Elements:");
    display(start);

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
    for(; head != NULL; head = head->next)
    {
        printf("\nNo: %d And Name: %s", head->no, head->name);
    }
}

void swapNodeDisplay(sl *head)
{
    // sl *nextNode, *tempNode;
    // tempNode = head;
    // for(; head != NULL; head = nextNode->next)
    // {   
    //     nextNode = head->next;

    //     if(nextNode == NULL)
    //     break;

    //     tempNode->no = head->no;
    //     strcpy(tempNode->name, head->name);

    //     head->no = nextNode->no;
    //     strcpy(head->name, nextNode->name);

    //     nextNode->no = tempNode->no;
    //     strcpy(nextNode->name, tempNode->name);
    // }

    // Efficient Logic
    sl *nextNode, tempNode;
    for(; head != NULL; head = nextNode->next)
    {   
        nextNode = head->next;

        if(nextNode == NULL)
        break;

        tempNode.no = head->no;
        strcpy(tempNode.name, head->name);

        head->no = nextNode->no;
        strcpy(head->name, nextNode->name);

        nextNode->no = tempNode.no;
        strcpy(nextNode->name, tempNode.name);
    }
}
