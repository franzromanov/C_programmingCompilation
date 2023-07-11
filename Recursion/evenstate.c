#include <stdio.h>

//func
int evenstate(int num){
//every number that is an even wil always had an even number in it atleast one on it last digit and every even number wil always can be divided completely by 2
if(num%2==0)return 1;
if(num/10!=0)evenstate(num/10);
else return 0;
}

//declare
int drop,num;


//main
int main(){
//user_inp
printf("input number: ");
scanf("%d",&num);

//process
drop=evenstate(num);
//out
if(drop==1)printf("sum of every even number in %d is even\n",num);
if(drop==0)printf("sum of every even number in %d is odd\n",num);

//esc
return 0;
}
