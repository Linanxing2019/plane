//��ʾ���ӵķɻ�ͼ�� ����50�����ӳ�

# include<stdio.h>
# include<stdlib.h>
# include<conio.h>
# include<windows.h>
int main()
{
	int i,j;
	int x=5;
	int y=10;
	char input;
	while(1)
	{
		system("cls");		//��������
		//����ɻ�����Ŀ���
		for(i=0;i<x;i++)
			printf("\n");
		//����ɻ���ߵĿո�
		for(j=0;j<y;j++)
			printf(" ");
		//����ɻ�
		printf("  *\n");
		for(j=0;j<y;j++)
			printf(" ");
		printf("*****\n");
		for(j=0;j<y;j++)
			printf(" ");
		printf(" * * \n");

		if(kbhit())		//�ж��Ƿ�������
		{
			input=getch();		//�����û�����Ĳ�ͬ���ƶ�����������س�
			if(input=='a')
				y--;		//λ������
			if(input=='d')
				y++;		//λ������
			if(input=='w')
				x--;		//λ������
			if(input=='s')
				x++;		//λ������
		}
		Sleep(50);
	}
	return 0;
}