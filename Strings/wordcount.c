#include <stdio.h>
#include <stdlib.h>
#define size 10
//declare
char text[size];
int bag=0;
//main
int main(){
fgets(text,size,stdin);
for(int i=0;i<size;i++){
if(text[i]>=65&&text[i]<=90||text[i]>=97&&text[i]<=122)bag=bag+1;
}
printf("%d\n",bag);
return 0;
}
