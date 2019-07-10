#include <stdio.h>
#include <stdlib.h>
#define size 10
int factorial(int n);
int fibo(int n);
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
//for(int=1;i<6;i+=1){
//    printf("factorial %d is %d= %d \n",i,i,factorial(i));}
//****************************************************
//for (int i=1;i<20;i+=1){
//    printf("fibo %d : %d \n",i,fibo(i));
//}



//}
//*****************
float numbers[size]= {0};
float *poinee;
poinee= numbers;
for(int i=2;i<10;i+=2){
    *poinee=i;
    printf("pointer %d, value %.1f \n",1+i/2,*poinee);
    poinee+=1;

}
//******************
   return 0;
}
//int factorial(int n){
//if(n==1){
//    return 1;
//}
//return n*factorial(n-1);
//
//}
//****************
//int fibo(int n){
//    if(n==1){
//        return 0;
//    }
//if (n==2){
//return 1;}

//return fibo(n-1)+fibo(n-2);
//}
//***************************
