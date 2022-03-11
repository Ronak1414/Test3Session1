//code5
#include<stdio.h>
int size()
{
  int n;
  printf("enter the array size:");
  scanf("%d",&n);
  return n;
}

void input(int n,int a[n])
{
  printf("enter the numbers :\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int largest(int n,int a[n])
{
  int large,b=0;
  large=a[0];
  for(int i=1;i<n;i++)
    {
      if(a[i]>large)
      { 
        large=a[i];
          b=i;//to give index value
      }
    }
  return b;
}

void output(int n,int a[n],int large)
{ printf("The numbers are\n");
  for(int i=0;i<n;i++)
  {
    printf(" %d",a[i]);
  }
  printf("\nThe largest among the above numbers is %d",large);
}
int main()
{
  int n,large;
  n=size();
  int a[n];
  input(n,a);
  large=largest(n,a);
  output(n,a,large);
  return 0;
}