#include<stdio.h>
void main(){
  int a = 10;
  int *ptr;
  printf("The adress of a is %u \n",&a);
  printf("The value of a is %d \n",a);
  ptr = &a;
  printf("================using pointer================\n");
  printf("The value of a=%d \n",*ptr);
  printf("The address of a = %u \n",ptr);

}
