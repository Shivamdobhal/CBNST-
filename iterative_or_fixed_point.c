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
    float a,b,x1,mid,tol=0;
    int max,i=0;

    printf("Enter the Maximum no. of Iterations: ");
    scanf("%d",&max);

    while (1)
    {
        printf("Enter the Values of a & b: ");
        scanf("%f %f",&a,&b);

        if(f(a)*f(b)<0)
        {
            printf("root present bwn a & b\n");
            break;
        }
        else
            printf("Invalid root......try again!!\n");
    } 

    mid=(a+b)/2;

    printf("Enter the tolerance Value: ");
    scanf("%f",&tol);
    do
    {
        i++;
        x1=g(mid);
        if(fabs(f(x1))<tol)
        {
            printf("Iteration: %d   Roots: %f\n",i,x1);
            printf("Root of the Equation: %f\n",x1);
            break;
        }
      
        printf("Iteration: %d   Roots: %f\n",i,x1);
        mid=x1;
        if(i>=max)
        {
            printf("Maximum Iteration reached!!!!\n");
            break;
            
        }
    } while(fabs(f(x1))>tol);
    
}
int main ()
{
    iteration();
    return 0;
}
