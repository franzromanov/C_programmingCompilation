#include <stdio.h>

//func
int minval(int buff){
int inp,lockey;
printf("input number: ");
scanf("%d",&inp);
buff--;
if(buff>0){
lockey=minval(buff);
if(lockey<inp)return lockey;
if(lockey>=inp)return inp;
}


return inp;
}


//declare
int buffer,poles;

int main(){
//user_inp
printf("input buffer: ");
scanf("%d",&buffer);

//process
poles=minval(buffer);

//out
printf("%d\n",poles);

//esc
return 0;
}
