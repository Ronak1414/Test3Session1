//code1
#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numerator :\n");
  scanf("%d",num1);
  printf("Enter the denominator :\n");
  scanf("%d",den1);
  printf("Enter the numerator :\n");
  scanf("%d",num2);
  printf("Enter the numerator :\n");
  scanf("%d",den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int i,hcf;
  *num3=(num1*den2)+(num2*den1);
  *den3=(den1*den2);
  for(i=1;i<=100;i++)
    if(*num3%i==0 && *den3%i==0)
      hcf=i;
  *num3=*num3/hcf;
  *den3=*den3/hcf;
  
   
}

void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("the addition of %d/%d + %d/%d is %d/%d",num1,den1,num2,den2,num3,den3);
}

int main()
{
  int num1,num2,num3,den1,den2,den3;
 input (&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
 output(num1,den1,num2,den2,num3,den3);
  return 0;
  }