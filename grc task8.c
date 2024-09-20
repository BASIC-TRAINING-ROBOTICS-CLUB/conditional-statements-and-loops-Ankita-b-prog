#include<stdio.h>
void main(){
    char x;
    printf("enter the character:");
    scanf("%c",&x);
    
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
    printf("%c is vowel",x);
    }
    else{
    printf("%c is consonant",x);
    }
    
}  
  
   