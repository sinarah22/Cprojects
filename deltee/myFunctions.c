//
//  myFunctions.c
//  project1
//
//  Created by Saygin Guven on 2019-07-16.
//  Copyright © 2019 Saygin Guven. All rights reserved.
//

#include "myFunctions.h"
#include <stdlib.h>

typedef struct Node Nodeptr;

typedef struct Node
{
    int data;
    Nodeptr* next;
    Nodeptr* previous;
} Nodeptr;

Nodeptr * start;
Nodeptr * endNode;

void printTheNodes() {
    Nodeptr * currentNode = (Nodeptr *)malloc(sizeof(Nodeptr));
    if(start ==NULL && endNode == NULL)
        {
        puts("No Node to print");

    }else{
        Nodeptr * currentPtr = start;
        while(currentPtr != NULL){



        printf("%d ->",currentPtr->data);
        currentPtr= currentPtr->next;

        }
        printf("NULL\n");
        puts("------------");
    }
    puts("");

}

void printTheNodesBackwards() {
    Nodeptr * currentNode = (Nodeptr *)malloc(sizeof(Nodeptr));
    if(start ==NULL && endNode == NULL)
        {
        puts("No Node to print");

    }else{
        Nodeptr * currentPtr = endNode;
        while(currentPtr != NULL){



            printf("%d ->",currentPtr->data);
            currentPtr= currentPtr->previous;

        }
        printf("NULL\n");
        puts("------------");
    }
    puts("");

}

void addToLeft() {
    Nodeptr * currentNode = (Nodeptr *)malloc(sizeof(Nodeptr));
    if(start == NULL && endNode == NULL){
        start = currentNode;
        endNode = currentNode;
        printf("What is the data ? :");
        scanf("%d",&currentNode->data);
        currentNode->next = NULL;
        currentNode->previous =NULL;
    }else{
        puts("add one more node");
        scanf("%d",&currentNode->data);
        currentNode->previous = NULL;
        currentNode->next = start;
        start->previous =currentNode;
        start = currentNode;

    }







}

void addToRight(){
Nodeptr * currentNode = (Nodeptr *)malloc(sizeof(Nodeptr));

    if(start ==NULL && endNode == NULL){
        start = currentNode;
        endNode = currentNode;
        printf("what is the data? :");
        scanf("%d",&currentNode->data);
        currentNode->next = NULL;
        currentNode->previous = NULL;
    }else{
        puts("add one more node");
        printf("what is the data? :");
        scanf("%d",&currentNode->data);
        currentNode->previous = start;
        currentNode->next = NULL;
        endNode->next =currentNode;
        endNode = currentNode;

    }
}

void addMiddleAfter() {
    if(start ==NULL && endNode==NULL){
        printTheNodes();

        return;
    }
    int data;
    puts("which data you are looking for?");
    scanf("%d",&data);
    //search
    Nodeptr * current = start;

    while(current != NULL){
            if(data == current->data){
                //found it!
                if(current == endNode){
                    addToRight();
                    break;
                }
                Nodeptr * newNode =(Nodeptr *)malloc(sizeof(Nodeptr));
                printf("what is the data");
                scanf("%d",&newNode->data);
                Nodeptr * currentNext = current->next;
                current->next = newNode;
                newNode->previous = current;
                newNode->next = currentNext;
                currentNext->previous = newNode;
                printTheNodes();
                return;

            }
        current = current->next;

    }
    if(start==endNode){

        addToRight();
        return;
    }
puts("check your data it`s not in the list");
}


void addMiddleBefore() {

}
void DeleteNodeFromStart(void){


    if( start == endNode)
        {
        free(start);
        start= NULL;
        endNode = NULL;

        puts("cant delete the node!!");
    }else{
        Nodeptr * temPtr;
        temPtr = start->next;
        temPtr->previous = NULL;
        free(start);
        start = temPtr;
        printTheNodes();
        }
}


void menu() {
    puts("");
    printf("\t\twelcome, please select one\n");
    printf("\t\t1- add a node to left\n");
    printf("\t\t2- add a node to right\n");
    printf("\t\t3- add a node to middle after a node\n");
    printf("\t\t4- add a node to middle before a node\n");
    printf("\t\t5- printf the list forward\n");
    printf("\t\t6- printf the list backward\n");
    printf("\t\t7- delete a node (front)\n");
    printf("\t\t8- delete a node (back)\n");
    printf("\t\t0- exit\n");
    printf("? :  ");
}
