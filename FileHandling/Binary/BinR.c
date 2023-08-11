//read_integer
#include <stdio.h>
#include <stdlib.h>

FILE* bin;
int buffer, *integers;

//main
int main(){

//read_n_integers_atTheSameTime
 //usr_ask
 fprintf(stdout,"\e[0;91m[BUFFER]\e[0;97m: ");
 fscanf(stdin,"%d",&buffer);

//allocate_TO_heap
integers=malloc(sizeof(int)*buffer);

//open
 bin=fopen("uwu.png","rb");

//read_transfer_TO_integers
 while(fread(integers,sizeof(int),buffer,bin)==buffer){

  for(int i=0;i<buffer;i++)fprintf(stdout,"%d::",integers[i]);
  fprintf(stdout,"\n");
}


fclose(bin);
free(integers);

//esc
 return 0;
}
