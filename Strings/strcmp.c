#include <stdio.h>
#include <stdlib.h>
#define size 6


//declare
char str1[size];
char str2[size];
//func
int strcomp(char* str1, char* str2){
int state1=0;
int state2=0;
int i=0;
while(*(str1+i)!='\0'||*(str2+i)!='\0'){
if(*(str1+i)>*(str2+i))state1=state1+1;
if(*(str1+i)<*(str2+i))state2=state2+1;
i++;
}
if(state1<state2)return 1;
if(state1>state2)return (-1);
if(state1==state2)return 0;
}

//main
int main(){
//input
scanf("%s",str1);
printf("\n");
scanf("%s",str2);


printf("%d\n",strcomp(str1,str2));

return 0;
}
