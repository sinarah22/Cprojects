#include <stdio.h>
#include <stdlib.h>
typedef struct Node Nodeptr;
typedef struct Node{
int data;
Nodeptr * next ;
Nodeptr * prev ;

}Nodeptr;

 Nodeptr * start;
 Nodeptr * end;
int main()
{
    Nodeptr * Node1 = (Nodeptr *)malloc(sizeof(Nodeptr));

    start = Node1;
    end  = Node1;

    Node1->data =100;
    Node1->next =NULL;
    Node1->prev =NULL;


    Nodeptr * Node2 = (Nodeptr *)malloc(sizeof(Nodeptr));

    end  = Node2;
    Node2->data =900;
    Node2->next =NULL;
    Node2->prev =Node1;
    Node1->next =Node2;



    return 0;
}
