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

    Node1->data =100;
    Node1->data =NULL;
    Node1->data =NULL;



    return 0;
}
