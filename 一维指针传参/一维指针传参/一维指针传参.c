#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

///*一维数组传参*/
///*错的 菜鸟教程编译不过
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
///*二维数组传参*/
//void test_2(int a[][4])
//{
//	printf("test_2\n");	//test_2
//}
//void test_3(int(*p)[4])
//{
//	printf("test_3\n");	//test_3
//}
///*gcc 菜鸟教程都编译不过
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
//	/*一维数组传参*/
///*错的 菜鸟教程编译不过
//	test_0(arr);
//*/
//	test(arr);
//	test_1(arr);
//	/*二维数组传参*/
//	test_2(arr_1);
//	test_3(arr_1);
///*gcc 菜鸟教程都编译不过	test_4(&arr_1);*/
//
//	/*只有以下情况，数组名不是数组首元素地址*/
//	//printf("%d\n", sizeof(arr));	//整个数组的地址
//	//printf("%p", &arr);	//一维数组-整个数组的地址，二维数组-第一行元素的地址
//	return 0;
//}


/*一级指针传参*/
//void test_1(int* p, int str)
//{
//	int i = 0;
//	printf("test_1\n");
//	for(i=0;i<str;i++)
//		printf("%d	", *(p + i));
//	printf("\n");
//}
//
//void test_2(char* p, int str)	//指针的类型决定了指针加减正数的步长 以及解引用的权限（解引用几个字节）
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


/*二级指针*/
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
///*函数指针*/
//int main()
//{
//	//&函数名-函数的地址
//	//&函数名 = 函数名
//	int (*pf)(int,int) = &add;	//pf函数指针变量
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
//	int (*p)(int, int) = test_1;	//等价上面	---->p等价teest_1
//	///int sum = test_1(1, 2);	//3
//	int sum = (*p)(1, 2);	//3	////实际上这里的*没用任何作用只是为了好理解
//	//int sum = (****p)(1, 2);	////实际上这里的*没用任何作用只是为了好理解
//	//int sum = p(1, 2);	//3
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	(*(void (*)())0)();	//理解用,没人这么写
//	//void (*)() - 函数指针类型
//	//(void (*)())0 - 将0强转为函数指针
//	//(*(void (*)())0)();-调用地址为0的函数--->出自c陷阱和缺陷
//
//}


/*错误理解
//void (*signal(int, void(*)(int)))(int);
//signal(int, void(*)(int)) - 函数返回值
//void (*signal(int, void(*)(int)))(int);-无返回值，int形参的函数指针
*/

////signal是一个函数声明
//void (*signal(int, void(*)(int)))(int);
////1.signal先和()结合，说明signal是函数名
////2.signal,参1-int类型，参2-函数指针类型
////3.signal函数的返回值也是一个函数指针
////该函数指针，指向一个参数为int型，返回值为void的函数
//
////typedef -对类型进行重定义
//typedef void(*pfun_t)(int);	//对void(*)(int)的函数指针类型进行重命名为 pfun_t
////!!!错的：c语言不支持这样写typedef void(*)(int) pfun_t;	//应该像上面那样写
//pfun_t signal(int, pfun_t);
////同上





/*函数指针数组*/
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
	int (*pf)(int, int) = add;	//函数指针
	int (*pf_2)(int, int) = subtract;	
	int (*pfarr[2])(int, int) = { add,subtract };//pfarr函数指针数组
	return 0;
}