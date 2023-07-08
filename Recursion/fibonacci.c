#include <stdio.h>
//func
int fibo(int index){
if(index==0) return 0;
if(index==1) return 1;
return fibo(index-1)+fibo(index-2);
}




//declare
int input;
//main
int main(){
printf("input index: ");
scanf("%d",&input);
input=fibo(input);
printf("%d\n",input);
return 0;
}
