#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userinput;
    puts("give me the size of your integers");
    scanf("%d",&userinput);
    int * Iptr;
    Iptr  = (int *)malloc(sizeof(int)*userinput);

    for(int i=0;i<userinput;i++){
            printf("what is the value of %d",i);
    scanf("%d",&*Iptr);

    printf("the location of %d is %p the value is %d: \n",i+1,Iptr,*Iptr);
    Iptr++;
    }
    Iptr-=userinput;
    printf("this is your first value %d",*Iptr);
    return 0;
}
