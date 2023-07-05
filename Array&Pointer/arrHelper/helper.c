#include <stdio.h>
#include "helper.h"

//integer
//FillArray
void arrFill(int *arr,int len){
for(int i=0;i<len;i++){
printf("input data#%d: ",i+1);
scanf("%d",arr+i);
}

}
//PrintArray
void arrPrint(int *arr,int len){
printf("[");
for(int i=0;i<len-1;i++){
printf("%d, ",*(arr+i));
}
printf("%d]\n",*(arr+len-1));
}

//sum of all elements
void SeriesVal(int *arr,int len,int *bag){
int sum=0;
for(int i=0; i<len;i++)sum=sum+(*(arr+i));
*bag=sum;
}

//Turn All of The Elements to Zero
void arrZero(int *arr, int len){
for(int i=0;i<len;i++)*(arr+i)=0;
}
