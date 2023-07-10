#include <stdio.h>

//func
int evensum(){
int bag;
printf("input number: ");
scanf("%d",&bag);
//terminal
if(bag==-1)return 0;
//recursion
if(bag%2==0)return evensum()+bag;
else evensum();
}
//declare
int num;



//main
int main(){

//process
num=evensum();

//out
printf("even number sum value:%d\n",num);
//esc
return 0;
}
