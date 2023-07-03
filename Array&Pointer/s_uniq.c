//simple uniq element acknowledgement 
#include <stdio.h>
#define size 10

//declare
int arr[size];
int count=0;
int status=0;
int main(){

//user_input
for(int i=0;i<size;i++){
printf("input data#%d: ",i+1);
scanf("%d",&arr[i]);
}

///newline
printf("\n\n");
///newline


//count&printout
for(int i=0;i<size;i++){
status=0;
for(int c=0;c<size;c++){
if(c!=i){
if(arr[c]==arr[i])break;
}
status=status+1;
}
if(status==size){count=count+1;printf("unique#%d:%d\n",count,arr[i]);}
}


return 0;
}
