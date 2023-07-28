#include <stdio.h>
#include <stdlib.h>

//declare
int total,num1,num2;

//func
void _REC_A(int total, int num1, int num2){

 if(total>0){
  printf("%d",num1);
  _REC_A(total-1,num1,num2);
  printf("%d",num2);

} 
}

//main
int main(){

//user_inp
 fprintf(stdout,"\e[0;94m[ENTRY]\e[0;97m: ");
 fscanf(stdin,"%d,%d,%d",&total,&num1,&num2); 


//process
 _REC_A(total,num1,num2);
 printf("\n");

//esc
 return 0;
}
