#include <stdio.h>
//struct_def
typedef struct test{int input1; int input2;}test;


//func

test stream(){
test drop;
scanf("[%d,%d]",&drop.input1,&drop.input2);

printf("[%d, %d]",drop.input1,drop.input2);
return drop;
}


//declare
test res;


//main
int main(){
res=stream();


return 0;
}
