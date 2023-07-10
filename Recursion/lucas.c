#include <stdio.h>

//func
int lucas(int num){
if(num==-1)return (-1);
if(num==0)return 2;
if(num==1)return 1;
if(num>1)return lucas(num-1)+lucas(num-2);  
if(num<0)return lucas(num+2)-lucas(num+1);
}

//declare
int num;

//main
int main(){
//user_inp
printf("input number: ");
scanf("%d",&num);

//process
num=lucas(num);

//out
printf("%d\n",num);


//esc
return 0;
}
