#include <stdio.h>

//func
int sumdig(int num){
if(num/10==0)return num;

return sumdig(num/10)+num%10;
}

//declare
int inp;

//main
int main(){
printf("input number: ");
scanf("%d",&inp);

//process
inp=sumdig(inp);
printf("sum of digits: %d\n",inp);

//escape
return 0;
}
