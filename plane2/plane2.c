//getch控制飞机的移动

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
		system("cls");		//清屏函数
		//输出飞机上面的空行
		for(i=0;i<x;i++)
			printf("\n");
		//输出飞机左边的空格
		for(j=0;j<y;j++)
			printf(" ");
		printf("*");		//输出飞机
		printf("\n");

		if(kbhit())			//判断是否有输入
		{
			input = getch();//根据用户的输入来移动不必用回车
			if(input=='a')
				y--;		//位置左移
			if(input=='d')
				y++;		//位置右移
			if(input=='w')
				x--;		//位置上移
			if(input=='s')
				x++;		//位置下移
		}
	}
	return 0;
}