//range:{5-10}
#include <stdio.h>
#include <stdlib.h>

//func
void maxcount(int arr[],int size,int* ptr){
//::start::
int max=0;
int min=0;
int tmp[2]={0};
//buffer
//max-min
 for(int i=0;i<size;i++)if(max<arr[i])max=arr[i];
 for(int i=0;i<size;i++)if(min>arr[i])min=arr[i];
 int take=1+max-min;
 int buff[take];
 //regulate
 for(int i=0;i<take;i++)buff[i]=0;

//count
 for(int i=0;i<size;i++){
  buff[arr[i]-min]++;

}
//maxVal
 for(int i=0;i<(1+max-min);i++){
  
  if(tmp[0]<buff[i]){tmp[0]=buff[i];tmp[1]=i+min;}

}

//store
*(ptr)=tmp[0];
*(ptr+1)=tmp[1];

}

//declare
int dump[2];
int* ptr=dump;
int size;

//main
int main(){
//ask
 printf("\e[1;31m[!] \e[0;34msize:\e[0;0m ");
 scanf("%d",&size);
 int arr[size];

 for(int i=0;i<size;i++){
 printf("\e[1;31m[%d] \e[0;34minput data:\e[0;0m ",i+1);
 scanf("%d",&arr[i]);

}
 
///::process::///
maxcount(arr,size,ptr);

printf("[frequency] %d::[value] %d\n",*(ptr),*(ptr+1));

//esc
return 0;
}
