#include <stdio.h>

//defineStruct
struct date{int day;int month; int year;};


//declare
struct date death;

//main
int main(){
//inp
printf("define day:");
scanf("%d",&death.day);
printf("define month:");
scanf("%d",&death.month);
printf("define year:");
scanf("%d",&death.year);


//out
printf("Dead since %d/%d/%d\n",death.day,death.month,death.year);

//ec
return 0;
}
