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

Nodeptr * StartNode;
Nodeptr * endNode;

void printTheNodes() {
    Nodeptr * currentNode = (Nodeptr *)malloc(sizeof(Nodeptr));
    if(StartNode ==NULL && endNode == NULL)
        {
        puts("No Node to print");

    }else{
        Nodeptr * currentPtr = StartNode;
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
    if(StartNode ==NULL && endNode == NULL)
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
    if(StartNode == NULL && endNode == NULL){
        StartNode = currentNode;
        endNode = currentNode;
        printf("What is the data ? :");
        scanf("%d",&currentNode->data);
        currentNode->next = NULL;
        currentNode->previous =NULL;
    }else{
        puts("add one more node");
        scanf("%d",&currentNode->data);
        currentNode->previous = NULL;
        currentNode->next = StartNode;
        StartNode->previous =currentNode;
        StartNode = currentNode;

    }







}

void addToRight(){
Nodeptr * currentNode = (Nodeptr *)malloc(sizeof(Nodeptr));

    if(StartNode ==NULL && endNode == NULL){
        StartNode = currentNode;
        endNode = currentNode;
        printf("what is the data? :");
        scanf("%d",&currentNode->data);
        currentNode->next = NULL;
        currentNode->previous = NULL;
    }else{
        puts("add one more node");
        printf("what is the data? :");
        scanf("%d",&currentNode->data);
        currentNode->previous = endNode;
        currentNode->next = NULL;
        endNode->next =currentNode;
        endNode = currentNode;

    }
}

void addMiddleAfter() {
    if(StartNode ==NULL && endNode==NULL){
        printTheNodes();

        return;
    }
    int data;
    puts("which data you are looking for?");
    scanf("%d",&data);
    //search
    Nodeptr * current = StartNode;

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
    if(StartNode==endNode){

        addToRight();
        return;
    }
puts("check your data it`s not in the list");
}


void addMiddleBefore() {
 if(StartNode ==NULL && endNode==NULL){
        printTheNodes();

        return;
    }
    int data;
    puts("which data you are looking for? ");
    scanf("%d",&data);
    //search
    Nodeptr * current = StartNode;

    while(current != NULL){
            if(data == current->data){
                //found it!
                if(current == endNode){
                    addToLeft();
                    break;
                }
                Nodeptr * newNode =(Nodeptr *)malloc(sizeof(Nodeptr));
                printf("what is the data ? ");
                scanf("%d",&newNode->data);
                Nodeptr * currentPre = current->previous;
                current->previous = newNode;
                newNode->next = current;
                newNode->previous = currentPre;
                currentPre->next = newNode;
                printTheNodes();
                return;

            }
        current = current->next;

    }
    if(StartNode==endNode){

        addToLeft();
        return;
    }
puts("check your data it`s not in the list");
}





void DeleteNodeFromStartNode(void){


    if( StartNode == endNode)
        {
        free(StartNode);
        StartNode= NULL;
        endNode = NULL;

        puts("cant delete the node!!");
    }else{
        Nodeptr * temPtr;
        temPtr = StartNode->next;
        temPtr->previous = NULL;
        free(StartNode);
        StartNode = temPtr;
        printTheNodes();
        }
}
void DeleteAll(){
StartNode=NULL;
endNode=NULL;
puts("All Nodes Deleted Successfully");

}
void DeleteAny(){

    if(StartNode ==NULL && endNode==NULL){
        puts("No Nodes Too Delete");
        return;
    }


    int data;
    puts("Which Node You Are Going To Delete?");
    scanf("%d",&data);
    //search
    Nodeptr * current = StartNode;

    if(StartNode == endNode){

        DeleteAll();
        printTheNodes();
        return;
    }

    while(current != NULL){
            if(data == current->data){
                //found it!
                if(current == endNode){
                    Nodeptr * temPtr;
                    temPtr = endNode->previous;
                    temPtr->next = NULL;
                    free(endNode);
                    endNode = temPtr;
                    printTheNodes();
                    break;
                }
                current = NULL;

                free(current);


                return;

            }
        current = current->next;

    }


}
printOdd(){
      Nodeptr * current = StartNode;

 while(current != NULL){
        if(current->data %2 != 0){
           printf("%d -->",current->data);

        }


     current = current->next;
     if(StartNode==endNode){
        return;
     }
 }
puts("NUll");

}
ReplaceIt(){

 if(StartNode ==NULL && endNode==NULL){
        puts("No Nodes Too Delete");
        return;
    }


    int data;
    puts("Which data Do you want to replace ? ");
    scanf("%d",&data);
    //search
    Nodeptr * current = StartNode;

    while(current != NULL){
            if(data == current->data){
                //found it!
                puts("type the new Data");
                scanf("%d",&current->data);
                 printTheNodes();

                return;

            }
        current = current->next;

    }
puts("sorry it does`n exist in the list");

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
