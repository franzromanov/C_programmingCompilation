#include "listgen.h"

//part-------------------------------[1]
wrap* strctbuild(){
 //PUT_ON_HEAP

 wrap* WRAP=malloc(sizeof(wrap));
 (*WRAP).head=NULL;
 (*WRAP).tail=NULL;
 (*WRAP).size=0;
 return WRAP;

}



//part-------------------------------[2]
void inkbind(wrap* WRAP,int inp){
 //Allocate&Initiate
 node* input=malloc(sizeof(node));
 input->value=inp;
 input->next_nodeAddr=NULL;

 //if_structures_empty
 if( (*WRAP).head==NULL && (*WRAP).tail==NULL ){
  WRAP->head=input;
  WRAP->tail=input;

}else{
 WRAP->tail->next_nodeAddr=input;
 WRAP->tail=input;
}
 WRAP->size++;
}



//part------------------------------[3]
int N_COUNT(wrap* WRAP){
 //initiate
 int count=0;
 node* dump=WRAP->head;

 if(dump==NULL)return count;

 while(1){
  count++;
  dump=dump->next_nodeAddr;
  if(dump==NULL)break;
}


 //pass_result
 return count;
}



//part------------------------------[4]
void _WIPE(wrap* WRAP,bool* stat){
 //wiping_nodes
 
 node* tmp;
 node* dump=WRAP->head;
 if(dump==NULL)*stat=false;
 else{
  while(1){
    tmp=dump;
    dump=dump->next_nodeAddr;
    free(tmp);
    if(dump==NULL)break;
}
}
 
 free(WRAP);

 *stat=true;
}


//part------------------------------[5]
bool is_inside(wrap* WRAP,int val){ 
  
 //initiate
 node* dump=WRAP->head;
 if(dump==NULL)return false;
 if(dump->value==val)return true;
 while(1){ 
  dump=dump->next_nodeAddr;
  if(dump==NULL)break;
  if(dump->value==val)return true;
}
 return false;
}



//part------------------------------[6]
int _ITEM_COUNT(wrap* WRAP,int val){

 //initiate
 int count=0;
 node* dump=WRAP->head;

 if(dump==NULL)return count;
 if(dump->value==val)count++;
 while(1){
  
  dump=dump->next_nodeAddr;
  if(dump==NULL)return count;
  if(dump->value==val)count++;
}

}
