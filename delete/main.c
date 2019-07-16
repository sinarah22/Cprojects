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
    Nodeptr * Node2 = (Nodeptr *)malloc(sizeof(Nodeptr));

    start = Node1;
    end  = Node2;

    Node1->data =100;
    Node1->next =Node2;
    Node1->prev =NULL;
    Node2->data =900;
    Node2->next =NULL;
    Node2->prev =Node1;



    return 0;
}
