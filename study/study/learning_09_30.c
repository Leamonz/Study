#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	printf("Enter a date:");
//	scanf("%d/%d/%d", &month, &date, &year);
//	printf("You entered the date:%d%.2d%d", year, month, date);
//	return 0;
//}
//int main()
//{
//	int item_number = 0;
//	float unit_price = 0;
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	printf("Enter item number:");
//	scanf("%d", &item_number);
//	printf("Enter unit price:");
//	scanf("%f", &unit_price);
//	printf("Enter purchase date:");
//	scanf("%d/%d/%d", &month, &day, &year);
//	printf("Item\tUnit Price\tPurchase Date\n%-2d\t$%8.2f\t%-d/%-d/%-d", item_number, unit_price, month, day, year);
//	return 0;
//}
//int main()
//{
//	char ISBN[] = "";
//	int i = 0;
//	printf("Enter ISBN:");
//	scanf("%s", &ISBN);
//	printf("GS1 prefix:");
//	while (ISBN[i] != '-')
//	{
//		printf("%c", ISBN[i]);
//		i++;
//	}
//	i++;
//	printf("\nGroup identifier:");
//	while (ISBN[i] != '-')
//	{
//		printf("%c", ISBN[i]);
//		i++;
//	}
//	i++;
//	printf("\nPublisher code:");
//	while (ISBN[i] != '-')
//	{
//		printf("%c", ISBN[i]);
//		i++;
//	}
//	i++;
//	printf("\nItem number:");
//	while (ISBN[i] != '-')
//	{
//		printf("%c", ISBN[i]);
//		i++;
//	}
//	i++;
//	printf("\nCheck digit:");
//	while (i < strlen(ISBN))
//	{
//		printf("%c", ISBN[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	//printf("%d\n", sizeof(int*));//4
//	//printf("%d\n", sizeof(float*));//4
//	//printf("%d\n", sizeof(double*));//4
//	//printf("%d\n", sizeof(short*));//4
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//
//	printf("%p\n", pc);//�洢�ĵ�ַ����һ����
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������----��Ԫ�صĵ�ַ
//	//дһ��������arr�е�����Ԫ�ر��1
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a;//�ֲ�����δ��ʼ����Ĭ��Ϊ���ֵ
//	int* p = &a;//��Ϊa�����ֵ������p��һ�������ַ��Ұַ��
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++) = 1;//���ų�������У�ָ��p��������arr����ķ�Χ�����Ұָ��
//	}
//	return 0;
//}