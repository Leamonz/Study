#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int j = 0;
	printf("n = ");
	scanf("%d", &n);
	for (j = 0; j < n; j++)
	{
		int count = 0;
		int a = 0;
		int b = 0;
		printf("����a��b:\n");
		scanf("%d %d", &a, &b);
		for (i = a; i <= b; i++)
		{
			int x = i % 10;//��λ
			int y = (i%100-x)/10;//ʮλ
			int z = i / 100;//��λ
			if (x * x * x + y * y * y + z * z * z == i)
			{
				printf("%d ", i);
				count++;
			}
		}
		if (count == 0)
		{
			printf("%d\n", -1);
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}