#include <stdio.h>
#include <stdlib.h>
   typedef struct student {

	char name[20];
	float gpa;
	int birth;
}stdntt;
int main()
{
    stdntt student1;
    int studentnumber;
    puts("how many student do you want to create");
    scanf("%d",&studentnumber);
    stdntt *StudentPtr  = (stdntt *)malloc(sizeof(stdntt)*studentnumber);
    for(int i =0;i<studentnumber;i++){

		printf("Students name: ");
		scanf("%s",StudentPtr->name);
		puts("");
		printf("Students birth: ");
		scanf("%d", &(StudentPtr->birth));
		puts("");
		printf("Students term: ");
		scanf("%f", &(StudentPtr->gpa));
		puts("");
		StudentPtr++;
    }

    StudentPtr-=studentnumber;

    for(int i =0;i<studentnumber;i++){

		printf("Student number %d name is: %s \n",i+1,StudentPtr->name);
		printf("Student number %d birth is: %d \n",i+1,StudentPtr->birth);
		printf("Student number %d gpa is: %.1f \n",i+1,StudentPtr->gpa);
		puts("------------------------------------");
StudentPtr++;

    }


    return 0;
}
