#include<stdio.h>
#include "helper.h"
#define size 10
//declare
int arr[size];

//main
int main(){
//userinput
arrFill(arr,size);
//currentVal
arrPrint(arr,size);
printf("\n\n");
//mainprocess
arrZero(arr,size);
//result
arrPrint(arr,size);

return 0;
}
