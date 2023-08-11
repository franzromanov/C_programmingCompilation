#include <stdio.h>
#include <stdlib.h>

//remember: file is stream of bytes. that's why we can represent each byte as an integer because in programming bytes represent as integers (for c, integers can hold up to 4 bytes of data)  



//declare
FILE* img,*cpy;
int buff;


//main
int main(){
//open_file
 //read
 img=fopen("uwu.png","rb");
 cpy=fopen("uwu1.png","wb");
 
 //get_byte
 while((buff=fgetc(img)) != EOF)fputc(buff,cpy);
 
//esc
 fclose(img);
 fclose(cpy);
 return 0;
}
