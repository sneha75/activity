#include<stdio.h>
int main()
{
  int num;
  int rev=0;
  printf("enter the number\n");
  scanf("%d",&num);
  while(num!=0)
  {
    rev=rev*10;
    rev=rev+num%10;
    num=num/10;
   }
   printf("reverse of number=%d\n",rev);
 }
