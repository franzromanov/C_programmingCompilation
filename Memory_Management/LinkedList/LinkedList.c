#include "listgen.h"

//declare
int val=0;
int count=0;
bool stat=false;
//main
int main(){ 
//createList
 wrap *WRAP_ME=strctbuild();

//user_assign
 while(1){
  count++;
  fprintf(stdout,"\e[0;91m[%d]: ",count);
  fscanf(stdin,"%d",&val);
  if(val==-1)break;
  inkbind(WRAP_ME,val);
}

//counter_out
 count=N_COUNT(WRAP_ME);
 fprintf(stdout,"\n\n\e[0;94mnumber of node: %d\n",count);


//clean_mem
 _WIPE(WRAP_ME,&stat);
 if(stat==true)fprintf(stdout,"\e[0;97mmemory has been cleared!!!\n");
 if(stat==false)fprintf(stdout,"\e[0;91mFailed,Something Went Wrong!!!\n");


//esc
 return 0;
}
