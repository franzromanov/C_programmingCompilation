#include <stdio.h>
#include <stdlib.h>

//func
int* counter(int* array,int size,int buffer){
int arrcnt[buffer];


for(int i=0; i<=buffer+1;i++)arrcnt[i]=0;


for(int i=0;i<size;i++){
(arrcnt[*(array+i)])++;

}
int* ptr=arrcnt;

return ptr;
}





//main
int main(){
int size;
int* ptr;
int arr[size];
int buff;
//user_input
printf("input size: ");
scanf("%d",&size);
for(int i=0;i<size;i++)
{
printf("input number[%d]: ",i+1);
scanf("%d",&arr[i]);
}



//process
buff=arr[0];

for(int i=0;i<size;i++)
{
if(buff<arr[i])buff=arr[i];
}

//printf("%d\n",buff);

ptr=counter(arr,size,buff);



//out
for(int i=0;i<=buff;i++){

printf("\e[0;34m[%d]\e[0;0m: %d\n",i,*(ptr+i));

}

printf("\n");
return 0;
}
