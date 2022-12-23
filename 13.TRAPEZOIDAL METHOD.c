#include <stdio.h>
#include <math.h>
float f(float x)
{
  return 1 / (1 + (x * x)); 
}
void main ()
{
  float result = 1;
  float a, b;
  float h, sum;

  int i, j;
  int n;

  printf ("\n\n Enter the range - ");
  printf ("\n\n Lower Limit a - ");
  scanf ("%f", &a);

  printf ("\n\n Upper Limit b - ");
  scanf ("%f", &b);

  printf ("\n\n Enter number of subintervals - ");
  scanf ("%d", &n);

  h = (b - a) / n;
  sum = 0;
  sum = f(a) + f(b);
  for (i = 1; i < n; i++)
    {
      sum += 2 * f(a + i);
    }
  result = sum * h / 2;
  printf ("n\n\n\n Value of the integral is %6.4f\t", result);
}


