#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 4096

//declare
FILE* file;
char **str;
int length_str;
int length_arrPtr;
char buffer[BUFFER];

//main
int main(){
 //user_inp
 fprintf(stdout,"\e[0;91m[array_length]\e[0;97m: ");
 fscanf(stdin,"%d",&length_arrPtr);
 str=malloc(length_arrPtr*sizeof(char*));//allocateOnHeap_arraysizeTostorePointer
 
 while(getchar()!='\n');//flush

 //get_str
 fprintf(stdout,"\e[0;91m:[text]:\e[0;97m\n");
 for(int i=0;i<length_arrPtr;i++){
  fgets(buffer,BUFFER,stdin);
  length_str=strlen(buffer)+1;
  *(str+i)=malloc(length_str*sizeof(char));
  strcpy(*(str+i),buffer);

}

//file_handling(W)

 //open
 file=fopen("text.txt","w");

 //write
 for(int i=0;i<length_arrPtr;i++){
  fprintf(file,"%s",*(str+i));
}
 //close
 fclose(file);

//free_mem
 for(int i=0; i<length_arrPtr; i++){
  strcpy(str[i],"\0");//('')for char ;("")for str
  free(str[i]);
}
 free(str);


//esc
 return 0;
}
