#include <stdio.h>
//func
int streamsum(int buff){
int ask;
printf("insert num: ");
scanf("%d",&ask);
if(ask==(-1))return 0;
if(ask<=buff)return streamsum(buff)+ask;
if(ask>buff) streamsum(buff);
}



//declare
int buffer;

//main
int main(){
//user input
printf("input buffer: ");
scanf("%d",&buffer);

//exec_func
int bag=streamsum(buffer);
printf("%d\n",bag);

//escape
return 0;
}
