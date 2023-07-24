#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declare
char *str,*dump;
int c=0;
char *clear;
char ask;
int i=0;
//main
int main(){
 //bind to heap
 str = calloc(1,sizeof(char));
 dump =calloc(1,sizeof(char));
 //user_inp
 fprintf(stdout,"\e[0;91m[text]\e[0;97m:" );
 fscanf(stdin,"%[^\n]",str);
 //counting_bytes
 while(1){
  if(str[i]=='\0'){i++;break;}
  i++;
}
 clear=str;
 str=realloc(str,i);

 if(clear!=str){

 //START
  while(1){
   if(clear[c]=='\0'){clear[c]=0;break;}
   clear[c]=0;
   c++;
}
//END
}

 dump=realloc(dump,i);
 strcpy(dump,str);
  




//out
 fprintf(stdout,"%s\n",dump);

//free_mem
 for(c=0;c<i;c++)dump[c]=0; 
 printf("\n\n\e[0;92m[memory cleared]\e[0;90m:%p\e[0;96m--->\e[0;91mNULL\e[0;96m::[safe]\n\n",dump);
 free(str);
 free(dump);
 printf("\e[0;91mFreed %d bytes of memories....\n",i);


//esc
 return 0;
}
