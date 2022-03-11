//code3
#include<stdio.h>
void input(int *n,int *r)
{
  printf("enter the n value\n");
  scanf("%d",n);
  printf("enter the r value\n");
  scanf("%d",r);
}

int com(int n,int r)
{
  int a=1,b=1,c=1,result;
  int d=n-r;
  for(int i=2;i<=n;i++)
    a=a*i;
  for(int l=2;l<=r;l++)
    b=b*l;
  for(int k=2;k<=d;k++)
    c=c*k;
int e=b*c;
  result=a/e;
  return result;
}

void output(int n,int r,int result)
{
  printf("combination with n=%d and r=%d is %d",n,r,result);
}

int main()
{
  int n,r,result;
  input(&n,&r);
  result=com(n,r);
  output(n,r,result);
  return 0;
}