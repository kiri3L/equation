#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<math.h>

int equation(int num, ...)
{
	va_list argptr;
	va_start(argptr, num);
	double x1,x2;
	float a,b,c,d;
    b = c = 0;
    if (num == 2)
	{   
		a = va_arg(argptr,double);
		b = va_arg(argptr,double);
	}else
	{
		
		a = va_arg(argptr,double);
		b = va_arg(argptr,double);
		c = va_arg(argptr,double);
	}
	d = b*b - 4*a*c;
	if ( d < 0)
	{
		printf("\n no solution\n");
		return 0;
	}
	x1 = ((-1.)*b - sqrt(d))/(2.*a);
	x2 = ((-1.)*b + sqrt(d))/(2.*a);
	va_end(argptr);
	if ( x1 == x2 )
	{
		printf("\n X1 = X2 = %lf\n",x1);
	    return 0;
	}
	printf("\n\tX1= %lf\tX2=  %lf\n",x1,x2);
	return 0;
}

int main()
{
	 double a, b, c;
	 a = b = c = 0;
	 printf("\n\tEnter a,b,c\n");
	 scanf("%lf%lf%lf",&a,&b,&c);
	 if ( a == 0)
	 {
		 printf("ti dypak");
		 return 0;
	 }
	 if (c == 0)
	 {
		 equation(2,a,b);
		 return 0;
	 }
	 equation(3,a,b,c);
}
