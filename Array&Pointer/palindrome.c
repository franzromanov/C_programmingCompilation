#include <stdio.h>
#define size 5
int arr[size];
int check;

//palindrome_checker
int palindrome(int par[size]){
int temp[size];
for(int i=0;i<size;i++){
temp[size-1-i]=par[i];
if(temp[size-1-i]==par[size-1-i]);
else return 0;
}
return 1;
}

int main(){

//user_in
for(int i=0; i<size;i++){
printf("input data number %d: ",i+1);
scanf("%d",&arr[i]);
}


check=palindrome(arr);

if(check==0)printf("not palindrome\n");
else if(check==1)printf("palindrome\n");

return 0;

}
