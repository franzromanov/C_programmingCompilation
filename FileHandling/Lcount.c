#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//declare
FILE* file;
char dump;
int i;

//main
int main(){
//open_f
 file=fopen("text.txt","r");

//check_err
if(file!=NULL){
 
 //operate_(read)
 while(dump!=-1){
  dump=fgetc(file);
  if(dump==0xA)i+=1;

}
}
//out
 fprintf(stdout,"\e[0;94m[LineFeed]:\e[0;91m%d\n",i);

//esc
 fclose(file);
 return 0;
}
