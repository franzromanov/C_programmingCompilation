//user_defined_ArraySize
#include <stdio.h>
#include <stdlib.h>

//declare
int* arr;
int size;

//main
int main(){

//user_def
 fprintf(stdout,"\e[0;91m[size]\e[0;97m: ");
 fscanf(stdin,"%d",&size);
 arr=malloc(sizeof(int)*size);
 for(int i=0;i<size;i++){
  fprintf(stdout,"\e[0;91m[data#%d]\e[0;97m: ",i+1);
  fscanf(stdin,"%d",&arr[i]);
}

//out
 fprintf(stdout,"\n\n\e[0;91m[result]\e[0;97m:[%d,",arr[0]);
 for(int i=1;i<size-1;i++){
  fprintf(stdout," %d,",arr[i]); 
}
 fprintf(stdout," %d]\n",arr[size-1]);

//free_heap
 for(int i=0; i<size;i++)arr[i]=0;
 printf("\n\n\e[0;92m[memory cleared]\e[0;90m:%p\e[0;96m--->\e[0;91mNULL\e[0;96m::[safe]\n\n",arr);
 free(arr);


//esc
 return 0;
}
