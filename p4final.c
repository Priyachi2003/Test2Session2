#include<stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int find_fibo(int n)
{
  int a,b,c;
  c=a+b;
  a=b;
  c=b;
  return c;
}
int output(int n)
{int c;
  for(int i=3;i<=n;i++)
  printf("%d is the fibonacci sequence\n",&c);
  
  
}
int main()
{
  int a,n,fibo;
  a=input();
  find_fibo(n);
  output(n);
  return 0;
}
