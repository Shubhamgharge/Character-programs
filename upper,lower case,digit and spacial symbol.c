//// upper case lower,case ,digit and special symbol
#include<stdio.h>
#include<conio.h>

int main()
{
   char ch;
   
   printf("enter any character to find it is upper case Or lower case=");
   scanf("%c",&ch);
   
   if(ch >= 'A' && ch <= 'Z'  )
   printf("\n %c is upper case ",ch);
   
   else if(ch >= 'a' && ch <= 'z')
   printf("\n %c is lower case ",ch);
   
   else if(ch >= '0' && ch<='9')
   {
     printf("\n %c is digit");
   }
   else
   {
     printf("\n %c is special symbol",ch);
   }
   
   return 0;
}