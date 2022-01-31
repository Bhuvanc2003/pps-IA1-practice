#include <stdio.h>
int intput()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c)
  {
    return a;
  }
  else if(b>c&&b>a)
  {
    return b;
  }
  else if(c>a&&c>b)
  {
    return c;
  }
}
void output(int a,int b,int c,int largest)
{
  printf("The largest of %d,%d,%d is %d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,largest;
  a = intput();
  b = intput();
  c = intput();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}