//counter
#include <stdio.h>
//func
void count(int start,int term){
printf("%d\n",start);
start++;
if(start==term+1)printf("Done! Im Fast!!! >>>>\n");
else count(start,term);
}

//declare
int start,terminate;
//main
int main(){
//input
printf("we will count from: ");
scanf("%d",&start);
printf("to: ");
scanf("%d",&terminate);
count(start,terminate);

return 0;
}
