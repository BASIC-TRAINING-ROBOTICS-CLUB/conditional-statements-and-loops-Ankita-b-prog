#include<stdio.h>
void main(){
    int x,y,z;
      printf("enter the value:x,y:\tenter the diagonal z:");
      scanf("%d %d %d",&x,&y,&z);
  if((x*x+y*y)==z*z){
  printf("equilateral triangle");
  }else{
  printf("not equilateral tringle");
  }
}  
  
   