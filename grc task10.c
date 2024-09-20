#include<stdio.h>
void main(){
    int sum=0;
    int a,r;
    printf("enter the number:");
    scanf("%d",&a);
    while(a!=0){
    r=a%10;
    sum+=r;
    a=a/10;
    }
    printf("%d",sum);
    
}  
  
   