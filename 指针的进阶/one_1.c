#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//ע�⣺�����ǰ�"hello bit"�ַ������׵�ַ�ŵ���*p��
//	char* p = "hello bit";	//h	//������ע�⣺�����ַ��������ܸ�
//	*p = "s";
//	char arr[] = "hello bit";	//hello bit
//	printf("%c\n", *p);
//	printf("%s\n", arr);
//	return 0;
//}




//���ԡ���ָoffice��
//һ��������
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";	//�����ǣ�"hello bit."�ǳ����ַ��������ɸ��ġ�����ֻ��һ���ռ䣬����str3 and str4 are same
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");	
//	else
//		printf("str3 and str4 are not same\n");
//
//
//	/*str1 and str2 are not same
//		str3 and str4 are same*/
//	return 0;
//}



/*ָ������*/
/*
//ָ�����������飬�����д����ָ��
int main()
{
	//int* arr[4];	//�������ָ�������
	//����д�����ټ�
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[4] = { &a,&b,&c };	//��������д
	int i = 0;
	for (i = 0; i < 3; i++)
		printf("%d\n", *(arr[i]));
	*/

	/*ָ������
	int a[5] = { 1,2,3 };
	int b[5] = { 1,2,3 };
	int c[5] = { 1,2,3 };
	int* d[] = { a,b,c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d	", *(d[i] + j));
			//[j]��ͬ��+j �ٽ�����
			printf("%d	", d[i][j]);
		}
		printf("\n");
		//1       2       3       0       0
		//1       2       3       0       0
		//1       2       3       0       0
	}
	
	return 0;
}*/



//int main()
//{
//	//�����������
//	// &arr-�����ַ &arr+1 �ӵ�������������ĵ�ַ
//	// arr-������Ԫ�ص�ַ	arr+1 �ӵ�������һ��Ԫ�صĵ�ַ
//	//int arr[10];	//����
//	//int arr[10] = {};	//����
//	int arr[10] = { 0 };	//���� ������ȫ��ʼ����
//	printf("%p\n", &arr);	//010FF72C	&arr-�����ַ
//	printf("%p\n", arr);	//010FF72C	arr-����Ԫ���׵�ַ��arr[0]��ַ	
//
//	printf("%p\n", &arr + 1);	//010FF754	010FF754-010FF72C=40
//	printf("%p\n", arr + 1);	//010FF730	010FF730-010FF72C=4
//	return 0;
//}


/*����ָ��*/
//int main()
//{
//	/*������ô��
//	int arr[10] = { 0,1,2,3,4,5,6 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		//(*p)-������ָ������ã��൱�ڵõ�������Ԫ���׵�ַ����
//		//(*p)+i
//		//*((*p)+i
//		printf("%d	", *((*p)+i));	//0       1       2       3       4       5       6       0       0       0
//	*/
//	return 0;
//}





//void my_print(int arr_2[2][3], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d	", arr_2[i][j]);
//		}
//		printf("\n");
//		//1       2       3
//		//4       5       6
//	}
//}
//
////��ά���������������Ԫ�ص�ַ������Ԫ�ص�ַ�ǵ�һ�У���int arr[3]��&arr��
//void my_print_2(int(*p)[3],int r,int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			//�˴���p-�����һ�У�һ�еĵ�ַ
//			//p+i-����ĳһ�еĵ�ַ
//			//*(p+i)-�ҵ�������ĳһ�е���Ԫ�صĵ�ַ
//			printf("%d ", * (*(p + i) + j));
//		}
//		printf("\n");
//		//1 2 3
//		//4 5 6
//	}
//}
//
//int main()
//{
//	int arr[2][3] = {
//		{1,2,3},
//		{4,5,6}
//	};
//	//��ά�����������-�����һ�У�һ�еĵ�ַ
//	my_print(arr,2,3);
//	 
//	my_print_2(arr, 2, 3);
//	return 0;
//}

//parr3�Ǹ����飬�Ǵ洢����ָ������飬�ܴ��10������ָ�롣ÿ������ָ��ָ��һ�����飬������int�͵ģ�������5��Ԫ��
//int(*parr3[10])[5];


