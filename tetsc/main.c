#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{
//    //make space between charcters
//    char str[20];
//    scanf("%s",str);
//
//    int j = 0;
//    while(str[j] != '\0'){
//        printf("%c ",str[j]);
//        j+=1;
//    }
//**********************************************************
for(int=1;i<6;i+=1){
    printf("factorial %d is %d= %d \n",i,i,factorial(i));}



    return 0;
}
int factorial(int n){
if(n==1){
    return 1;
}
return n*factorial(n-1);

}
