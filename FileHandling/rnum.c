#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//declare
FILE* file;
int i,num,power,stat;
char c;

//main
int main(){
//open_f
 file=fopen("text.txt","r");
 if(file!=NULL){
 //readF
 while(1){
 
 fscanf(file,"%d^%d=%d",&i,&power,&num);
 stat=(int)fgetc(file);
 if(stat==-1)break;
 fprintf(stdout,"%d^%d=%d\n",i,power,num);
 
} 
}




//esc
 fclose(file);
 return 0;
}
