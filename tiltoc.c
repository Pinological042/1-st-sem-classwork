#include<stdio.h>
void main(){
   int i,j,a[3][3],b,winner,noonelol,count;
   printf("/////////////////////////////////Tik Toc Game ////////////////////////////////// \n");
   printf("|-----------| \n");
   printf("| 1 | 2 | 3 | \n");
   printf("|-----------| \n");
   printf("| 4 | 5 | 6 | \n");
   printf("|-----------| \n");
   printf("| 7 | 8 | 9 | \n");
   printf("|-----------| \n");
   printf("The rule of the game : \n");
   printf("Rember the number of grid and enter your value :\n");
   printf("Choose your spot \n ");
   printf("Here 0 is o and 1 is X \n");

   while (count == 9){
   for(i=0;i<3;i++){
   for(j=0;j<3;j++){
          if(a[0][0]=='1'&&a[1][1]=='1'&&a[2][2]=='1' ||
             a[2][0]=='1'&&a[1][1]=='1'&&a[2][0]=='1' ||
             a[0][0]=='1'&&a[0][1]=='1'&&a[0][2]=='1' ||
             a[1][0]=='1'&&a[1][1]=='1'&&a[1][2]=='1' ||
             a[2][0]=='1'&&a[2][1]=='1'&&a[2][2]=='1' ||
             a[0][0]=='1'&&a[1][0]=='1'&&a[2][0]=='1' ||
             a[0][1]=='1'&&a[1][1]=='1'&&a[2][1]=='1' ||
             a[0][2]=='1'&&a[1][2]=='1'&&a[2][2]=='1'){

             winner = 1;
             }
             else if (a[0][0]=='0'&&a[1][1]=='0'&&a[2][2]=='0' ||
             a[2][0]=='0'&&a[1][1]=='0'&&a[2][0]=='0' ||
             a[0][0]=='0'&&a[0][1]=='0'&&a[0][2]=='0' ||
             a[1][0]=='0'&&a[1][1]=='0'&&a[1][2]=='0' ||
             a[2][0]=='0'&&a[2][1]=='0'&&a[2][2]=='0' ||
             a[0][0]=='0'&&a[1][0]=='0'&&a[2][0]=='0' ||
             a[0][1]=='0'&&a[1][1]=='0'&&a[2][1]=='0' ||
             a[0][2]=='0'&&a[1][2]=='0'&&a[2][2]=='0'){

             winner = 0;
             }
             else {
              printf("No is winner");
             }

   }
   }
   count++;
   }

   if(winner == 1){
     printf("Player X or 1 is a winner");
   }
   else if(winner == 0){
     printf("Player O or 0 is a winner");
   }
}
