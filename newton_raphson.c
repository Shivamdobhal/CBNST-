#include <stdio.h>
#include <math.h>

float f(float x)
{
    
    return (x*sin(x)+cos(x));
}

float g(float x)
{
   
    return (x*cos(x));
}

int main()
{
    float a,b,x1,mid,tol=0;
    int max,i=0;

    printf("Enter the Maximum no. of Iterations: ");
    scanf("%d",&max);

    while(1)
    {
        printf("Enter the Values of a & b: ");
        scanf("%f %f",&a,&b);

        if(f(a)*f(b)<0)
        {
            printf("roots exist\n");
            break;
        }
        else
            printf("Invalid root......try again!!\n");
    } 

    mid=(a+b)/2;

    printf("Enter the allowed tolor Value: ");
    scanf("%f",&tol);
    while(1)
    {
        i++;
        if(g(mid)==0)
        {
            printf("Mathematical tolor\n");
            return 0;
        }
        x1=mid-(f(mid)/g(mid));

        if(fabs(f(x1))<tol)
        {
            printf("Iteration: %d   Roots: %f\n",i,x1);
            printf("Root of the Equation: %f\n",x1);
            return 0;
        }
        printf("Iteration: %d   Roots: %f\n",i,x1);
        mid=x1;
        if(i>=max)
        {
            printf("Maximum Iteration reached!!!!\n");
            return 0;
        }
    } 
    
}
