#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  char num[10];
  int flag=0;
  int i;
  
  printf("Enter a number\n");
  scanf ("%s", num);
  i = strlen(num);
  
  while(i--)
  {
      if (num[i]=='.')
      {
          flag = 1;
          break;
      }
  }
   
   if(flag)
   printf("Valid\n");
   
   else 
   printf("Invalid\n");
    
}