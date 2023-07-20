#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fgets(text,6,stdin);
//fputs(text,stdout);
//fscanf(stdin,"%6s",text);
//fprintf(stdout,"%6s\n",text);

//declare
char text[6];


//declare
FILE* file;//file_struct
char text[6];



//main
int main(){
//open_file
 file=fopen("text.txt","r");

//err_check
if(file!=NULL){
 while(fgets(text,6,file))fprintf(stdout,"%s",text);//loop until reach EOF(EOF-->FALSE)

}
//close_file
 fclose(file);


//esc
return 0;
}
