#include <stdio.h>
#include "rotate.h"
#include "helper.h"

//IntegerType

//LeftRotation
void rotateLeft(int *arr,int len, int pos){
int tmp[len];
int catch;
//mainProcess
for(int i=0;i<len;i++)tmp[i]=0;
for(int i=0; i<len; i++){
catch=i-pos;
if((catch)<0)tmp[len+catch]=*(arr+i);
if(catch>=0)tmp[catch]=*(arr+i);
}
//result
for(int i=0;i<len;i++){
*(arr+i)=tmp[i];
}
}

//RightRotation
void rotateRight(int *arr, int len, int pos){
int tmp[len];
int catch;
//mainprocess
for(int i=0;i<len;i++)tmp[i]=0;
for(int i=0;i<len;i++){
catch=i+pos;
if(catch>(len-1))tmp[catch-len]=*(arr+i);
if(catch<=(len-1))tmp[catch]=*(arr+i);
}
//result
for(int i=0;i<len;i++)*(arr+i)=tmp[i];
}
