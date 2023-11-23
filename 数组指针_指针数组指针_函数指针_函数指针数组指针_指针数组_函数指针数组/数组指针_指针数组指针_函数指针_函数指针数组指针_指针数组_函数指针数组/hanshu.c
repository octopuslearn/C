#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



int add(int x, int y)
{
	return x + y;
}

int main()
{
	int (*p)(int, int) = add;
	int ret = p(1, 2);	//可行
	//int ret = (*p)(1, 2);	//可行 *在这里没有过任何用处
	//int ret = (****p)(1, 2);//可行
	/*int ret = *p(1, 2);	//错的：*的操作数必须是指针但它具有类型int*/
	printf("ret=%d", ret);
	return 0;
}



int kkk(int x, int y)
{
	return x * y;
}

int kkk_callback(int (*p)(int, int))
{
	p()
}