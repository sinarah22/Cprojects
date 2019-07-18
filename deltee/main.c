#include <stdio.h>
#include <stdlib.h>
#include "myFunctions.h"
typedef struct Node Nodeptr;

typedef struct Node
{
    int data;
    Nodeptr* next;
    Nodeptr* previous;
} Nodeptr;

extern Nodeptr * start;
extern Nodeptr * endNode;

int main(int argc, char *argv[])
{
    //it may give you some error or warnings for some compilers
    //no init
    int choice;
    start = NULL;
    endNode = NULL;

    do
    {

        printf("1 - add (left) | 2- add (right) | 3 - add Middle After |  5 - print | 6 - print backward | 7 - delete node from start ");
        puts("99 - extend the menu | ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 99:
                menu();
                break;
            case 1:
                puts("under construction");
                addToLeft();
                break;
            case 2:
                puts("under construction");
                addToRight();
                break;
            case 3:
                puts("under construction");
                addMiddleAfter();
                break;
            case 4:
                puts("under construction");
                addMiddleBefore();
                break;
            case 5:
                puts("under construction");
                printTheNodes();
                break;
            case 6:
                puts("under construction");
                printTheNodesBackwards();
                break;
            case 0:
                break;
                case 7:

               DeleteNodeFromStart();
                break;
            default:
                printf("please enter a valid number\n\n");
                break;
        }

    } while (choice != 0);



    return 0;
}

