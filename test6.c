/*#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int arr[100][100]={0};
	int row=n;
	int col=n;
	int i=0;
	int num=1;
	if(n%2==0)
	{
		for(i=0;i<n/2;i++)
		{
			int j,k,p,q;
			for(j=i;j<=col-i-1;j++)
			{
				arr[i][j]=num;
				num++;
			}
			for(k=i+1;k<=row-i-1;k++)
			{
				arr[k][col-i-1]=num;
				num++;
			}
			for(p=col-i-2;p>=i;p--)
			{
				arr[row-i-1][p]=num;
				num++;
			}
			for(q=row-i-2;q>=i+1;q--)
			{
				arr[q][i]=num;
				num++;
			}
		}
	}
	else if(n%2==1)
	{
		for(i=0;i<(n+1)/2;i++)
		{
			int j,k,p,q;
			for(j=i;j<=col-i-1;j++)
			{
				arr[i][j]=num;
				num++;
			}
			for(k=i+1;k<=row-i-1;k++)
			{
				arr[k][col-i-1]=num;
				num++;
			}
			for(p=col-i-2;p>=i;p--)
			{
				arr[row-i-1][p]=num;
				num++;
			}
			for(q=row-i-2;q>=i+1;q--)
			{
				arr[q][i]=num;
				num++;
			}
		}
	}
	int l,m;
	for(l=0;l<row;l++)
	{
		for(m=0;m<col;m++)
		{
			printf("%-5d",arr[l][m]);
		}
		printf("\n");
	}
	return 0;
}*/
