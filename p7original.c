
#include<stdio.h>
typedef struct fraction
{
int n,d;
}fraction;

fraction input()
{
  fraction f1;
  printf("enter the numerator :\n");
  scanf("%d",&f1.n);
  printf("enter the denominator :\n");
  scanf("%d",&f1.d);
  return f1;
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

void output(fraction f1, fraction f2, fraction sum)
{
  printf("The addition of %d/%d + %d/%d is %d/%d",f1.n,f1.d,f2.n,f2.d,sum.n,sum.d);
}

int main()
{
  fraction f1,f2,sum;
  f1=input();
  f2=input();
  sum=add(f1,f2);
  output(f1,f2,sum);
  return 0;
}