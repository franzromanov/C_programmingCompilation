
//constants
#define rows 5
#define cols 5

//declare
 char name[]="Navallo_Higgins";
 char id[]="04211045";
 int mtx[rows][cols];
 char buff[16];
//main
int main(){

//5x5Matrix

 //process>>>>
 //rows<><><>
 for(int r=1;r<rows+1;r++){
  //columns<><><><>
  for(int c=1;c<cols+1;c++){
   //fills<><><>
   mtx[r-1][c-1]=c;
   if(r==c)mtx[r-1][c-1]=6-mtx[r-1][c-1];
}
}

//output
 for(int r=0;r<rows;r++){
  //columns<><><><>
  for(int c=0;c<cols;c++){
   //fills<><><>
   snprintf(buffer,16,"%d ",mtx[r][c]);
   Serial.print(buffer);
}
  Serial.print("\n");
}
}

