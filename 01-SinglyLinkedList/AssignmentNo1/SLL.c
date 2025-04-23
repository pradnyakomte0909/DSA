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

// Function Declaration
sl *createList(sl*);
void display(sl*);

// Entry Point Function
int main()
{
    sl *start = NULL;

    start = createList(start);
    display(start);

    return(0);
}

// Create Node Function
sl *createList(sl *head)
{
    head = (sl*)malloc(sizeof(sl));
    printf("Enter Roll No:");
    scanf("%d", &head->rollNo);
    printf("Enter Name:");
    scanf("%s", head->name);
    printf("Enter Standard:");
    scanf("%d", &head->standard);
    printf("Enter Division:");
    scanf("%s", head->div);
    head->next = NULL;
    return(head);
}

// Displaying Node Function
void display(sl *head)
{
    printf("\nStudent Details Are:\n");
    printf("\nRoll No: %d\nName: %s\nStandard: %d\nDivision: %s", head->rollNo, head->name, head->standard, head->div);
}
