#include <stdio.h>

//declare
int num;
int digit;

//func
int _REC_E(int num,int digit){
 
 int units;

 if(num<10){if(num==digit)return 0;else return 1;}
 else units=num%10;
 
 int dump; 
 dump = _REC_E(num/10,digit)+1;
 if(dump%2!=0 && units==digit)return 1;
 else return 0;
}


int main(){
//user_inp
 fprintf(stdout,"\e[0;94m[ENTRY]\e[0;97m:");
 fscanf(stdin,"%d,%d",&num,&digit);



//call
 fprintf(stdout,"\n\n\e[0;94m:::[OUT]:::\e[0;97m\n\n");
 if(_REC_E(num,digit)==1)fprintf(stdout,"EVEN_DIGITS");
 if(_REC_E(num,digit)==0)fprintf(stdout,"ODD_DIGITS");
 fprintf(stdout,"\n\n");
//esc
 return 0;
}
