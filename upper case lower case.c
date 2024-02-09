//// upper case lower case
#include<stdio.h>
#include<conio.h>

int main()
{
   char ch;
   
   printf("enter any character to find it is upper case Or lower case=");
   scanf("%c",&ch);
   
   if(ch >= 'A' && ch <= 'Z'  )
   printf("\n  is upper case ");
   
   else if(ch >= 'a' && ch <= 'z')
   printf("\n  is lower case ");
   
   else
   {
     printf("\n given character is not upper case Or lower case");
   }
   
   return 0;
}