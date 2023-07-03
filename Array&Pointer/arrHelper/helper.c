#include <stdio.h>
#include "helper.h"

//integer
void arrFill(int *arr,int len){

for(int i=0;i<len;i++){
printf("input data#%d: ",i+1);
scanf("%d",arr+i);
}

}

void arrPrint(int *arr,int len){
printf("[");
for(int i=0;i<len-1;i++){
printf("%d, ",*(arr+i));
}
printf("%d]\n",*(arr+len-1));
}
