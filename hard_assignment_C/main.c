#include <stdio.h>
#include <stdlib.h>

int main()
{
    //one dimensional array of integers with 10 elements that each element represent the 3 digit student numbers.
    int student_Arr[10];
    float Crazy_Arr [10][6] ;
    int SInput;
    for(int i=0;i<10;i++)
        {
        printf("Enter 3 digit number for student number %d :",i+1);
        scanf("%d",&student_Arr[i]);
    Crazy_Arr [i][0] =  student_Arr[i];
    }
    puts("\n");
    for(int i=0;i<10;i++)
        {
        printf("student number %d :",i+1);
        printf("\n%d \n",student_Arr[i]);
    }


//i hate this part this drive me crazy but now it works if you enter a student number that does not exist it will aks to enter the student number again
       int quiz1;
    int quiz2;
    int midterm;
    int finall;
    int assesmnet;
    int kj = 0;
    while(kj==0){
        puts("Enter number of student ");
        scanf("%d",&SInput);
        for(int i=0;i<10;i++)
        {
             if(Crazy_Arr[i][0]== SInput){
                    puts("student found!!");
                    printf("You are student number : %d\n",i+1);
                    //getiing the marks from user and put them in array
                    puts("first quiz mark: ");
    scanf("%d",&quiz1);
    Crazy_Arr[i][1]= quiz1;

    puts("second quiz mark : ");
    scanf("%d",&quiz2);
    Crazy_Arr[i][2]=quiz2;
    puts("midterm mark : ");
    scanf("%d",&midterm);
    Crazy_Arr[i][3]=midterm;
    puts("final mark : ");
    scanf("%d",&finall);
    Crazy_Arr[i][4]=finall;
    puts("Attendance the class mark : ");
    scanf("%d",&assesmnet);
    Crazy_Arr[i][5]=assesmnet;
    float finalmark;
    //setting the final score
    finalmark=((quiz1*0.1)+(quiz2*0.1)+(midterm*0.3)+(finall*0.4)+(assesmnet*0.1));
    //seeting the final score to the last 6 colomn of array
    Crazy_Arr[i][6]=finalmark;
    printf("\nYour Total Finall Score is :  %f \n",Crazy_Arr[i][6]);
    //check if user faild or pass
    if(Crazy_Arr[i][6]<70){
        puts("you failed,see you next term");
    }
    else if(Crazy_Arr[i][6]>90){
        puts("DUDE TAKE A REST!!");
    }
                    kj=1;
                    break;
             }

        }
    }






}
