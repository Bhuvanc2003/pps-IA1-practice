#include<stdio.h>
int input()//use Pass by reference
{
  int a;
  printf("enter a value : ");
  scanf("%d",&a);
  return a;
  }

  int add(int a, int b)
  {
    int sum;
    sum=a+b;
    return sum;
  }
  void output(int a,int b,int sum)
  {
    printf("The sum of %d and %d = %d", a,b,sum);
  }
  int main()
  {
    int a,b,sum;
    a = input();
    b = input();
    sum = add(a,b);
    output(a,b,sum);
    return 0;
  }
  