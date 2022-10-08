//bisection
#include <stdio.h>
#include <math.h>

float f(float x)
{
    return  x*x-3;
}

void bisection()
{
float a,b;
float mid,tol;

    
        printf("enter the values of a and b:");
        scanf("%f %f",&a,&b);
        if(f(a)*f(b)<0)
        {
            printf("root exist between a and b");
        }
        else
        {
            printf("root not exist between a and b");
        }

        printf("enter the tolerance value : ");
        scanf("%f",&tol);
        int i=0;
    do
    {
        i++;
        mid=(a+b)/2;
        if(f(a)*f(mid)<0)
             b=mid;
        else
             a=mid; 
printf(" %d iteration   :",i);
printf("   root of eqn = %f",mid);
printf("   value of function = %f\n",f(mid));
    }while(fabs(f(mid))>tol);  

    printf("final solution : %f",mid);
}
int main()
{
 bisection();
 return 0;
}
