#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//注意：这样是把"hello bit"字符串的首地址放到了*p里
//	char* p = "hello bit";	//h	//！！！注意：常量字符串，不能改
//	*p = "s";
//	char arr[] = "hello bit";	//hello bit
//	printf("%c\n", *p);
//	printf("%s\n", arr);
//	return 0;
//}




//来自《剑指office》
//一道面试题
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";	//理由是："hello bit."是常量字符串，不可更改。常量只有一个空间，所以str3 and str4 are same
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



/*指针数组*/
/*
//指针数组是数组，数组中存的是指针
int main()
{
	//int* arr[4];	//存放整型指针的数组
	//这种写法很少见
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[4] = { &a,&b,&c };	//可以这样写
	int i = 0;
	for (i = 0; i < 3; i++)
		printf("%d\n", *(arr[i]));
	*/

	/*指针数组
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
			//[j]等同于+j 再解引用
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
//	//对于数组而言
//	// &arr-数组地址 &arr+1 加的是是整个数组的地址
//	// arr-数组首元素地址	arr+1 加的是数组一个元素的地址
//	//int arr[10];	//可以
//	//int arr[10] = {};	//报错
//	int arr[10] = { 0 };	//可以 （不完全初始化）
//	printf("%p\n", &arr);	//010FF72C	&arr-数组地址
//	printf("%p\n", arr);	//010FF72C	arr-数组元素首地址即arr[0]地址	
//
//	printf("%p\n", &arr + 1);	//010FF754	010FF754-010FF72C=40
//	printf("%p\n", arr + 1);	//010FF730	010FF730-010FF72C=4
//	return 0;
//}


/*数组指针*/
//int main()
//{
//	/*不会这么用
//	int arr[10] = { 0,1,2,3,4,5,6 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		//(*p)-对数组指针解引用（相当于得到了数组元素首地址）。
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
////二维数组的数组名是首元素地址（而首元素地址是第一行，即int arr[3]即&arr）
//void my_print_2(int(*p)[3],int r,int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			//此处的p-数组第一行，一行的地址
//			//p+i-数组某一行的地址
//			//*(p+i)-找到了数组某一行的首元素的地址
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
//	//二维数组的数组名-数组第一行，一行的地址
//	my_print(arr,2,3);
//	 
//	my_print_2(arr, 2, 3);
//	return 0;
//}

//parr3是个数组，是存储数组指针的数组，能存放10个数组指针。每个数组指针指向一个数组，数组是int型的，数组有5个元素
//int(*parr3[10])[5];


