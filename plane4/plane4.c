//发射激光 50毫秒延迟

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
	int isFire=0;

	while(1)
	{
		system("cls");		//清屏函数
		if(isFire==0)		//输出飞机上面的空行
		{
			for (i=0;i<x;i++)
			printf("\n");
		}
		else               //输出飞机上面的激光线
		{
			for(i=0;i<x;i++)
			{
				for(j=0;j<y;j++)
					printf(" ");
				printf("  |\n");
			}
			isFire=0;
		}
		//输出一个复杂的飞机图案
		for(j=0;j<y;j++)
		printf(" ");
		printf("  *\n");
		for(j=0;j<y;j++)
			printf(" ");
		printf("*****\n");
		for(j=0;j<y;j++)
			printf(" ");
		printf(" * * \n");
		if(kbhit())		//判断是否有输入
		{
			input=getch();		//根据用户的不同输入来移动
			if(input=='a')
				y--;		//位置左移
			if(input=='d')
				y++;		//位置右移
			if(input=='w')
				x--;		//位置上移
			if(input=='s')
				x++;		//位置下移
			if(input==' ')
				isFire=1;	//开炮！！
		}
		Sleep(50);			//延迟
	}
	return 0;
}