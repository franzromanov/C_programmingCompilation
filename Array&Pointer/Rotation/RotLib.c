#include <stdio.h>
#include "rotate.h"
#include "helper.h"

void rotateLeft(int *arr,int len, int pos){
int tmp[len];
int catch;
//rotate_1pos:

//starting_point
for(int i=0;i<len;i++)tmp[i]=0;

for(int i=0; i<len; i++){
catch=i-pos;
if((catch)<0)tmp[len+catch]=*(arr+i);
if(catch>=0)tmp[catch]=*(arr+i);

}

for(int i=0;i<len;i++){
*(arr+i)=tmp[i];
}

}
