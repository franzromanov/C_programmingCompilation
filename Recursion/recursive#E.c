#include <stdio.h>

//declare
int num;
char word;


//func
int _REC_E(int count){
 int units=count%10;
 int tens=(count/10)%10;
 
 if(count<100){
  if(count<10) return 0;
  return 1;
}
 
 int dump;
 dump = _REC_E(count/10)+1;
 if(dump%2!=0)return 1;
 else return 0;
}


int main(){
//user_inp
 fprintf(stdout,"\e[0;94m[ENTRY]\e[0;97m:");
 fscanf(stdin,"%d",&num);



//call
 fprintf(stdout,"\n\n\e[0;94m:::[OUT]:::\e[0;97m\n\n");
 if(_REC_E(num)==1)fprintf(stdout,"EVEN_DIGITS");
 if(_REC_E(num)==0)fprintf(stdout,"ODD_DIGITS");
 fprintf(stdout,"\n\n");
//esc
 return 0;
}
