
#include<stdio.h>
int main()
{
	float bill[]={100,50,20,10,5,1,0.1,0.05,0.01};
	int sz=sizeof(bill)/sizeof(bill[0]);
	int num[10]={0};
	float A=0;
	int i=0;
	int j=0;
	int n=0; 
	printf(" ‰»În£∫");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		printf(" ‰»ÎA£∫\n");
		scanf("%f",&A);
		for(i=0;i<sz;i++)
		{
			num[i]=A/bill[i];
			A=A-num[i]*bill[i];
		}
		for(i=0;i<sz;i++)
		{
			printf("%d ",num[i]);
		}
		printf("\n");
	}
	return 0;
}
