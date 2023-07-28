#include <stdio.h>

//declare
int count;
char w1,w2;


//func
void _REC_B(int count,char w1, char w2){
 
 if(count>0){

  fprintf(stdout,"%c",w1);
  _REC_B(count-1,w1,w2);
  fprintf(stdout,"%c",w2);

}

}

//main
int main(){
//user_inp
 fprintf(stdout,"\e[0;94m[ENTRY]\e[0;97m: ");
 fscanf(stdin,"%d,%c,%c",&count,&w1,&w2);

//call
 fprintf(stdout,"\e[0;94m\n\n:::[OUT]:::\e[0;97m\n\n");
 _REC_B(count,w1,w2);
 fprintf(stdout,"\n\n");

//esc
 return 0;
}
