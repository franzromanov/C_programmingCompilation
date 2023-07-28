#include <stdio.h>
#include <stdlib.h>

//declare
int size,*arr1=NULL,*arr2=NULL;

//func-----------------------------------------------
int* _ARR_HEAP(int size){

 int* arr=malloc(sizeof(int)*size);
 for(int i=0; i<size; i++){
  fprintf(stdout,"\e[0;94m[%d]\e[0;97m: ",i+1);
  fscanf(stdin,"%d",&arr[i]);
}  

 return arr;
}

void _SWAP(int **ptr1,int **ptr2){
 void *tmp;
 tmp=*ptr1;
 *ptr1=*ptr2;
 *ptr2=tmp;
}
//func------------------------------------------------

//main
int main(){ 

//user_inp 
 fprintf(stdout,"\e[0;94m[size]\e[0;97m: ");
 fscanf(stdin,"%d",&size);
 
 //getarr    
 fprintf(stdout,"\e[0;93m::::[1]::::\n\n");
 arr1 = _ARR_HEAP(size);

 fprintf(stdout,"\n\n\e[0;93m::::[2]::::\n\n");
 arr2 = _ARR_HEAP(size);
  
//swapped
 _SWAP(&arr1,&arr2);

//out
 fprintf(stdout,"\n\n\e[0;94m:::OUT:::\n\n");
 for(int i=0;i<size;i++)fprintf(stdout,"\e[0;97m%d ",arr1[i]);
 fprintf(stdout,"\n\n");
 for(int i=0;i<size;i++)fprintf(stdout,"%d ",arr2[i]);
 fprintf(stdout,"\n");

//clear
 free(arr1);
 free(arr2);

//esc
 return 0;
}
