#include<stdio.h>
#include "helper.h"
#include "rotate.h"
#define size 10
//declare
int arr[size];
int rot;

int main(){
//user_input
arrFill(arr,size);
//currentArr
arrPrint(arr,size);

//Mainprocess:left
printf("\n\nnumber of position: ");
scanf("%d",&rot);
//rotateleft:
rotateLeft(arr,size,rot);

//ResultArr
printf("Rotated to Leftside: ");
arrPrint(arr,size);

//Mainprocess:right
printf("\n\nnumber of position: ");
scanf("%d",&rot);
//rotateright:
rotateRight(arr,size,rot);

//resultArr
printf("Rotated to Rightside: ");
arrPrint(arr,size);

return 0;
}
