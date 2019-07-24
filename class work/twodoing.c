#include<stdio.h>
void funk(int x, int y, float *divi, int *multi){
    float res1;
    int res2;
    res1 = x/y;
    res2 = x*y;
    *divi = res1;
    *multi = res2;



}
void main(){
    int a,b,multi;
    float divi;
    printf("=========================multi function=========================\n");
    printf("Enter your first value and second value : \n");
    scanf("%d %d",&a,&b);
    funk(a,b,&divi,&multi);
    printf("the division of %d and %d is %f \n",a,b,divi);
    printf("the multipal of %d and %d is %d \n",a,b,multi);





}
