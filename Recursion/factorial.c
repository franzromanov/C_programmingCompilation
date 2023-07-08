//factorial
#include <stdio.h>
//func
void fact(int num,int i,int *dumper){
int necro =num;
int safe=i+1;
int* dump;
dump=dumper;
if(i==necro)printf("done");
else{i++ ;fact(necro,i,dump);*dump=*(dump)*safe;}
}



//declare
int inp;
int bag=1;
int i=1;

//main
int main(){
printf("input number: ");
scanf("%d",&inp);
fact(inp,i,&bag);
printf("result=%d\n",bag);
return 0;
}
