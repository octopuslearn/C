#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//一维数组传参，倘若用数组，不必考虑数组大小

/*一维数组传参*/
//void test_0(int arr_0)
//{
//	printf("test_0\n");	//test_0
//}

//void test(int arr[])	//由于一维数组数组名是首元素地址，所以写不写数组大小都行
//{
//	printf("test\n");	//test
//}
//void test_1(int arr_1[10])
//{
//	printf("test_1\n");	//test_1
//}
//void test_2(int* p)
//{
//	printf("test_2\n");	//test_2
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3 };
//	//test_0(arr);
//	test(arr);
//	test_1(arr);
//	test_2(arr);
//	return 0;
//}









/*在Microsoft Visual Studio Community 2022 (64 位) - Current中可以正常执行???
在c语言中
void test_0(int arr_0)
{
	printf("test_0\n");	//test_0
}

int main()
{
	int arr[10] = { 1,2,3 };
	test_0(arr);
	return 0;
}

void test_0(int arr_0)中的参数为什么可以是int arr_O

一维数组的数组名是首元素的地址，为什么可以使用int arr_O作形参
*/