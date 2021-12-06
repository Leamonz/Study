/*#include<stdio.h>
#include<string.h>
int find(const char* str1, const char* str2)
{
	int count=0;
	int len1=strlen(str1);
	int len2=strlen(str2);
	char* start=str1;
	int i=0;
	for(i=0;i<len1;i++)
	{
		if(*(start+i)==*str2)
		{
			int j=0;
			for(j=1;j<len2;j++)
			{
				if(*(start+i+j)!=*(str2+j))
					break;
			}
			if(j==len2)
				count++;
		}
	}
	return count;
}
int main()
{
	char str1[100]={0};
	char str2[100]={0};
	scanf("%s",&str1);
	getchar();
	scanf("%s",&str2);
	getchar();
	int count=find(str1,str2);
	printf("%d\n",count);
	return 0;
}*/
