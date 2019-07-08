#include <stdio.h>
#include <stdlib.h>

int main()
{
    int IM;
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    printf("select of the options from the menu : \n");
    printf("1-for question : 2-19 : \n2-for question : 2-20 : \n3-for question : 2-23  \n4-for question : 2-33  \n");
    scanf("%d",&IM);
    switch(IM)
    {
    case 1:
        puts("I need Three numbers");
        puts("Enter the first number");
        scanf("%d",&n1);
        puts("Enter the second number");
        scanf("%d",&n2);
        puts("Enter the thirth number");
        scanf("%d",&n3);
        printf("%d,%d,%d \n",n1,n2,n3);
        printf("The Sum is : %d \n",n1+n2+n3);
        if( n1>=n2 && n1>=n3 )
        printf("%d is the largest number.\n", n1);
    if( n2>=n1 && n2>=n3 )
        printf("%d is the largest number.\n", n2);
    if( n3>=n1 && n3>=n2 ){
        printf("%d is the largest number.\n", n3);}
        if(n1<=n2 && n1<=n3){
        printf("%d is the smalest number.", n1);}
        if(n2<=n1 && n2<=n3){
            printf("%d is the smalest number.", n2);}
        if(n3<=n1 && n3<=n2){
            printf("%d is the smalest number.", n3);}
            printf("\nThe average is : %d",(n1+n2+n3)/3);

        break;
    case 2:
        puts("hi");
        break;
        case 3:
        puts("Here we go,i need five numbers from you \nEnter First number");
        scanf("%d",&n1);
        puts("Enter the second number");
        scanf("%d",&n2);
        puts("Enter the thirth number");
        scanf("%d",&n3);
        puts("Enter the fourth number");
        scanf("%d",&n4);
        puts("Enter the fifth number");
        scanf("%d",&n5);
        printf("%d,%d,%d,%d,%d \n",n1,n2,n3,n4,n5);
        break;
    default:
        puts("you choosed none of the option above");
    }




    return 0;
}
