#include <stdio.h>
#include "helper.h"
#define size 10
//declare
int arr[size];
int tmp[size];
int *ptr;
int rot;
int catch;
//main
int main(){
//user_input
arrFill(arr,size);
printf("\n\ncurrent array:");
arrPrint(arr,size);
printf("number of position: ");
scanf("%d",&rot);

//main_process
for(int i=0;i<size;i++)tmp[i]=0;

for(int i=0; i<size; i++){
catch=i+rot;
if(catch>(size-1))tmp[catch-size]=arr[i];
if(catch<=(size-1))tmp[catch]=arr[i];
}

//result
ptr=arr;
for(int i=0;i<size;i++){
*(arr+i)=tmp[i];
}
arrPrint(tmp,size);


return 0;
}
