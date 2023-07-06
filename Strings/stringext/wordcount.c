#include <stdio.h>
#include <stdlib.h>
#include "stringext.h"
#define size 10
//declare
char text[size];
int bag=0;
//main
int main(){
fgets(text,size,stdin);
bag=wordcount(text,size);
printf("%d\n",bag);
return 0;
}
