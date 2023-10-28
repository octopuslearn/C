#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//只会打印数字
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i= 1; i <= 10; i++)	//前闭后闭
//	for(i = 0; i<10; i++)	//前闭后开---推荐,判断部分是几就执行几次
//	{
//		printf("%d ", i);
//		i = 5;
//	}
//	return 0;
//}

/*for变种*/
//初始化、判断、调整都可省略略
//###省略判断---恒为真
//int main()
//{
//	int i = 1;
//	for (;;)	
//		{
//			printf("%d ", i);
//			i = 5;
//		}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("sss\n");	//9个sss
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)	//###理由是：j=3后，没有被初始化为0
//		{
//			printf("sss\n");	//###3个sss
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0,j=0; i < 2 && j<5; ++i,j++)
//	{
//		printf("sss\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = 0; j=0; i++, j++)	//###判断部分j=0，将j赋值为0---判断部分为假---一次也不执行
//	{
//		j++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	do {
//		printf("%d ", i);
//		i++;
//		if (i == 5)
//		{
//			break;
//		}
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	do {
//		printf("%d ", i);
//		i++;
//		if (i == 5)
//		{
//			continue;
//		}
//	} while (i <= 10);
//	return 0;
//}

/*n!*/
//int main()
//{
//	int i = -1;
//	int j = 1;
//	if (i == 1)
//	{
//		printf("1");
//	}
//	else
//	{
//		while (i != 1)
//		{
//			j = j * i;
//			i--;
//		}
//		printf("%d ", j);
//	}
//	return 0;
//}


/*n!*/
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 4;
//	for (i = 1; i <= n; i++)
//	{
//		j = j * i;
//	}
//	printf(" % d", j);
//	return 0;
//}

/*1!+2!+……10!*/
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 1;
//	int sum = 0;
//	for (n=1; n<=10; n++)
//	{
//		j = 1;
//		for (i = 1; i <= n; i++)
//		{
//			j *= i;
//		}
//		printf(" % d\n", j);
//		sum += j;
//		//j = 1;	//求阶乘前将j初始化为1
//	}
//	printf("sum:	 % d\n", sum);
//	
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 3;
//	int sum = 0;
//
//	for (i = 1; i <= n; i++)
//	{
//		j *= i;		//效率更高，3！=3*2！
//		sum += j;	
//	}
//	printf("sum:	 % d\n", sum);
//
//	return 0;
//}

/*有序数组中找数*/
//轮询法
//#include "string.h"
//int main()
//{
//	//i < (strlen(arr1) - 1) ###不行
//	int i = 1;
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i<=9; i++)
//	{
//		if (arr1[i] == 7)
//		{
//			printf("找到了arr1[%d]=7\n", i);
//			break;
//		}
//	}
//	printf("未找到11\n");
//	return 0;
//}

/*折半查找（二分查找）最坏查log2N次
轮询法最坏N次*/
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;	//要查找的数字
//	int sz = sizeof(arr1) / sizeof(arr1[0]);	//元素的个数
//	int left = 0;
//	int right = sz - 1;
//	
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr1[mid] > k)		//7小于中间值，7在左
//		{
//			right = mid - 1;
//		}
//		else if (arr1[mid] < k)	//7大于中间值，7在右
//		{
//			left = mid + 1;
//		}
//		else if (arr1[mid] == k)
//		{
//			printf("找到了arr1[%d]=7\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}



//w*******************
//we******************
//wei**************** !
//weid * *************!!
//weida * ***********!!!
//weida * *********!!!
//weida d******** u !!!
//weida de****** yu !!!
//weida de**** gyu !!!
//weida de z** ngyu !!!
//weida de zhangyu !!!
//int main()
//{
//	char arr1[] = "weida de zhangyu !!!";
//	char arr2[] = "********************";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]);
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr1[] = "123456";
//	char password[20] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>	");
//		//scanf("% s", password);	//不可以有空格
//		//请输入密码： > 123
//		//	密码错误！
//		//	请输入密码： > 密码错误！
//		//	请输入密码： > 密码错误！
//		//	密码错误三次，退出程序#
//		//scanf(" % s", password);
//		scanf(" %s", password);
//		//字符串不可以这样比较
//		//if(arr2 == arr1)
//		if (strcmp(password, arr1) == 0)
//		{
//			printf("密码正确！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误！\n");
//		}
//
//	}
//
//	if (i == 3)
//	{
//		printf("密码错误三次，退出程序#\n");
//	}
//	return 0;
//}


#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("***************************************\n");
	printf("*************** 1.play ****************\n");
	printf("*************** 2.exit ****************\n");
	printf("***************************************\n");
}

void game()
{
	/*1.获取随机数*/
	//int in_val = (unsigned int)rand();
	//int val =in_val % 100 + 1;
	int val = rand()%100 + 1;
	//printf("val：> %d", val);

	/*2.猜数字*/
	int gass = 0;



	while (1)
	{
		printf("猜数字：> ");
		scanf("%d", &gass);

		if (gass > val)
			printf("猜大了\n");
		else if (gass < val)
			printf("猜小了\n");
		else if(gass == val)
		{
			printf("猜对了！");
			break;
		}
	}
}

int main()
{
	//int i = 0;
	/*menu();*/
	/*srand(time(NULL));*/
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("选择游戏：>\n");
		scanf("%d", &i);
		switch (i)
		{
			case 1:
				game();
				break;
			case 2:
				printf("游戏结束\n");
				break;
			default:
				/*menu();*/
				printf("选择错误，重新选择\n");
				break;
		}
	} while (i);
	
	return 0; 
}