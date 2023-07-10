#include <stdio.h>

//func
int pell(int buff){
//if(buff<-1)return 2*pell(buff+1)-pell(2+buff);
//if(buff==-1)return -1;
if(buff==0)return 0;
if(buff==1)return 1;
if(buff>1)return 2*pell(buff-1)+pell(buff-2);
}

//declare
int num,buffer;

int main(){
//user_inp
printf("input buffer: ");
scanf("%d",&buffer);

//process
num=pell(buffer);

//out
printf("%d\n",num);

//esc
return 0;
}
