#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test_1(int arr_1[2][3])
{
	printf("test_1\n");	//test_1
}



//二维数组的数组名是第一行数组的地址，所以若如使用指针传参
//必须使用够指向数组的指针
void test_2(int (*p)[3])
{
	printf("test_2\n");	//test_2
}

//vs2022的BUG
//void test_3(int* arr_3[5])
//{
//	printf("test_3\n");
//}


int main()
{
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	test_1(arr);
	test_2(arr);
	//test_3(arr);	//vs2022的BUG
	return 0;
}