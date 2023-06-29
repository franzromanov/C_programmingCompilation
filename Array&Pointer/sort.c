#include <stdio.h>
#define size 10


//func_section
int sort_stat(int arr[size]){

//recognizing
int stat=0;

//ascent
for(int i=0;i<size-1;i++){
if(arr[i+1]>arr[i])stat=stat+1;
else if(arr[i+1]==arr[i])stat=stat+1;
}
if(stat==size-1)return 1;
else stat=0;
///////////////////////end///////////

//descent
for(int i=0;i<size-1;i++){
if(arr[i+1]<arr[i])stat=stat+1;
else if(arr[i+1]==arr[i])stat=stat+1;
}
if(stat==size-1)return 1;
else stat=0;
///////////////////////end///////////

return 0;
}

//declare_var
int parr[size];
int tmp;


//main
int main(){
//user_input
for(int i=0;i<size;i++){
printf("Input Data Number %d: ",i+1);
scanf("%d",&parr[i]);
}

//func_run
tmp=sort_stat(parr);
if(tmp==1)printf("Array Is Sorted\n");
else if(tmp==0)printf("Array Is Not Sorted\n");

return 0;
}


