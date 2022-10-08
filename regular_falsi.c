//falsi
#include <stdio.h>
#include <math.h>

float f(float x)
{
    return  x*log10(x)-1.2;
}

void falsi()
{
float a,b;
float fal,tol;
    
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
        fal=(a*f(b)-b*f(a))/(f(b)-f(a));
        if(f(a)*f(fal)<0)
             b=fal;
        else
             a=fal; 
printf(" %d iteration   :",i);
printf("   root of eqn = %f",fal);
printf("   value of function = %f\n",f(fal));
    }while(fabs(f(fal))>tol);  

    printf("final solution : %f",fal);
}
int main()
{
 falsi();
 return 0;
}
