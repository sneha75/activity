#include<stdio.h>
int main()
{
  int num;
  int rev=0;
  int rem;
  printf("enter the number\n");
  scanf("%d",&num);
  while(num!=0)
  {
    rem=num%10;
    rev=rev+rem;
    num=num/10;
   }
   printf("reverse of number=%d\n",rev);
 }
