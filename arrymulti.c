#include<stdio.h>
 void main()
 {
    int i,j,n,m,o,p,q,s,a[10][10],b[10][10],multi[10][10],sum=0;
    printf("Enter your rows and coloms of first matrix : \n");
    scanf("%d%d",&m,&n);
    printf("Enter your rows and coloms of second matrix : \n");
    scanf("%d%d",&o,&p);
    if(m!=p){
    printf("Row of the first matrix should be equal to second matrix colome");
    }
    else{
    printf("Enter your first matrix :\n");
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Now enter second matrix : \n");
    for(i=1;i<=o;i++){
        for(j=1;j<=p;j++){
        scanf("%d",&b[i][j]);
        }
}
    for(i=1;i<=m;i++){
        for(j=1;j<=p;j++){
        for(s=1;s<=o;s++){
        sum = sum + a[i][s]*b[s][j];


        }

        sum = 0;
        multi[i][j]=sum;
        }
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
        {
        printf("The sum is \n%d",multi[i][j]);
        }
        }
        printf("\n");
    }
    }
    }



