#include <stdio.h>
#include "inside.h"
#include "helper.h"
#define size 10
//declare
int arr[size];
int tmp[size];
int catch;
int *ptr=arr;
int rot;

//main
int main(){

//userinput
arrFill(arr,size);

//current array
printf("\n\ncurrent array: ");
arrPrint(arr,size);
//MainProcess
//rotate_pos:
//starting_point
printf("\n\nnumber of position: ");
scanf("%d",&rot);
for(int i=0;i<size;i++)tmp[i]=0;



for(int i=0; i<size; i++){
catch=i-rot;
if((catch)<0)tmp[size+catch]=arr[i];
if(catch>=0)tmp[catch]=arr[i];

}

for(int i=0;i<size;i++){
*(ptr+i)=tmp[i];
}

return 0;

//resultArray [2,3,1]
printf("\n\nresult array: ");
arrPrint(arr,size);

}
