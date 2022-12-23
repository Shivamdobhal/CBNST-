#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (cos(x)-(3*x)+1);
}

float g(float x)
{
    return ((cos(x)+1)/3);
}

void iteration()
{
    float a,x1,tol;
    int max,i=0;

    printf("Enter the maximum no. of Iterations: ");
    scanf("%d",&max);
 
        printf("Enter the initial Value  ");
        scanf("%f",&a);

      printf("Enter the tolerance Value: ");
      scanf("%f",&tol);

    do
    {
        i++;
        x1=g(a);
        if(fabs(f(x1))<tol)
        {
            printf("Iteration: %d   Roots: %f\n",i,x1);
            printf("Root of the Equation: %f\n",x1);
            break;
        }
        printf("Iteration: %d   Roots: %f\n",i,x1);
               a=x1;
        if(i>=max)
        {
            printf("max Iteration reached!!!!{not convergent)\n");
            break;
            
        }            
    } while(fabs(f(x1))>tol);
    
    printf(" final root is %f",x1);
}

int main ()
{
    iteration();
    return 0;
}
