#include <stdio.h>

//func
int charview(char ascii){
char stop='$';
char character;
printf("input character: ");
scanf(" %c",&character);
getchar();
if(character==stop)return 0;
if(character==ascii)return charview(ascii)+1;
else if(character!=stop && character!=ascii)return charview(ascii);
}

//declare
char buff;
int bag; 

//main
int main(){
//user_in
printf("input buffer: ");
scanf("%c",&buff);
bag=charview(buff);
printf("number of %c is %d\n",buff,bag);

return 0;
}
