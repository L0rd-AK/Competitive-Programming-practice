#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;
typedef struct Node node;

void insert_at_first() 
{
    printf("Inserting node at first position.\n");
    int data;
    printf("Enter the data item :");
    scanf("%d", &data);

    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}
void insert_at_last()
{
    if (head == NULL)
    {
        insert_at_first();
        return;
    }
    printf("Inserting node at last position.\n");
    int data;
    printf("Enter the data item :");
    scanf("%d", &data);

    node *new_node;
    new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    node *ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
}
void insert_at_middle_any_place()
{
    printf("Inserting node at middle_any position.\n");
    int data, index;
    printf("Enter the data item :");
    scanf("%d", &data);
    printf("Enter which index you want to insert :");
    scanf("%d", &index);
    if (index <= 0)
    {
        insert_at_first(); 
        return;
    }
    node *new_node;
    new_node = (node *)malloc(sizeof(node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    new_node->data = data;

    node *ptr = head;
    int check = 1; 
    while (ptr != NULL)
    {

        if (check == index)
        {
            new_node->next = ptr->next;
            ptr->next = new_node;

            return;
        }
        ptr = ptr->next;
        check++;
    }
    insert_at_last();
}

void printLinkedList()
{
    node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    insert_at_first();
    printLinkedList();
    insert_at_last();
    printLinkedList();
    insert_at_middle_any_place();
    printLinkedList();
    return 0;
}