#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    //size_t* last;
    struct LinkedList* next;
    unsigned int data;
} LinkedList;

void ShowLinkedList(LinkedList* list)
{
    printf("List:\n");
    do {
        printf("%d\n", list->data);
        list = list->next;
    } while(list != NULL);
}

int main()
{
    LinkedList* first = NULL;
    LinkedList* preIterator = NULL;
    LinkedList* iterator = NULL;
    //bool exit = false;
    char input[148];

    printf("Hello! Put some uns int data or X for exit\n");

    while(true)
    {
        scanf("Value: %s", input);
        if(*input != 'X')
        {
            if(NULL == first)
            {
                first = (LinkedList*)calloc(1, sizeof(LinkedList));
                first->data = atoi(input);
                first->next = NULL;
                iterator = first;
            }
            else
            {
                while(iterator != NULL)
                {
                    preIterator = iterator;
                    iterator = iterator->next;
                }
                preIterator->next = (LinkedList*)calloc(1, sizeof(LinkedList));
                iterator = preIterator->next;
                iterator->next = NULL;
                iterator->data = atoi(input);
            }
        }
        else
        {
            ShowLinkedList(first);
            break;
        }
        ShowLinkedList(first);
    }

    return 0;
}
