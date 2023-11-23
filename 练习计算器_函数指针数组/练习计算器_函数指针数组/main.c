#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int x, int y)
{
	return x + y;
}
int jianfa(int x, int y)
{
	return x - y;
}
int cheng(int x, int y)
{
	return x * y;
}
int chu(int x, int y)
{
	return x / y;
}

//int (*p)(int, int);	//函数指针
//int(* arr[4])(int, int);	//函数指针数组
//int(* (*p)[4])(int, int);	//函数指针数组指针
int main()
{
	int (*arr[])(int, int) = { NULL, add ,jianfa ,cheng ,chu };	//函数指针数组
	int a = 0;
	int b = 0;
	int fuhao = 0;
	//这样会有问题 1.加法是函数指针数组的第0个元素	2.怎么说呢
	do
	{
		printf("请选择运算符：");
		scanf("%d", &fuhao);

		if (fuhao >= 1 && fuhao <= 4)
		{
			printf("请输入两个数: ");
			/*错的：理由：scanf中没有a=这种 scanf("a=%db=%d", &a, &b);*/
			scanf("%d%d", &a, &b);	//a=1,b=23
			int value_out = arr[fuhao](a, b);


			printf("value= %d\n", value_out);
		}
		else if (fuhao == 5)
		{
			printf("程序结束\n");
			break;
		}
		else
		{
			printf("错误：无此运算符\n");
		}
	} while (fuhao);
	return 0;
}