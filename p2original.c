//code2
#include<stdio.h>
typedef struct fac
{
float num,den;
}fac;

fac input()
{
  fac a;
  printf("Enter the numerator :\n");
  scanf("%f",&a.num);
  printf("Enter the denominator :\n");
  scanf("%f",&a.den);
  return a;
}

fac largest(fac a,fac b,fac c)
{ float fac1,fac2,fac3;
  fac1=a.num / a.den;
  fac2=b.num/b.den;
  fac3=c.num/c.den;
  if(fac1>fac2 && fac1>fac3)
    return a;
  else if(fac2 > fac3 )
    return b;
  else 
    return c;
  
}

void output(fac a,fac b,fac c,fac large)
{
  printf("the farctions are :\n%1.0f/%1.0f , %1.0f/%1.0f , %1.0f/%1.0f",a.num,a.den,b.num,b.den,c.num,c.den);
  printf("\nthe largest of the 3 is %1.0f/%1.0f",large.num,large.den);
    
}

int main()
{
  fac a,b,c;
  a=input();
  b=input();
  c=input();
  fac large=largest(a,b,c);
  output(a,b,c,large);
  return 0;
}