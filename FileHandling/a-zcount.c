#include <stdio.h>

//declare
char min,max;
int buff;
FILE* file;
char dump;


int main(){
 min='a';
 max='z';
 buff=(max-min)+1;
 int arr[buff];
//regulate>>>0
 for(int i=0;i<buff;i++)arr[i]=0;
 
//open_f
 file=fopen("text.txt","r");
//check_err
 if(file!=NULL){
  //operate_Read
  while(dump!=-1){
   dump=fgetc(file);
   if(dump>='a' || dump<='z')arr[dump-min]++;

}
}
//out
for(int i=0;i<buff;i++)fprintf(stdout,"\e[0;91m[char:%c] :: \e[0;97m%d\n",i+min,arr[i]);


//esc
 fclose(file);
 return 0;
}
