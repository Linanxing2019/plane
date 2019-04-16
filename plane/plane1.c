//scanf控制飞机的移动

# include<stdio.h>
# include<stdlib.h>
int main()
{
	int i,j;
	int x=5;
	int y=10;
	char input;

	while(1)
	{
		system("cls");		//清屏函数
		for(i=0;i<x;i++)
			printf("\n");
		for(j=0;j<y;j++)
			printf(" ");
		printf("*");		//输出飞机
		printf("\n");		

		scanf("%c",&input);	//根据用户输入的不同来移动
		if(input=='a')
			y--;
		if(input=='d')
			y++;
		if(input=='w')
			x--;
		if(input=='s')
			x++;
	}
	return 0;
}