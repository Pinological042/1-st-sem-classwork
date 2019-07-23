#include<stdio.h>
int main(){
   int i,anup[5];
   printf("Enter 5 number");
   for(i = 0 ; i < 5 ; i++){
      scanf("%d",&anup[i]);
   }
   for(i = 0 ; i < 5 ; i++){
      printf("%d \t",anup[i]);
   }
}
