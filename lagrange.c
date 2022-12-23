#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    float x[n],y[n],sum=0,term=1,v;
    int i,j;

    printf("Enter the values of X: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }

    printf("Enter the values of Y: \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    printf("Enter the value you want to calculate: ");
    scanf("%f",&v);

    for(i=0;i<n;i++)
    {
        term=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                term=term*((v-x[j])/(x[i]-x[j]));
            }
        }
        sum=sum+(term*y[i]);
    }
    printf("Value at %0.2f is: %0.2f",v,sum);
    return 0;
}
