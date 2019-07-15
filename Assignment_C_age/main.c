#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //setting the values
    int day;
    int month;
    int I_year;
    int I_mon;
    int I_day;
    //convert the time to int
    time_t t = time(NULL);
struct tm tm = *localtime(&t);
//ask user to input the data
puts("Please Enter The Year Of Birth");
scanf("%d",&I_year);
puts("Please Enter The Month Of Birth");
scanf("%d",&I_mon);
puts("Please Enter The day Of Birth");
scanf("%d",&I_day);
//we don`t have negative value for time so we do this
    month=tm.tm_mon + 1-I_mon;
    if(month<0){
        I_year+=1;
        month=month+12;
    }
    //we don`t have negative value for time so we do this
    day= tm.tm_mday-I_day;
    if(day<0){
    I_mon+=1;
      day=day+30;
    }
printf("%s %d %s ","you are",1900+tm.tm_year-I_year,"Years old and ");
//printf("%d-%d=%d \n",tm.tm_year+1900,I_year,1900+tm.tm_year-I_year);
printf("%d %s",month,"Months and ");
printf("%d %s",day,"Days.\n");
printf("%s %d","Days of living till now :",(((1900+tm.tm_year-I_year)*365)+((tm.tm_mon + 1-I_mon)*30)+day));

if(1900 + tm.tm_year - I_year < 10){
    puts("\nYour Child wish i was your age!!!");
    system("COLOR A");
}
else if (10< 1900 + tm.tm_year - I_year &&  1900 + tm.tm_year- I_year <30){
    puts("\nYour young!!! try to enjoy it cause there is not a second time ");
    system("COLOR A");
}
else if(30 < 1900 + tm.tm_year - I_year && 1900 + tm.tm_year - I_year <50){
    puts("\nTry less fastfood and go on more healty diet ");
    system("COLOR B");
}
else if(50< 1900+ tm.tm_year - I_year && 1900+ tm.tm_year - I_year <90){
    puts("\nSay Hi to your grandchild!!!! ");
    system("COLOR E");
}
 if(90< 1900 + tm.tm_year - I_year){
    puts("\nBitch!!! DIEEEEEEEEEEEE@#$#%#&# ");
    system("COLOR C");

}
    return 0;
}

