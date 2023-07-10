#include <stdio.h>
//func
void onetoN(int buff){
if(buff>0){
onetoN(buff-1);
printf("%d\n",buff);
}

}


//declare
int buffer;




//main 
int main(){
//user_inp
printf("input buffer: ");
scanf("%d",&buffer);

//process
//printf("%d",onetoN(buffer));
onetoN(buffer);


return 0;
}
