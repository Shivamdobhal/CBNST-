#include <stdio.h>
#include <conio.h>
#include <math.h>
float f(float x)
{
  return 1 / (1 + (x * x)); 
}

void main ()
{

  printf ("14.SIMPSON’S 1/3rd METHOD\n");
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
  sum=f(a)+4*f(a+h)*f(b);
for(i=3;i<n;i+=2)
{
sum+=2*f(a+(i-1)*h)+4*f(a+i*h);
}
result=sum*h/3;

printf("\n\n\n\n Value of the integral is %6.4f\t",result);

printf("\n\n\n Press Enter to Exit");
getch();

}



