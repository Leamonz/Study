/*#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		int a=0;
		scanf("%d",&a);
		int j,k,m,p,q;
		for(j=a;j<=a+4;j++)
		{
			for(k=a;k<=a+4;k++)
			{
				if(k==j)
					continue;
				else
					for(m=a;m<=a+4;m++)
					{
						if((m==k)||(m==j))
							continue;
						else
							for(p=a;p<=a+4;p++)
							{
								if((p==m)||(p==k)||(p==j))
									continue;
								else
									for(q=a;q<=a+4;q++)
									{
										if((q==p)||(q==m)||(q==k)||(q==j))
											continue;
										else
											printf("%d%d%d%d%d\n",j,k,m,p,q);
									}
							}
					}
			}
		}
	}
	return 0;
}*/
