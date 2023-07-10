#include <stdio.h>

//func
int evencount(){
int bag;
printf("input number: ");
scanf("%d",&bag);
//terminal
if(bag==-1)return 0;
if(bag%2==0)return evencount()+1;
else evencount();

}
//declare
int num;

//main
int main(){
//process
num=evencount();

//out
printf("quantities of even number is: %d\n",num);

//esc
return 0;
}
