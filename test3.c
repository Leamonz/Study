/*#include<stdio.h>
int Max(int x,int y)
{
	return x>y?x:y;
}
int Min(int x,int y)
{
	return x<y?x:y;
}
double sum(int a,int b)
{
	double sum=0;
	int max=Max(a,b);
	int min=Min(a,b);
	int i=0;
	for(i=min;i<=max;i++)
	{
		if(i==0)
		{
			sum+=0;
			continue;
		}
		else
		{
			sum+=1.0/i;
			continue;
		}
	}
	return sum;
}
int main()
{
	int n,a,b;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%.3lf\n",sum(a,b));
	}
	return 0;
}*/
