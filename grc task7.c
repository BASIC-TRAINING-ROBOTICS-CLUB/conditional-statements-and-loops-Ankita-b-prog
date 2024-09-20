#include<stdio.h>
void main(){
    int a;
      printf("enter the year:");
      scanf("%d",&a);
  if(a<2000){
      printf("enter year after 2000");
  }else{
      if(a%4==0){
      printf("%d is leap year",a);
  } else{
  printf("%d is not leap year",a);
  }
 } 
}  
  
   