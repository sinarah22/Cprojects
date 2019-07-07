#include <stdio.h>
#include <stdlib.h>
int GlobalVar;
int Add(int,int);
//function prototype
void printName();
int main()
{
    int x,sum;
    printf("%s","type a number :");
    scanf("%d",& GlobalVar);
    printName();
    printf("%s","Type your second number to add ");
    scanf("%d",& x);
    printf("%s","The sum is :");
    sum= Add(GlobalVar,x);
    printf("%d \n",sum);
    printf("%d",GlobalVar);
    printf("%s","  Global variable via Main");

}
int Add(int A,int  B){
return A+B;
}
void printName(){
printf("%s \n","Soheil");
printf("%s","GlobalVar via printName  ");
printf("%d \n",GlobalVar);
}
