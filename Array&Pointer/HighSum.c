#include<stdio.h>
#define size 10

//func
int largeArr(int arr[size]){

int tmp=0;

for (int i=0;i<10;i++){

if(arr[i]+arr[i+1]>tmp)tmp=arr[i]+arr[i+1];

}
return tmp;
}

int parr[size];


int main(){

//user_input
for(int i=0;i<size;i++){
printf("Input Data Number %d: ",i+1);
scanf("%d",&parr[i]);
}

//printout_Func
int bag=largeArr(parr);
printf("largest neighbor sum: %d\n",bag);

return 0;
		

}
