#include<stdio.h>
void main(){
    float x,y;
      printf("enter the value:x,y:");
      scanf("%f %f",&x,&y);
  if((x>1||x<-1)&&(y>1||y<-1)){
  printf("enter value between 1 to -1");
  }else if(x>0&&y>0){
  printf("first quadrant");
  }else if(x<0&&y>0){
  printf("second quadrant");
  }else if(x<0&&y<0){
  printf("third quadrant");
  }else if(x>0&&y<0){
  printf("fourth quadrant");
  }else if(x==0&&y==0){
  printf("on original");
  }else if(x==0&&y!=0){
  printf("on y-axis");
  }else if(x!=0&&y==0){
  printf("on x-axis");
  }
}  
  
   