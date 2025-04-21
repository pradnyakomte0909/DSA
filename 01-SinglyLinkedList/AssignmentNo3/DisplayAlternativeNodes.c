#include<stdio.h>
#include<stdlib.h>

typedef struct AlterNodes
{
    int no;
    char name[10];
    struct AlterNodes *next;
}sl;

sl *createNode(sl*);
void displayNodes(sl*);
void displayAlternativeNodes(sl*);
void displayAlternativeNodes1(sl*);

int main()
{
    sl *start = NULL;

    start = createNode(start);
    displayNodes(start);
    displayAlternativeNodes(start);
    displayNodes(start);
    displayAlternativeNodes1(start);

    return(0);
}

sl *createNode(sl *head)
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
        printf("Do You Want To Enter More Nodes:");
        scanf("%d", &ans);
    } while (ans != 0);
    return(head);
}

void displayNodes(sl *head)
{
    printf("\nDisplaying Normal List:\n");
    for(; head != NULL; head = head->next)
    {
        printf("\nNo:%d and Name: %s", head->no, head->name);
    }
}

void displayAlternativeNodes(sl *head)
{
    printf("\nDisplaying Alternative Nodes:\n");
    for(; head != NULL; head = head->next->next)
    {
        printf("\nNo: %d and Name: %s", head->no, head->name);
    }
}

void displayAlternativeNodes1(sl *head)
{
    sl *nextNode = head->next;

    printf("\nDisplaying Alternative Nodes1:");
    for(; head != NULL; head = nextNode->next)
    {
        printf("\nNo: %d and Name: %s", head->no, head->name);
        nextNode = head->next;
    }
}
