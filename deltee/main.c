#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "myFunctions.h"
typedef struct Node Nodeptr;

typedef struct Node
{
    int data;
    Nodeptr* next;
    Nodeptr* previous;
} Nodeptr;

extern Nodeptr * StartNode;
extern Nodeptr * endNode;

int main(int argc, char *argv[])
{
    //it may give you some error or warnings for some compilers
    //no init
    int choice;
    StartNode = NULL;
    endNode = NULL;

    do
    {

        printf("1 - add (left) | 2- add (right) | 3 - add Middle After | 4 - add Middle Before |  5 - print | 6 - print backward | 7 - delete node from StartNode | 8 - Delete All | 9 - Delete Any | 11 - Odd Numbers | 12 - Replace A Number | ");
        puts(" 13 - Sort the list | 15 - Random Numbers | 16 - Print Prime Numbers | 99 - extend the menu | ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 99:
                menu();
                break;
            case 1:

                addToLeft();
                break;
            case 2:

                addToRight();
                break;
            case 3:

                addMiddleAfter();
                break;
            case 4:

                addMiddleBefore();
                break;
            case 5:

                printTheNodes();
                break;
            case 6:

                printTheNodesBackwards();
                break;
            case 0:
                break;
                case 7:
               DeleteNodeFromStartNode();
                break;
            case 8 :
                DeleteAll();
                break;
            case 9 :
                DeleteAny();
                break;
            case 11 :
                printOdd();
                break;
            case 12 :
                ReplaceIt();
                break;
            case 13 :
                SortTheList();
                break;
            case 14 :
                SizeOfN();
                break;
            case 15 :
                PrintRandomNumbers();
                break;
            case 16 :
                PrintPrimeNumbers();
                test();
                break;
            case 17 :
                HowMany();
                break;
            case 18 :
                RemoveDuplicate();
                break;
            default:
                printf("please enter a valid number\n\n");
                break;
        }

    } while (choice != 0);



    return 0;
}

