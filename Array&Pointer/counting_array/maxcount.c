#include <stdio.h>
#include <stdlib.h>


//func
void maxcount(int arr[],int size,int* ptr){
//::start::
//create_buffer
//::initialize::
 int buff=arr[0];
 int tmp[2]={0,0};
 for(int i=0;i<size;i++){
  if(buff<arr[i])buff=arr[i];
}
 int dump[buff];
//regulate->0::ALL
 for(int i=0;i<=buff;i++)dump[i]=0;
 
//counting
 for(int i=0;i<size;i++){
  dump[arr[i]]++;
} 
//highest_mode
 tmp[0]=dump[0];
 for(int i=0;i<=buff;i++){
  if(tmp[0]<dump[i]){tmp[0]=dump[i];tmp[1]=i;}
}
 //printf("%d\n",tmp[0]);	
 
 *(ptr+0)=tmp[0];
 *(ptr+1)=tmp[1];

//::end::
}

//declare

//main
int main(){
//local
 int size;
 int dumper[2];
 int* ptr;
 ptr=dumper;
 //int arr[size];
 //user_inp
 printf("input size: ");
 scanf("%d",&size);
 //regulate
 int arr[size];
 for(int i=0;i<size;i++)arr[i]=0;
 for(int i=0;i<size;i++){printf("[%d] input data: ",i+1);scanf("%d",&arr[i]);}

//process&out
 maxcount(arr, size,ptr);
 //ptr=arr;
 printf("\e[0;33mfrequency:%d :: value:%d\n",*(ptr),*(ptr+1));
//esc
 return 0;
}
