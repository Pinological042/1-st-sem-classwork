#include<stdio.h>
void swapper(int *x,int *y){
    int res;
    res = *x;
    *x = *y;
    *y = res;
}
void main(){
    int a,b;
    int *pointer1,*pointer2;
    printf("====================Swaper===================\n");
    printf("Enter two number in place a and b to swap :\n");
    scanf("%d %d",&a,&b);
    swapper(&a,&b);
    printf("The value of a = %d and b = %d",a,b);





}
