#include <stdio.h>
#include <math.h>

struct _fraction
{
int num, den;
}

typedef _fraction Fraction

Fraction input_fraction()
{
  Fraction x;
  printf("Enter the numerator and denominator of the fraction: \n");
  scanf("%d %d", &x.num, &x.den);
  return x;
}

Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{}

int main()
{}