#include <stdio.h>
#include <stdlib.h>
#include "stringext.h"
//word_counter
int wordcount(char* str,int len){
int counter=0;
for(int i=0;i<len;i++){
if(*(str+i)>=0x41&&*(str+i)<=0x5A||*(str+i)>=0x61&&*(str+i)<=0x7A)counter=counter+1;
}

return counter;
}

//palindrome_checker
int strPalindrome(char *str,int len){
//process
char dump[len-1];
char tmp[len-1];
for(int i=0;i<len-1;i++){
dump[i]=*(str+i);
tmp[len-1-1-i]=*(str+i);
}
//result
if(strcmp(dump,tmp)==0)return 1;
else return 0;
}
