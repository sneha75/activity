#include<stdio.h>
#include<math.h>
int main()
{
  int a,b;
  int sum=0;
  int diff=0;
  int mul=0;
  int div=0;
  printf("enter two numbers\n");
  scanf("%d %d",&a,&b);
  sum=a+b;

  //calculate subraction
  diff=a-b;


  //if a and b are negative
  if(a<0 && b<0)
  diff=abs(a-b);


  //calculate multiplication
  mul=a*b;

  //calculate division
  //if b=0
  //Please enter b
  if(b==0)
  {
    printf("enter the value of b\n");
    scanf("%d",&b);
    div=a/b;
   }
   else
   {
    div=a/b;
   }
  }
  }
    
    
