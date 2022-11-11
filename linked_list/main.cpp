#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node *one, *two, *three, *four = NULL;

    one = (struct Node *)malloc(sizeof(struct Node));
    two = (struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));

    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;

    one->next = four;
    four->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
    }

    cout << "\n";
}