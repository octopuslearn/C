#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

///*һά���鴫��*/
///*��� ����̳̱��벻��
//void test_0(int arr)
//{
//	printf("test_0\n");	//test_0
//}
//*/
//void test(int arr[])
//{
//	printf("test\n");	//test
//}
//
//void test_1(int* p)
//{
//	printf("test_1\n");	//test_1
//}
//
///*��ά���鴫��*/
//void test_2(int a[][4])
//{
//	printf("test_2\n");	//test_2
//}
//void test_3(int(*p)[4])
//{
//	printf("test_3\n");	//test_3
//}
///*gcc ����̶̳����벻��
//void test_4(int* b[4])
//{
//	printf("test_4\n");	//test_4
//}
//*/
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int arr_1[][4] = { 
//		{1,2,3,4},
//		{5,6,7,8} 
//	};
//	/*һά���鴫��*/
///*��� ����̳̱��벻��
//	test_0(arr);
//*/
//	test(arr);
//	test_1(arr);
//	/*��ά���鴫��*/
//	test_2(arr_1);
//	test_3(arr_1);
///*gcc ����̶̳����벻��	test_4(&arr_1);*/
//
//	/*ֻ���������������������������Ԫ�ص�ַ*/
//	//printf("%d\n", sizeof(arr));	//��������ĵ�ַ
//	//printf("%p", &arr);	//һά����-��������ĵ�ַ����ά����-��һ��Ԫ�صĵ�ַ
//	return 0;
//}


/*һ��ָ�봫��*/
//void test_1(int* p, int str)
//{
//	int i = 0;
//	printf("test_1\n");
//	for(i=0;i<str;i++)
//		printf("%d	", *(p + i));
//	printf("\n");
//}
//
//void test_2(char* p, int str)	//ָ������;�����ָ��Ӽ������Ĳ��� �Լ������õ�Ȩ�ޣ������ü����ֽڣ�
//{
//	int i = 0;
//	printf("test_2\n");
//	for (i = 0; i < str; i++)
//		printf("%d	", *(p + i));
//	printf("\n");
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;
//	int str = sizeof(arr) / sizeof(arr[0]);
//	test_1(p, str);
//	test_2(p, str);
//	return 0;
//}


/*����ָ��*/
//void test_11(int** p)	//test_11
//{
//	**p = 20;
//	printf("test_11\n");
//}
//void test_12(int** p)
//{
//	printf("test_12\n");	//test_12
//}
//
//void test_13(int** p)
//{
//	printf("test_13\n");	//test_13
//}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//
//	int** c = &(&a);
//	test_11(pp);
//	printf("%d\n", a);
//
//
//	int* arr[10] = { 0 };
//	test_13(arr);
//	//test_12(c);
//	
//	
//	return 0;
//}



//int add(int x, int y)
//{
//	return x + y;
//}
//
///*����ָ��*/
//int main()
//{
//	//&������-�����ĵ�ַ
//	//&������ = ������
//	int (*pf)(int,int) = &add;	//pf����ָ�����
//	printf("%p\n", &add);
//	printf("%p\n", add);
//	return 0;
//}



//void test(char* a)
//{
//
//}
//int test_1(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;
//	printf("%d\n", pt);
//
//	//int (*p)(int, int) = &test_1;
//	int (*p)(int, int) = test_1;	//�ȼ�����	---->p�ȼ�teest_1
//	///int sum = test_1(1, 2);	//3
//	int sum = (*p)(1, 2);	//3	////ʵ���������*û���κ�����ֻ��Ϊ�˺����
//	//int sum = (****p)(1, 2);	////ʵ���������*û���κ�����ֻ��Ϊ�˺����
//	//int sum = p(1, 2);	//3
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	(*(void (*)())0)();	//�����,û����ôд
//	//void (*)() - ����ָ������
//	//(void (*)())0 - ��0ǿתΪ����ָ��
//	//(*(void (*)())0)();-���õ�ַΪ0�ĺ���--->����c�����ȱ��
//
//}


/*�������
//void (*signal(int, void(*)(int)))(int);
//signal(int, void(*)(int)) - ��������ֵ
//void (*signal(int, void(*)(int)))(int);-�޷���ֵ��int�βεĺ���ָ��
*/

////signal��һ����������
//void (*signal(int, void(*)(int)))(int);
////1.signal�Ⱥ�()��ϣ�˵��signal�Ǻ�����
////2.signal,��1-int���ͣ���2-����ָ������
////3.signal�����ķ���ֵҲ��һ������ָ��
////�ú���ָ�룬ָ��һ������Ϊint�ͣ�����ֵΪvoid�ĺ���
//
////typedef -�����ͽ����ض���
//typedef void(*pfun_t)(int);	//��void(*)(int)�ĺ���ָ�����ͽ���������Ϊ pfun_t
////!!!��ģ�c���Բ�֧������дtypedef void(*)(int) pfun_t;	//Ӧ������������д
//pfun_t signal(int, pfun_t);
////ͬ��





/*����ָ������*/
int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

void main()
{
	int (*pf)(int, int) = add;	//����ָ��
	int (*pf_2)(int, int) = subtract;	
	int (*pfarr[2])(int, int) = { add,subtract };//pfarr����ָ������
	return 0;
}