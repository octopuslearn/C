#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



int add(int x, int y)
{
	return x + y;
}

int main()
{
	int (*p)(int, int) = add;
	int ret = p(1, 2);	//����
	//int ret = (*p)(1, 2);	//���� *������û�й��κ��ô�
	//int ret = (****p)(1, 2);//����
	/*int ret = *p(1, 2);	//��ģ�*�Ĳ�����������ָ�뵫����������int*/
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