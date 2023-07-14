#include <stdio.h>


//declare

/*
/////unions/////
unions only use one block of memory with size of the largest element's memory 
that defined inside of the union.

ex:

union test{
int x; >>>>>>> 4 bytes
double y; >>>>> 8 bytes
};

size of test is 4<8 :: 8 bytes

the size of test as a data type is 8 bytes since
double has the largest memory size, which is data type of the element y
inside test.
*/


/*
////struct////

on the otherhands user-data type that created using struct
use block of data with memory size of sum of the memory size 
each of the elements that've been defined inside of the struct.

ex:

struct test{

int x; >>>>>> 4 bytes
double y;>>>> 8 bytes

};
size of test is 8+4=12 bytes

the size of 'test' as a data type is 12 bytes since integer has size of 4 bytes
while double has size of 8 bytes, hence the total of both element memory size,
which is 12 is the size of 'test'. 



*/


//unions
typedef union test1{
int x1;
double x2;
}test1;

test1 testing1;

//structs
typedef struct test2{
int y1;
double y2;
}test2;

test2 testing2;

//dumpers
int dump;


//main
int main(){

//unions
dump=sizeof(testing1);
printf("[union]size: %d\n",dump);

//struct
dump=sizeof(testing2);
printf("[struct]size: %d\n",dump);

//esc
return 0;
}
