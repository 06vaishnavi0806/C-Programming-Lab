#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int rollNo;
    char name[50];
    char address[100];
    struct student *next;
};
void insertRecord(struct student **head_ref)
{
    struct student *newNode = (struct student *)malloc(sizeof(struct student));
    struct student *last = *head_ref;

    printf("Enter roll number:");
    scanf("%d", &newNode->rollNo);
    fflush(stdin);
    printf("Enter name: ");
    gets(newNode->name);
    fflush(stdin);
    printf("Enter address: ");
    gets(newNode->address);
    fflush(stdin);

    newNode->next = NULL;

    if (head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }

    while (last->next = newNode)
        last = last->next;

    last->next = newNode;
    printf("Record added successfully\n");
}
