#include<stdio.h>
    int main(){
    float amount,another = 0,dis;
    char op;
    printf("Enter Purchase amount : Rs ");
    scanf("%f",&amount);
    getchar();
    printf("More purchase [y/n] :  ");
    scanf("%c",&op);
    while(op == 'y'){
        printf("Enter Purchase amount : Rs ");
        scanf("%f",&another);
        another += amount;
        getchar();
        printf("More purchase [y/n] :  ");
        scanf("%c",&op);
        }
        if (another < 51){
            dis = 0.05 * another ;
        }
       else if (another > 51 && another < 101){
            dis = 0.1 * another ;
        }
        else if (another > 101 && another < 250){
            dis = 0.2 * another ;
        }
        else if (another < 250){
            dis = 0.25 * another ;
        }
        else {
            dis = 0;
        }
    printf("Total purchase : %.2f \n",another);
    printf("Total discount : %.2f \n",dis);
    printf("Total purchase after discount : %.2f \n",another - dis);
    FILE *fp;
    fp = fopen("summary.dat","w");
    fprintf(fp,"total purchase : %.2f \n",another);
    fprintf(fp,"total discount : %.2f \n",dis);
    fprintf(fp,"total purchase after discount : %.2f ",another - dis);
    fclose(fp);

    return 0;
    }
