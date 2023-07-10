#include <stdio.h>

//func
void ntoone(int buff){
if(buff>0){
printf("%d\n",buff);
ntoone(buff-1);
}
}


//declare
int num;


//main
int main(){
//user input
printf("input buffer: ");
scanf("%d",&num);

//process
ntoone(num);


return 0;
}
