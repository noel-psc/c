#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 1024

char a[10][10];
int fileHang(FILE *fp);
int main(int argc, char *argv[])
{
	int i, x, y, p, ;
	char ch;
	char line[MAX];
    int lines = 0;
    char *f1 = argv[1];         //  后台参数
    FILE *fp1 = fopen(f1, "r"); // 创建文件指针及打开文本文件

	 if (fp1 == NULL)
    {
        printf("文件 %s 打开时发生错误", f1);
        exit(1);
    }
	fileHang(fp1);

    fclose(fp1);   // 关闭文件指针

	system("cls");
	x = 2; y = 1; p = 6; q = 9;
	for (i = 0; i <= 10; i++)
	{
		puts(a[i]);
	}
	while (x != p || y != q)
	{
		ch = _getch();
		if (ch == 's')
		{
			if (a[x+1][y] !='#')
			{
				a[x++][y] = ' ';
				a[x][y] = 'O';
			}
		}

		if (ch == 'w')
		{
			if (a[x-1][y] !='#')
			{
				a[x--][y] = ' ';
				a[x][y] = 'O';
			}
		}

		if (ch == 'a')
		{
			if (a[x][y-1] != '#')
			{
				a[x][y--] = ' ';
				a[x][y] = 'O';
			}
		}

		if (ch == 'd')
		{
			if(a[x][y+1] != '#')
			{
				a[x][y++] = ' ';
				a[x][y] = 'O';
			}
		}
		system("cls");
		for (i = 0; i <= 10; i++)
		{
			puts(a[i]);
		}
	}
	system("cls");
	printf("You win!\n");
	system("pause");
	return 0;
}

// 创建子函数
int fileHang(FILE *fp1)
{

    int lines = 0;
    char line[MAX];
    while (fgets(line, MAX, fp1) != NULL)
    {
		for (int i = 0; i <= 10; i++)
		{
			a[lines][i] = line[i];
		}
        lines++;      // 统计行数
        //printf(line); // 打印文本
    }
    //printf("\n 一共 %d 行", lines);
    return 1;
}