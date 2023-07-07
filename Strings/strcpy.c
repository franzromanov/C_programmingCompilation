#include <stdio.h>
#include <stdlib.h>
#define size 6
//declare

char original[size]="hello";
char cloned[size];

void strcopy(char* dest, char* src){

int i=0;
char state='\0';

while(*(src+i)!=state){
*(dest+i)=*(src+i);
i++;
}
}

int main(){
strcopy(cloned,original);
puts(original);
puts(cloned);

return 0;
}
