#include <stdio.h>
//define_struct
typedef struct euclid_plane{int v_axis;int h_axis;}Plane;


//func
void sqArea(Plane square){
int area;
printf("input length: ");
scanf("%d",&square.h_axis);
printf("input width: ");
scanf("%d",&square.v_axis);

area=square.h_axis*(square.v_axis);
printf("area of square: %d\n",area);
}

//declare
Plane square;


//main
int main(){

//process
sqArea(square);

//esc
return 0;
}
