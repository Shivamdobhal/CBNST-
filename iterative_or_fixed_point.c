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

int main()
{
    float a,b,x1,x0,err=0;
    int max,i=0;

    printf("Enter the Maximum no. of Iterations: ");
    scanf("%d",&max);

    do
    {
        printf("Enter the Values of a & b: ");
        scanf("%f %f",&a,&b);

        if(f(a)*f(b)<0)
        {
            break;
        }
        else
            printf("Invalid root......try again!!\n");
    } while (1);

    x0=(a+b)/2;

    printf("Enter the allowed Error Value: ");
    scanf("%f",&err);
    do
    {
        i=i+1;
        x1=g(x0);

        if(fabs(f(x1))<err)
        {
            printf("Iteration: %d   Roots: %f\n",i,x1);
            printf("Root of the Equation: %f\n",x1);
            return 0;
        }
        printf("Iteration: %d   Roots: %f\n",i,x1);
        x0=x1;
        if(i>=max)
        {
            printf("Maximum Iteration reached!!!!\n");
            return 0;
        }
    } while (1);
    
}
