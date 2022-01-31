#include <stdio.h>
#include <math.h>
int
input_n()
{
  int a;
  printf("Enter a number :");
  scanf("%d",&a);
  return a;
}
int sum_n (int a)
{ 
  int sum =0,i;
  for(i=0;i<=a;i++)
  {
    sum = sum+i;
  }
  return sum;
}
void 
output(int a, int sum)
{

  printf("The sum of :");
  int i;
  for(i=1;i<a;i++)
  printf("%d +",i);
  printf("%d",a);
  printf("number is %d",sum);

}

int 
main()
{
  int a,i,sum;

  a=input_n ();
  sum=sum_n (a);
  output (a, sum);
  
  return 0;
}