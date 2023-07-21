#include <stdio.h>

//declare
FILE* file;
char dump,inp;
int i=0;


//main
int main(){
//user_inp
 fprintf(stdout,"\e[0;91m[INPUT] \e[0;97minput character: ");
 fscanf(stdin,"%c",&inp);
//open_f
 file=fopen("text.txt", "r");
//check_err
 if(file!=NULL){
  //operate_read
  while(dump!=-1){
   dump=fgetc(file);
   if(dump==inp)i+=1;
}
}
//out
 fprintf(stdout,"\e[0;91m[counter] \e[0;97m%c::%d\n",inp,i);


//esc
 fclose(file);
 return 0;
}
