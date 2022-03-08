#include <stdio.h>
#include <math.h>

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numerator and denominator of 1st fraction: \n");
  scanf("%d %d", num1, den1);
  printf("Enter the numerator and denominator of 2nd fraction: \n");
  scanf("%d %d", num2, den2);
}

void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *num3=((num1*den2)+(den1*num2));
  *den3=(den1*den2);
  int i, lcm=0;
  for(i=1; i<=*num3 && i<=*den3; i++)
    {
      if(*num3%i==0 && *den3%i==0)
      {
        lcm=i;
      }
    }
}


void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("The sum of fractions %d/%d and %d/%d is %d/%d", num1, den1, num2, den2, num3, den3);
}

int main()
{
  int num1, den1, num2, den2, num3, den3;
  input(&num1, &den1, &num2, &den2);
  add(num1, den1, num2, den2, &num3, &den3);
  output(num1, den1, num2, den2, num3, den3);
  return 0;
}