#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//func
int pw(int num, int power){

if(power==1)return num;

return num*pw(num,power-1); 
}


//declare
FILE* file;
int num;
int range;
int power;

//main
int main(){
//user_inp
 fprintf(stdout,"input [range]: ");
 fscanf(stdin,"%d",&range);
 fprintf(stdout,"input [power]: ");
 fscanf(stdin,"%d",&power);

//open_f
 file=fopen("text.txt","w");
 if(file!=NULL){
  for(int i=1;i<=range;i++){
  num=pw(i,power);
  fprintf(file,"%d^%d=%d\n",i,2,num);
}
}








//esc
 fclose(file);
 return 0;
}
