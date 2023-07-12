#include <stdio.h>
//struct_defiine
typedef struct date{int day; int month; int year;}Date;

//func
void nextday(){
Date inp;
int state=0;
printf("input day: ");
scanf("%d",&inp.day);
printf("input month: ");
scanf("%d",&inp.month);
printf("input year: ");
scanf("%d",&inp.year);

if(inp.day<31)inp.day++;
if(inp.day==31&&inp.month<12){inp.day=1;inp.month++;}
if(inp.day==31&&inp.month==12){inp.day=1;inp.month=1;inp.year++;}
//switch
else {printf("error:input above limit!\n");state=1;}
if(state==0)printf("next date is %d/%d/%d\n",inp.day,inp.month,inp.year);
}

//main
int main(){

nextday();


//esc
return 0;
}
