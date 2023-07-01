#include <stdio.h>
#define size 10
#include "inside.h"
//declare
int arp[size]={1,2,3,4,5,6,7,8,9,10};
int var=11;
//main
int main(){

if(inside(var,arp,size)==1)printf("True\n");
else printf("false\n");

return 0;
}
