//string: array of characters with each element has size of one byte including the NULL character('\0')

#include <stdio.h>
#include <stdlib.h>
void length(char *text, int *bag){

int contain=0;
char state='\0';
for(int i=0;i>=0;i++){
contain=contain+1;
if(*(text+i)==state)break;

*bag=contain;
}


}

//declare
char name[]="";
int dump;

//main
int main(){
gets(name);
puts(name);
length(name,&dump);
printf("%d\n",dump);

return 0;
}
