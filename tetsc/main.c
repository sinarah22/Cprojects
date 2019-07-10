#include <stdio.h>
#include <stdlib.h>
#define size 10
int factorial(int n);
int fibo(int n);
struct student{
int id;
char *name[20];
float gpa;
int term;
};
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
//float numbers[size]= {0};
//float *poinee;
//poinee= numbers;
//for(int i=2git;i<10;i+=2){
//    *poinee=i;
//    printf("pointer %d, value %.1f \n",1+i/2,*poinee);
//    poinee+=1;
//}
//******************
struct student student1;
student1.id=100;
//student1.name="Sina";
//this down code is because the code up name is a char and does not work with the code up
strcpy( student1.name, "Sara" );
student1.gpa; 4.0;
student1.term= 3;

int student[3];
for(int i=1;i<=3;i++){
puts("type Id");
scanf("%d",&student1.id);
puts("type name");
scanf("%s",&student1.name);
puts("type gpa");
scanf("%f",&student1.gpa);
puts("type term");
scanf("%d",&student1.term);
printf("student %d name is : %s",i,student1.name);
printf("\nstudent %d id is : %d",i,student1.id);
printf("\nstudent %d name is : %.2f",i,student1.gpa);
printf("\nstudent %d name is : %d\n",i,student1.term);
student[i];

}
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
