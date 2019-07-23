#include<stdio.h>
void main(){
    char s[20];
    int i=0,count=0,countvow=0;
    printf("Enter a word :");
    gets(s);
    while(s[i] != '\0'){
        count++;
        i++;
    }
    i=0;
     while(s[i] != '\0'){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
         countvow++;
    }
    i++;
    }
    printf("\n");
    printf("The total number of word is : %d \n",count);
    printf("The total number of vowel word is : %d \n",countvow);
    printf("The total number of consont word is : %d \n",count - countvow);

    }



