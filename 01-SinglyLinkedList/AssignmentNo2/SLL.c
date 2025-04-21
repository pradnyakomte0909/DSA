#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
    int rollNo;
    char name[10];
    int standard;
    char div[1];
    struct Student *next;
}sl;

sl *createList(sl*);
void display(sl*);

int main()
{
    sl *start = NULL;
    start = createList(start);
    display(start);

    return(0);
}

sl *createList(sl *head)
{
    sl *newNode, *lastNode;
    int ans;

    do
    {
        newNode = (sl*)malloc(sizeof(sl));
        printf("Enter Roll No:");
        scanf("%d", &newNode->rollNo);
        printf("Enter Student Name:");
        scanf("%s", newNode->name);
        printf("Enter Standard:");
        scanf("%d", &newNode->standard);
        printf("Enter Division:");
        scanf("%s", newNode->div);
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
        printf("Do You Want To Enter More Nodes?");
        scanf("%d", &ans);
    }while(ans != 0);

    return(head);
}

void display(sl *head)
{
    while(head != NULL)
    {
        printf("\nNo: %d\nName: %s\nStandard: %d\nDivision: %s", head->rollNo, head->name, head->standard, head->div);
        head = head->next;
    }
}
