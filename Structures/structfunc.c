#include <stdio.h>
#include <stdlib.h>
//struct
typedef struct rnd{int num1;int num2;int num3;}rnd;

//func
rnd test(rnd num){
num.num1++;
num.num2++;
num.num3++;
return num;
}

//declare
rnd number;

//main
int main(){
number.num1=2;
number.num2=2;
number.num3=2;
printf("%d|%d|%d\n",number.num1,number.num2,number.num3);
//process
number=test(number);

//out
printf("%d|%d|%d\n",number.num1,number.num2,number.num3);

//esc
return 0;
}
