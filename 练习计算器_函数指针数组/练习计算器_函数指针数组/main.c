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

//int (*p)(int, int);	//����ָ��
//int(* arr[4])(int, int);	//����ָ������
//int(* (*p)[4])(int, int);	//����ָ������ָ��
int main()
{
	int (*arr[])(int, int) = { NULL, add ,jianfa ,cheng ,chu };	//����ָ������
	int a = 0;
	int b = 0;
	int fuhao = 0;
	//������������ 1.�ӷ��Ǻ���ָ������ĵ�0��Ԫ��	2.��ô˵��
	do
	{
		printf("��ѡ���������");
		scanf("%d", &fuhao);

		if (fuhao >= 1 && fuhao <= 4)
		{
			printf("������������: ");
			/*��ģ����ɣ�scanf��û��a=���� scanf("a=%db=%d", &a, &b);*/
			scanf("%d%d", &a, &b);	//a=1,b=23
			int value_out = arr[fuhao](a, b);


			printf("value= %d\n", value_out);
		}
		else if (fuhao == 5)
		{
			printf("�������\n");
			break;
		}
		else
		{
			printf("�����޴������\n");
		}
	} while (fuhao);
	return 0;
}