#include <stdio.h>

//declare
int num;
char word;


//func
int _REC_D(int count){
 int units=count%10;
 int tens=(count/10)%10;
 
 if(count<100){
  if(tens<units)return 1;
  if(tens>units)return -1;
  else return 0;
}
 
 int track=_REC_C(count/10);
 if(track==1&&tens<units)return 1;
 if(track==-1&&tens>units)return -1;
 return 0;

}


int main(){
//user_inp
 fprintf(stdout,"\e[0;94m[ENTRY]\e[0;97m:");
 fscanf(stdin,"%d",&num);



//call
 fprintf(stdout,"\n\n\e[0;94m:::[OUT]:::\e[0;97m\n\n");
 if(_REC_D(num)==1)fprintf(stdout,"ASCENDING");
 if(_REC_D(num)==-1)fprintf(stdout,"DESCENDING");
 if(_REC_D(num)==0)fprintf(stdout,"NONE");
 fprintf(stdout,"\n\n");
//esc
 return 0;
}
