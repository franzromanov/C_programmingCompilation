#include <stdio.h>
//func
int digcount(int num){
if(num/10==0) return 1;
return digcount(num/10)+1;
}


//declare
int inp;

//main
int main(){
//user_input
printf("input number: ");
scanf("%d",&inp);
inp=digcount(inp);
printf("number of digits: %d\n",inp);

//escape
return 0;
}
