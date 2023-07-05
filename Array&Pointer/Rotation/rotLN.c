#include<stdio.h>
#include "helper.h"
#include "rotate.h"
#define size 10
int arr[size];


int main(){
//usr input
arrFill(arr,size);
//currentArr
arrPrint(arr,size);

//Mainprocess

//rotateleft:

rotateLeft(arr,size,5);
//ResultArr
arrPrint(arr,size);



return 0;
}

