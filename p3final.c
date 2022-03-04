#include<stdio.h>
#include<math.h>
int input_number()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  for(int i=2;i<=sqrt(n);i++)
    {
      if(n%i==0)
        return 0;
      else
        return 1;
    }
}
void output(int n,int isp)
{
  if(isp==0)
    printf("number is not prime\n");
  else
    printf("number is prime\n");
}
int main()
{
  int n;
  n=input_number();
  int isp=is_prime(n);
  output(n,isp);
  return 0;
  
}
