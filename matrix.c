#include<stdio.h>
int main()
    {
        int a[20][20],m,n,i,j,b[20][20],p,q;
        printf("Enter the size of matrix:");
        scanf("%d%d",&m,&n);
        printf("enter the elements of first matrix : \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("The First matrix:\n\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
                scanf("%d%d",&m,&n);
        printf("enter the elements of second matrix : \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("The Second <matrix:\n\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
