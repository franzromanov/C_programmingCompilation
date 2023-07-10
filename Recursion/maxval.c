#include <stdio.h>
//func
int maxval(int buff){

int inp,lockey;
printf("input num: ");
scanf("%d",&inp);
buff--;

if(buff>0){
lockey=maxval(buff);
if(lockey>inp){return lockey;}
if(lockey<=inp)return inp;

}
//if(buff<=0) return 0;
return inp;
//printf("%d",lockey);

}

//declare
int buffer,poles;


//main
int main(){
//user_input
printf("input buffer: ");
scanf("%d",&buffer);

//process
int poles=maxval(buffer);

//out
printf("maximum value: %d\n",poles);

//esc
return 0;
}
