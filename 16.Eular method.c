#include<stdio.h>
float f(float x,float y)
{   
    return (x-y)/(x+y);
}
int main ( )
{
int i,n;
float a,b,h,xn,x,y;
printf("\n Enter the values: a,b,h,xn: \n");
scanf ("%f%f%f%f",&a,&b,&h,&xn);
n=(xn-a)/h+1;
for (i=1;i<=n;i++)
{
y=b+h*f(a,b);
x=a+h;
printf("\n X=%f Y=%f",a,b);
if(x<xn)
{
a=x;
b=y;
}
}
return 0;
}
