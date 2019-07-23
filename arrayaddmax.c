#include<stdio.h>
 void main(){
    int i,j,n,m,a[10][10],b[10][10],sum[10][10];
    printf("Enter your rows and coloms : ");
    scanf("%d%d",&m,&n);
    printf("Enter your first matrix :\n");
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Now enter second matrix : \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
        scanf("%d",&b[i][j]);
        }

    }
    printf("\n");
    printf("Now to total additions of this matrix is : \n");
      for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
        sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
    printf("%d \t",sum[i][j]);
    }
       printf("\n");
    }
}
