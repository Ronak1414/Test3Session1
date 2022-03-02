#include<stdio.h>
typedef struct fraction
{
int n,d;
}fraction;


int size()
{ int n;
  printf("enter the size of the array:");
  scanf("%d",&n);
  return n;
}

fraction input()
{
  fraction f1;
  printf("enter the numerator :\n");
  scanf("%d",&f1.n);
  printf("enter the denominator :\n");
  scanf("%d",&f1.d);
  return f1;
}

void input_fraction(int n,fraction f[n])
{
  for(int i=0;i<n;i++)
    {
      f[i]=input();
    }
}

fraction add(fraction f1,fraction f2)
{
  int i,hcf;
  fraction a;
   a.n=(f1.n*f2.d)+(f2.n*f1.d);
   a.d=(f1.d*f2.d);
  for(i=1;i<=100;i++)
    if(a.n%i==0 && a.d%i==0)
      hcf=i;
  a.n=a.n/hcf;
  a.d=a.d/hcf;

  return a;
}

fraction add_fraction(int n,fraction f[n])
{ fraction f3;
     f3=add(f[0],f[1]);
  for(int i=2;i<n;i++)
    {
      f3=add(f3,f[i]);
    }
  return f3;
}

void output(int n,fraction f[n],fraction sum)
{ printf("%d/%d ",f[0].n,f[0].d);
  for(int i=1;i<n;i++)
    {
      printf(" + %d/%d ",f[i].n,f[i].d);
    }
  printf(" \n is %d/%d",sum.n,sum.d);
}

int main()
{
  int n;
  n=size();
  fraction f[n];
  input_fraction(n,f);
  fraction sum=add_fraction(n,f);
  output(n,f,sum);
  return 0;
}