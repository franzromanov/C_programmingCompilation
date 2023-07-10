#include <stdio.h>
//func
void nton(int buff){
    if(buff>0){
        printf("%d\n",buff);
        nton(buff-1);
        if(buff==1) ;
        else printf("%d\n",buff);
        }
}

int num;
//main
int main(){
 //user_inp
 printf("input buffer: ");
 scanf("%d",&num);
 
 //process
 nton(num);
    
    
 //esc
 return 0;
    }