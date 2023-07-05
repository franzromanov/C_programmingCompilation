#include <stdio.h>
#include "helper.h"
#define size 10

int arr[size];

void SeriesVal(int *arr,int len,int *bag){
int sum=0;
for(int i=0; i<len;i++)sum=sum+(*(arr+i));
*bag=sum;
}

//declare
int dump;

int main(){
arrFill(arr,size);
SeriesVal(arr,size,&dump);

//result
printf("%d\n",dump);


return 0;
}

