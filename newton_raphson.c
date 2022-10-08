#include<stdio.h>
#include<math.h>

float f(float x)
{
    return((x*x*x)-x-1);
}

int main()
{
    float a,b,x;
    int i=1;
    do
    {
        printf("Enter any two values: ");
        scanf("%f %f",&a,&b);

        if((f(a)*f(b))<0)
        {
            i=0;
        }
        else
        printf("Invalid Roots\n");
    } while (i);

    i=1;
     float tol,mid;
     int itr=0;
     printf("Enter the allowed tolorence value: ");
     scanf("%f",&tol);
     do
     {
        itr++;
        mid=(a+b)/2;
        printf("Iteration no : %d,roots are : %f %f, value at current iteration %f\n",itr,a,b,f(mid));
        if(fabs(f(mid))<tol)
        {
            i=0;
            printf("Roots of the equation are : %f",mid);
        }
        if(f(a)*f(mid)<0)
            b=mid;
        else if(f(mid)*f(b)<0)
            a=mid;
     } while (i);
     
    return 0;
}
