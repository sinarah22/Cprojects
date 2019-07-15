#include <stdio.h>
#include <stdlib.h>

int main()
{
    // how to create a key menu


    int userInput = 0;
    int start = 1;
    char name[20];


    do{
            puts("Welcome to C Program menu Let me Know your Name:");
            scanf("%s",name);
            printf("Hi!!! %s\n",name);

        puts("_______________");
        puts("1 - add 2 numbers");
        puts("2 - subtract 2 numbers");
        puts("3 - divide 2 numbers");
        puts("4 - multiply 2 numbers");
        puts("0 - exit");
        puts("_______________\n");

        printf("select one of the menu items\n");
        scanf("%d",&userInput);

        switch (userInput) {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                division();
                break;
            case 4:
                mult();
                break;
            case 0:
                start = 0;
                break;
            default:
                puts("Its not in the menu");
                break;
        }


    } while(start != 0);
    return 0;
}
void add(int n1,int n2){
puts("type first number");
scanf("%d",&n1);
puts("type second number");
scanf("%d",&n2);
printf("%d\n",n1+n2);
}
void sub(int n1,int n2){
puts("type first number");
scanf("%d",&n1);
puts("type second number");
scanf("%d",&n2);
printf("%d\n",n1-n2);
}
void division(int n1,int n2){
puts("type first number");
scanf("%d",&n1);
puts("type second number");
scanf("%d",&n2);
printf("%d\n",n1/n2);
}
void mult(int n1,int n2){
puts("type first number");
scanf("%d",&n1);
puts("type second number");
scanf("%d",&n2);
printf("%d\n",n1*n2);
}
