#include<stdio.h>
int main(){
   int i,b=5,multi = 1,anup[5];
   printf("Enter 5 number \n");
   for(i = 0 ; i < 5 ; i++){
      printf("Remaning %d :",b-i);
      scanf("%d",&anup[i]);
   }
   for(i = 0 ; i < 5 ; i++){
      multi = multi * anup[i];
   }
   printf("The total multi is %d",multi);
}

