#include<stdio.h>
int main(){
   int i,b=5,multi = 1,anup[5],anupa[5],aupam[5];
   printf("Enter 5 number \n");
   for(i = 0 ; i < 5 ; i++){
      printf("Remaning %d :",b-i);
      scanf("%d",&anup[i]);
   }
   printf("Enter another array \n");
   for(i = 0 ; i < 5 ; i++){
      printf("Remaning %d :",b-i);
      scanf("%d",&anupa[i]);
   }
   for(i = 0 ; i < 5 ; i++){
      aupam[i] = anupa[i] + anup[i];
   }
   for(i = 0 ; i < 5 ; i++){
      printf("%d \t",aupam[i]);
   }
}


