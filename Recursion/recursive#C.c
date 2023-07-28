#include <stdio.h>


//declare
int count;
char word;


//func
void _REC_C(int count,char word){
 
 if(count>0){
  fprintf(stdout,"%c",word);
  _REC_C(count-1,word);
  fprintf(stdout,"%c",word-32);
}

}


int main(){
//user_inp
 fprintf(stdout,"\e[0;94m[ENTRY]\e[0;97m:");
 fscanf(stdin,"%d,%c",&count,&word);



//call
 fprintf(stdout,"\n\n\e[0;94m:::[OUT]:::\e[0;97m\n\n");
 _REC_C(count,word);
 fprintf(stdout,"\n\n");
//esc
 return 0;
}
