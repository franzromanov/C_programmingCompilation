#include<stdio.h>
#include "inside.h"
int inside(int val,int *arr,int len){

for(int i =0; i<len;i++){
if(val ==*(arr+i)){return 1; break;}
}

return 0;
}

