//getch���Ʒɻ����ƶ�

# include<stdio.h>
# include<stdlib.h>
# include<conio.h>
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
		printf("*");		//����ɻ�
		printf("\n");

		if(kbhit())			//�ж��Ƿ�������
		{
			input = getch();//�����û����������ƶ������ûس�
			if(input=='a')
				y--;		//λ������
			if(input=='d')
				y++;		//λ������
			if(input=='w')
				x--;		//λ������
			if(input=='s')
				x++;		//λ������
		}
	}
	return 0;
}