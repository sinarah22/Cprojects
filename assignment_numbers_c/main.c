#include <stdio.h>
#include <stdlib.h>

int main()
{
    //mentioning the values
    int IM;
    //use float so that we can get decimal numbers
    float n1=0;
    float n2=0;
    float n3=0;
    float n4=0;
    float n5=0;
    float Radius;
    printf("select one of the options from the menu :(Just One!) \n");
    printf("1-for question : 2-19 : \n2-for question : 2-20 : \n3-for question : 2-23  \n4-for question : 2-33  \n");
    scanf("%d",&IM);
    switch(IM)
    {
    case 1:
        puts("(Arithmetic, Largest Value and Smallest Value)");
        puts("I need Three numbers\n");
        puts("Enter the first number:");
        scanf("%f",&n1);
        puts("Enter the second number:");
        scanf("%f",&n2);
        puts("Enter the thirth number:");
        scanf("%f",&n3);
        printf("%.2f,%.2f,%.2f \n",n1,n2,n3);
        printf("The Sum is : %.2f \n",n1+n2+n3);
        //if statment
        if( n1>=n2 && n1>=n3 )
        printf("%.2f is the largest number.\n", n1);
    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number.\n", n2);
    if( n3>=n1 && n3>=n2 ){
        printf("%.2f is the largest number.\n", n3);}
        if(n1<=n2 && n1<=n3){
        printf("%.2f is the smalest number.", n1);}
        if(n2<=n1 && n2<=n3){
            printf("%.2f is the smalest number.", n2);}
        if(n3<=n1 && n3<=n2){
            printf("%.2f is the smalest number.", n3);}
            //printing the average
            printf("\nThe average is : %.2f",(n1+n2+n3)/3);

        break;
    case 2:
        puts("Diameter, Circumference and Area of a Circle");
        puts("Enter the Radius of the circle");
        scanf("%f", &Radius);
    printf("Diameter is %.3f\n", 2 * Radius);
    printf("Circumference is %.3f\n", 2 * 3.14159 * Radius);
    printf("Area is %.3f\n", 3.14159 * Radius * Radius);
        break;
        case 3:
            puts("(Largest and Smallest Integers)");
        puts("Here we go,i need five numbers from you \nEnter First number");
        scanf("%f",&n1);
        puts("Enter the second number");
        scanf("%f",&n2);
        puts("Enter the thirth number");
        scanf("%f",&n3);
        puts("Enter the fourth number");
        scanf("%f",&n4);
        puts("Enter the fifth number");
        scanf("%f",&n5);
        printf("%.2f,%.2f,%.2f,%.2f,%.2f \n",n1,n2,n3,n4,n5);
        //if statment
        if( n1>=n2 && n1>=n3 && n1>=n4 && n1>=n5)
        printf("%.2f is the largest number.\n", n1);
    if( n2>=n1 && n2>=n3 && n2>=n4 && n2>=n5  )
        printf("%.2f is the largest number.\n", n2);
    if( n3>=n1 && n3>=n2 && n3>=n4 && n3>=n5 ){
        printf("%.2f is the largest number.\n", n3);}

        if( n4>=n1 && n4>=n2 && n4>=n3 && n4>=n5 ){
        printf("%.2f is the largest number.\n", n4);}

        if( n5>=n1 && n5>=n2 && n5>=n4 && n5>=n3 ){
        printf("%.2f is the largest number.\n", n5);}
        //smallest number
         if( n1<=n2 && n1<=n3 && n1<=n4 && n1<=n5)
        printf("%.2f is the Smallest number.\n", n1);
    if( n2<=n1 && n2<=n3 && n2<=n4 && n2<=n5  )
        printf("%.2f is the Smallest number.\n", n2);
    if( n3<=n1 && n3<=n2 && n3<=n4 && n3<=n5 ){
        printf("%.2f is the Smallest number.\n", n3);}

        if( n4<=n1 && n4<=n2 && n4<=n3 && n4<=n5 ){
        printf("%.2f is the Smallest number.\n", n4);}

        if( n5<=n1 && n5<=n2 && n5<=n4 && n5<=n3 ){
        printf("%.2f is the Smallest number.\n", n5);}

        break;
        case 4:
            puts("Car-Pool Savings Calculator");
            puts("Total miles driven per day.");
            scanf("%f",&n1);
        puts("Cost per gallon of gasoline.");
        scanf("%f",&n2);
        puts("Average miles per gallon.");
        scanf("%f",&n3);
        puts("Parking fees per day.");
        scanf("%f",&n4);
        puts("Tolls per day");
        scanf("%f",&n5);
        //Cost per gallon * Average miles per gallon * Total miles driven per day + Parking fees + tolls per day
        printf("Your costs per day of driving to work is :%.2f \n",(n1*n2*n3)+n5+n5);
        if((n1*n2*n3)+n5+n5>50){
        puts("With all these prices!!!I recommend you to get a Compass card and go to work by public transportation!!!!!");
        }
        if((n1*n2*n3)+n5+n5<0){
            puts("well it seems that not only you don`t have to pay but also they have to pay you");
            puts("Or WE CAN SAY AM I A JOCK YO YOU!!");
        }
        break;
//if the user typed a char that was not mentioned in menu
    default:
        puts("you choosed none of the option above");
        break;
    }




    return 0;
}
