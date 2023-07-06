#include <stdio.h>
#include <stdlib.h>

//word_counter
int wordcount(char* str,int len){
int counter=0;
for(int i=0;i<len;i++){
if(*(str+i)>=0x41&&*(str+i)<=0x5A||*(str+i)>=0x61&&*(str+i)<=0x7A)counter=counter+1;
}

return counter;
}
