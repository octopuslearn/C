#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//ֻ���ӡ����
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
//	for (i= 1; i <= 10; i++)	//ǰ�պ��
//	for(i = 0; i<10; i++)	//ǰ�պ�---�Ƽ�,�жϲ����Ǽ���ִ�м���
//	{
//		printf("%d ", i);
//		i = 5;
//	}
//	return 0;
//}

/*for����*/
//��ʼ�����жϡ���������ʡ����
//###ʡ���ж�---��Ϊ��
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
//			printf("sss\n");	//9��sss
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
//		for (; j < 3; j++)	//###�����ǣ�j=3��û�б���ʼ��Ϊ0
//		{
//			printf("sss\n");	//###3��sss
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
//	for (i = 0, j = 0; j=0; i++, j++)	//###�жϲ���j=0����j��ֵΪ0---�жϲ���Ϊ��---һ��Ҳ��ִ��
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

/*1!+2!+����10!*/
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
//		//j = 1;	//��׳�ǰ��j��ʼ��Ϊ1
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
//		j *= i;		//Ч�ʸ��ߣ�3��=3*2��
//		sum += j;	
//	}
//	printf("sum:	 % d\n", sum);
//
//	return 0;
//}

/*��������������*/
//��ѯ��
//#include "string.h"
//int main()
//{
//	//i < (strlen(arr1) - 1) ###����
//	int i = 1;
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i<=9; i++)
//	{
//		if (arr1[i] == 7)
//		{
//			printf("�ҵ���arr1[%d]=7\n", i);
//			break;
//		}
//	}
//	printf("δ�ҵ�11\n");
//	return 0;
//}

/*�۰���ң����ֲ��ң����log2N��
��ѯ���N��*/
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;	//Ҫ���ҵ�����
//	int sz = sizeof(arr1) / sizeof(arr1[0]);	//Ԫ�صĸ���
//	int left = 0;
//	int right = sz - 1;
//	
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr1[mid] > k)		//7С���м�ֵ��7����
//		{
//			right = mid - 1;
//		}
//		else if (arr1[mid] < k)	//7�����м�ֵ��7����
//		{
//			left = mid + 1;
//		}
//		else if (arr1[mid] == k)
//		{
//			printf("�ҵ���arr1[%d]=7\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
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
//		printf("���������룺>	");
//		//scanf("% s", password);	//�������пո�
//		//���������룺 > 123
//		//	�������
//		//	���������룺 > �������
//		//	���������룺 > �������
//		//	����������Σ��˳�����#
//		//scanf(" % s", password);
//		scanf(" %s", password);
//		//�ַ��������������Ƚ�
//		//if(arr2 == arr1)
//		if (strcmp(password, arr1) == 0)
//		{
//			printf("������ȷ��\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	}
//
//	if (i == 3)
//	{
//		printf("����������Σ��˳�����#\n");
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
	/*1.��ȡ�����*/
	//int in_val = (unsigned int)rand();
	//int val =in_val % 100 + 1;
	int val = rand()%100 + 1;
	//printf("val��> %d", val);

	/*2.������*/
	int gass = 0;



	while (1)
	{
		printf("�����֣�> ");
		scanf("%d", &gass);

		if (gass > val)
			printf("�´���\n");
		else if (gass < val)
			printf("��С��\n");
		else if(gass == val)
		{
			printf("�¶��ˣ�");
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
		printf("ѡ����Ϸ��>\n");
		scanf("%d", &i);
		switch (i)
		{
			case 1:
				game();
				break;
			case 2:
				printf("��Ϸ����\n");
				break;
			default:
				/*menu();*/
				printf("ѡ���������ѡ��\n");
				break;
		}
	} while (i);
	
	return 0; 
}