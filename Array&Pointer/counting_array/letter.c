#include <stdio.h>
#include <stdlib.h>


//declare
char dump[]={'K','c','c','R','c',' ','K','r'};
int min,max,i,frq,hld;
char val;

//main
int main(){
 max=dump[0];
 min=dump[0];
//buffer
 for(i=0;i<8;i++){
  if(max<dump[i])max=dump[i];
  if(min>dump[i])min=dump[i];
}

//count
 hld=(max-min)+1;
 int count[hld];
 //regulate
 for(i=0;i<hld;i++)count[i]=0;
 for(i=0;i<8;i++)count[(int)dump[i]-(int)min]++;

 //end_product
 frq=count[0];
 for(i=0;i<(int)hld;i++){if(frq<count[i]){frq=count[i];val=(char)i+(char)min;}}
 printf("[frq] %d :: [val] %c\n",frq,val);
//esc
return 0;
}
