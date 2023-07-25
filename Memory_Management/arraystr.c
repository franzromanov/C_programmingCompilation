#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 4096

//declare
char **str;
int total;
int length=0;
char buffer[BUFFER];

//main
int main(){
//user_def
 fprintf(stdout,"\e[0;91m[Number of Strings]\e[0;97m: ");
 fscanf(stdin,"%d",&total);//set_arraysize-->theArrayWillContainsPointerOfCharactersDataType_A.K.A_STRINGS

 //bind_onHEAP[array to store character type pointers]
 str=malloc(total*sizeof(char*));//number_inputstrings*memAddressSize(usually_8bytes)
 //clean_consoleio
 while(getchar()!='\n');
 
 //ask_str
 for(int i=0;i<total;i++){
  fprintf(stdout,"\e[0;91m[word#%d]\e[0;97m: ",i+1);
  fgets(buffer,BUFFER,stdin);
  length=strlen(buffer);//get_strlenToAllocateMem
  buffer[length-1]='\0';//remove_['\n']
  str[i]=malloc(length*sizeof(char));
  strcpy(str[i],buffer);

/*

+--------------------------------------EXPLANATION--------------------------------------------------------+
+ char** str--->pointer that points to pointer (in this case , the type of those pointers is char)        +
+ then we create an array on the heap with malloc                                                         +
+ where these array contains pointers that point to char type memADDR                                     +
+ to access these array members, u can simply do **(str+i) or str[i] where i is an index of the array.    +
+ [just treat it like how you normally handle array, but this time it just takes extra step]              +
+---------------------------------------------------------------------------------------------------------+

*/

}


//out
 if(total>1){
 fprintf(stdout,"\e[0;91m[RESULT]\e[0;97m: [ %s,",*(str));
 for(int i=1;i<total-1;i++){
  fprintf(stdout," %s,",*(str+i));
}
 fprintf(stdout,"  %s ]\n",*(str+(total-1)));
}else{
 fprintf(stdout,"\e[0;91m[RESULT]\e[0;97m: [ %s ]\n",*str);
}

//free_mem
 for(int i=0;i<total;i++){
  strcpy(str[i],"\0");
  free(str[i]);
}
 free(str);



//esc
 return 0;
}
