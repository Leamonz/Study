#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		int a,b,c;
		scanf("%d,%d,%d",&a,&b,&c);
		int num1=a*a+b*b-c*c;
		int num2=b*b+c*c-a*a;
		int num3=c*c+a*a-b*b;
		if((a+b<=c)||(b+c<=a)||(c+a)<=b)
		{
			printf("illegal\n");
		}
		else if((num1==0)||(num2==0)||(num3==0))
		{
			printf("right\n");
		}
		else if((num1>0)&&(num2>0)&&(num3>0))
		{
			printf("acute\n");
		}
		else if((num1<0)||(num2<0)||(num3<0))
		{
			printf("obtuse\n");
		}
	}
	return 0;
}
