#include <stdio.h> 

//declare
FILE* file;
char min='a';
char max='z';
char dump;
int buff;
int dumper[2]={0};


//main
int main(){

//counter::arr
 buff=(max-min)+1;
 int arr[buff];
 //regulate
 for(int i=0;i<buff;i++)arr[i]=0;

//open_f
 file=fopen("text.txt","r");
//check_err
 if(file!=NULL){
  //operate_r
  while(dump!=-1){
   dump=fgetc(file);
   if(dump>=min||dump<=max)arr[dump-min]++;
}
}
//max_find
 dumper[1]=arr[0];
 for(int i=0;i<buff;i++){if(dumper[1]<arr[i]){dumper[0]=i+min;dumper[1]=arr[i];}}


//out
 fprintf(stdout,"\e[0;91m[maxFRQ:%c]\e[0;97m :: %d\n",dumper[0],dumper[1]);

//esc
 fclose(file);
 return 0;
}
