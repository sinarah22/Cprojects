#include <stdio.h>
#include <stdlib.h>
struct Employee{
char Name[20];
char LastName[20];
int Type;
double Salary;
float Hours;
float Perhour;
float Sales;
int Piece;
}employees[10];// this is global and accessble to all functions


int main()
{
puts("welcome to the salary caculator ");


for (int i = 0; i <10 ; i++)
	{
		printf("Employee name: ");
		scanf("%s", employees[i].Name);
		puts("");
		printf("Employee lastname: ");
		scanf("%s", &employees[i].LastName);
		puts("");
		puts("Employee type:(Select salary plan of your employee just enter the number)");
		puts("1. Full time, they get a preset bi weekly salary");
        puts("2. Commission based, they get 30% of their sales");
        puts("3. Piece workers, they get $10 a piece");
        puts("4. Hourly worker, they get $20 per hour under 40 hours a week, $30 for the remaining over time");
        puts("5. Contract, they will get a certain amount with no tax deduction ");


        //i know switch case is better but i liked to use both so thats why i used if else here
		scanf("%d", &employees[i].Type);
		if(employees[i].Type==4 ){
            puts("How many hours did you work?");
            scanf("%f", &employees[i].Hours);
		}
		else if(employees[i].Type==2){
            puts("Enter the Amount of your total Sales:") ;
            scanf("%f", &employees[i].Sales);
        }
        else if(employees[i].Type==3){
            puts("How many pieces did you do?");
            scanf("%d", &employees[i].Piece);
          }



	}
	for (int i = 0; i < 10; i++)
	{
		puts("____________________________________________________");
		printf("%d - Employee information", i+1);
		printf("Name: %s\n", employees[i].Name);
		printf("LastName: %s\n", employees[i].LastName);
		printf("Type: %d\n", employees[i].Type);
		switch(employees[i].Type){
    case 1 :
        printf("%s","Your salary as a full time worker for 2 weeks is :");
        employees[i].Salary= 20000;
        break;
        case 2 :
         printf("%s","Your salary as a Commission based worker is :");
          employees[i].Salary=(employees[i].Sales*0.3);
          break;
        case 3 :
            printf("%s","Your salary as a piece worker is :");
           employees[i].Salary =employees[i].Piece*10;
           break;
        case 4 :
            printf("%s","Your salary as a Hourly worker is :");
            if(employees[i].Hours>40){
              printf("You worked %.1f hours overtime\nYour salary as a piece worker is ",employees[i].Hours-40);
              employees[i].Salary=(40*20)+((employees[i].Hours-40)*30);
            }
            else{
              employees[i].Salary= employees[i].Hours*20;
            }
            break;
        case 5 :
            printf("%s","Your salary as a Contract worker is :");
            employees[i].Salary=17000;
            break;}


		printf("%.1f $\n", employees[i].Salary);
		puts("____________________________________________________");
	}
    return 0;
}
