#define _CRT_SECURE_NO_WARNINGS
//�����Ӧ��ʵ����������
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("****1.play  0.exit****\n");
	printf("**********************\n");
}
void game()
{
	char ret = 0;
	printf("��������Ϸ��ʼ\n");
	char board[ROW][COL] = {0};//����--���ڴ���߳���ÿһ��������Ϣ
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ��ʼ��������
	Displayboard(board, ROW, COL);
	//��ʼ����
	while (1)
	{
		//�������
		Playermove(board , ROW , COL);
		Displayboard(board, ROW, COL);
		//�ж�����Ƿ�ʤ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�жϵ����Ƿ�ʤ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("���ʤ��\n");
	else if (ret == 'O')
		printf("����ʤ��\n");
	else if (ret == 'T')
		printf("ƽ��\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ���Ƿ�ʼ��Ϸ(����1/0)��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input != 0);
}
int main()
{
	test();
	return 0;
}