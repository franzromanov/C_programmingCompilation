#include <stdio.h>
#include "helper.h"
#include <stdlib.h>
#define size 7



//declare
int arr[size]={1,3,3,4,5,6,7};
int tmp;
int bag[2];
int sum;
//main

int main(){
//userinput
//arrFill(arr,size);

//mainProcess
//initiate
for(int i=0;i<2;i++)bag[i]=1;
if(size>1)tmp=arr[0]+arr[1];

//scanning
for(int i=0;i<size;i++){
//printf("%d%d",val1,val2);
for(int c=0;c<size;c++){
//printf("%d%d",arr[i],arr[c]);
if(c!=i){
sum=arr[i]+arr[c];
if(abs(sum)<=abs(tmp)&&abs(sum)>=0){bag[0]=arr[i];bag[1]=arr[c];tmp=sum;}
}
}
}

//result
printf("the sum of (%d)+(%d)=%d has result closest to zero\n",bag[0],bag[1],tmp);
return 0;
}
