#include<stdio.h>
void main(){
  char name[100],addres[100],phonenumber[100];
  printf("Please enter your detail below : \n");
  printf("Enter your name :");
  scanf("%s",name);
  printf("Enter your current adress:");
  scanf("%s",addres);
  printf("Enter your Phone number :");
  scanf("%s",phonenumber);
  printf("\n");
  printf("Your detail :");
  printf("Name : %s \n",name);
  printf("address : %s \n",addres);
  printf("Phone number : %s",phonenumber);
}
