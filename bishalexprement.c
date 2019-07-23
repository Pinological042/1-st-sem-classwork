#include<stdio.h>
int main(){
   int i,b=5,multi = 1,anup[5],anupa[5],aupam[5],sum=0;
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
    for(i = 0 ; i < 5 ; i++)
    {
   sum=sum+aupam[i];
   }

   printf("%d",sum);
   return 0;
}



