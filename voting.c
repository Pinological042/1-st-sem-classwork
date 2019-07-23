#include<stdio.h>
    void main()
        {
            int i,a,sum=1,b[5],id[5],lar;
            float per[5];
            printf("/////////////////////////////////University of aayush ///////////////////////////\n");
            printf("Enter the candidate number you want to vote : \n");
            for(i=1;i<=5;i++){
                scanf("%d",&id[i]);
            }
            printf("Enter the amount of vote \n");
            for(i=1;i<=5;i++){
               printf("candidate id no %d :",id[i]);
               scanf("%d",&b[i]);
            }
            /*total voting*/
            for(i=1;i<=5;i++){
               sum = sum + b[i];
            }
            /*vote percentage*/
            for(i=1;i<=5;i++){
               per[i] = ((float)b[i]*100)/sum;
            }
            /*winner winner chicken dinner*/
            for(i=1;i<=5;i++){
                if(lar < b[i]){
                    lar = b[i];
                }
            }
            printf("Output :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            printf("Candidate \n");
            for(i=1;i<=5;i++){
             printf("%d\n",id[i]);
            }
            printf("\n");
            printf("Vote recieved \n");
            for(i=1;i<=5;i++){
             printf("%d \n",b[i]);
            }
            printf("\n");
            printf("percentage to total vote \n");
            for(i=1;i<=5;i++){
               printf("%f \n",per[i]);
            }
            printf("Total votes = %d \n",sum);
            /*winner decide*/
            for(i=1;i<=5;i++){
                if(b[i] == lar){
                   printf("The winner is = %d \n",id[i]);
                }
            }

        }
