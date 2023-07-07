#include <stdio.h>
#include <stdlib.h>

//declare
int start=1;
int endpos=5;
int diff=1;
int seq=1;

//func
int arthS(int a,int b, int res,int term,int i){
int tmp;
tmp=a+b;
res=res+tmp;
i++;
if(i==term)return res;
arthS(tmp,b,res,term,i);
}


//main
int main(){
printf("arithmetic series, sum from sequence number: ");
scanf("%d",&seq);
printf("to: ");
scanf("%d",&endpos);
printf("with the value of the difference is: ");
scanf("%d",&diff);
printf("And the starting value is: ");
scanf("%d",&start);

int dog;
dog =arthS(start,diff,start,endpos,seq);
printf("%d\n",dog);


return 0;
}
