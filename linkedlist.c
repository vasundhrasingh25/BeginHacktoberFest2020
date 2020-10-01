#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void create(int n)
{
    struct Node *t, *last;
    int element;
    printf("enter data of 1 node");
    scanf("%d", &element);

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = element;
    first->next = NULL;
    last = first;

    for (int i = 2; i <= n; i++)
    {
        printf("enter data of %d node", i);
        scanf("%d", &element);
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = element;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct Node *p, int n)
{
    if (p == NULL)
    {
        printf("NUll LINKED LIST");
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
void insert(int pos)
{
    struct Node *t, *p;
    int element;
    printf("enter data of node");
    scanf("%d", &element);

    if (pos == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = element;
        t->next = first;
        first = t;
    }
    else if (pos > 0)
    {
        p = first;
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = element;
        t->next = p->next;
        p->next = t;
    }
}
void insertafter(int a)
{
    int element;
    printf("enter data of node");
    scanf("%d", &element);
    struct Node *t, *p;
    p = first;
    int pos;
    while (p->data != a && p)
    {
        p = p->next;
        pos++;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = element;
    t->next = p->next;
    p->next = t;
}
int main()
{
    int choice, n, po, a;
    do
    {
        printf("\nenter your choice\nPress 1 to create\nPress 2 to display\nPress 3 to insert at start\nPress 4 to insert at end\nPress 5 to insert at any other position\nPress 6 to insert after a specific element");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter no. of nodes");
            scanf("%d", &n);
            create(n);
            break;
        case 2:
            display(first, n);
            break;

        case 3:
            insert(0);
            n++;
            break;
        case 4:
            insert(n);
            n++;
            break;
        case 5:
            printf("Enter the position at which insertion is to be done");
            scanf("%d", &po);
            insert(po);
            n++;
            break;

        case 6:
            printf("enter the value of the node after which insertion is to be done");
            scanf("%d", &a);
            insertafter(a);
            n++;
            break;
        }
    } while (choice != 0);
}
