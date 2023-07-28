#include <stdio.h>

//declare
int num;
int digit;

//func
int _REC_F(int num,int digit){
 if(num<10){if(num==digit)return 0;else return 1;}
 if(num%10!=digit)return _REC_F(num/10,digit);
 else return !_REC_F(num/10,digit);
}


int main(){
//user_inp
 fprintf(stdout,"\e[0;94m[ENTRY]\e[0;97m:");
 fscanf(stdin,"%d,%d",&num,&digit);



//call
 fprintf(stdout,"\n\n\e[0;94m:::[OUT]:::\e[0;97m\n\n");
 if(_REC_F(num,digit)==1)fprintf(stdout,"EVEN_DIGITS");
 if(_REC_F(num,digit)==0)fprintf(stdout,"ODD_DIGITS");
 fprintf(stdout,"\n\n");
//esc
 return 0;
}

