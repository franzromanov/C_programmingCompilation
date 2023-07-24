#include <stdio.h>
#include <stdlib.h>

//declare
int *arr,*arr2;
int ask=0;
int c=0;
//main
int main(){
//user_def
 arr=malloc(sizeof(int));
 while(1){
  fprintf(stdout,"\e[0;91m[data#%d]\e[0;97m: ",c+1);
  fscanf(stdin,"%d",&ask);
  if(ask==-1)break;
  arr[c]=ask;
  c++;
  arr=realloc(arr,4*(c+1));
}

//out
 fprintf(stdout,"\n\n\e[0;91m[result]\e[0;97m:[%d,",arr[0]);
 for(int i=1;i<c-1;i++){
  fprintf(stdout," %d,",arr[i]);
}
 fprintf(stdout," %d]\n",arr[c-1]);

//free_heap
 for(int i=0; i<c;i++)arr[i]=0;
 printf("\n\n\e[0;92m[memory cleared]\e[0;90m:%p\e[0;96m--->\e[0;91mNULL\e[0;96m::[safe]\n\n",arr);
 free(arr);
 printf("\e[0;91mFreed %d bytes of memories....\n",sizeof(int)*c);


//esc
 return 0;
}
