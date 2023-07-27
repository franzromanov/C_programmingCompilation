#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
///////////////////////STRUCTURES////////////////////////////////////


//node_gen--->generate_nodes
typedef struct node{
 int value;
  struct node* next_nodeAddr;
}node;

//wrapper_STRUCTURES----->to_determine::startingpoint_and_endpoint
typedef struct wrapper{
 node *head;
 node *tail;
 int size;
}wrap;


/////////////////////////////////////////////////////////////////////


//function_declare

//GenerateStructure-----------------------------------------[1]
wrap* strctbuild();


//binder::take_And_bind_node_InsideWrapper------------------[2]
void inkbind(wrap* WRAP,int inp);


//node_counter----------------------------------------------[3]
int N_COUNT(wrap* WRAP);


//WipeStruct_from_Heap--------------------------------------[4]
void _WIPE(wrap* WRAP,bool* stat);


//ItemChecker-----------------------------------------------[5]
bool is_inside(wrap* WRAP,int val);


////////////////////////////////////////////////////////////////////
