#include<stdio.h>
int main(){
   int i,b=5,sum = 0,anup[5];
   printf("Enter 5 number \n");
   for(i = 0 ; i < 5 ; i++){
      printf("Remaning %d :",b-i);
      scanf("%d",&anup[i]);
   }
   for(i = 0 ; i < 5 ; i++){
      sum = sum + anup[i];
   }
   printf("The total sum is %d",sum);
}

