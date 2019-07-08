#include <stdio.h>
#include <stdlib.h>

int main()
{
    int IM;
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;
    int n5=0;
    int Radius;
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
        puts("Enter the Radius of the circle");
        scanf("%d", &Radius);
    printf("Diameter is %d\n", 2 * Radius);
    printf("Circumference is %.1f\n", 2 * 3.14159 * Radius);
    printf("Area is %f\n", 3.14159 * Radius * Radius);
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
        if( n1>=n2 && n1>=n3 && n1>=n4 && n1>=n5)
        printf("%d is the largest number.\n", n1);
    if( n2>=n1 && n2>=n3 && n2>=n4 && n2>=n5  )
        printf("%d is the largest number.\n", n2);
    if( n3>=n1 && n3>=n2 && n3>=n4 && n3>=n5 ){
        printf("%d is the largest number.\n", n3);}
        break;
        if( n4>=n1 && n4>=n2 && n4>=n3 && n4>=n5 ){
        printf("%d is the largest number.\n", n4);}
        break;
        if( n5>=n1 && n5>=n2 && n5>=n4 && n5>=n3 ){
        printf("%d is the largest number.\n", n5);}
        break;
    default:
        puts("you choosed none of the option above");
    }




    return 0;
}
