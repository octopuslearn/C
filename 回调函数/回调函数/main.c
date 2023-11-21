#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,2,8,6 };
//	int i = 0;
//
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);	//1       2       3       5       6       8
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d	", arr[i]);	
//	}
//	printf("\n");
//	return 0;
//}

/*冒泡排序法*/
//有个严重的缺陷，值能比较int型数组
//void maopao(int arr[], int size)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < size - 1; i++)	//冒泡排序法趟数
//	{
//		for (j = 0; j < size - i - 1; j++)
//		{
//			if (arr[j - 1] > arr[j])
//			{
//				int tmp = arr[j - 1];
//				arr[j-1] = arr[j];
//				arr[j] = tmp;
//			}
//
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,3,10,5,4,8,0,11,2,12 };
//	maopao(arr, sizeof(arr) / sizeof(arr[0]));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d	", arr[i]);
//	return 0;
//}









void print_this(int* arr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
		printf("%d	", *arr++);
	printf("\n");
}
//void print_this(int arr[], int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//		printf("%d	", arr[i]);
//}

int campare_arr(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void int_arr()
{
	int arr[10] = { 1,3,2,10,22,	5,12,5,18,0 };
	print_this(arr,sizeof(arr)/sizeof(arr[0]));
	int arr_num = sizeof(arr) / sizeof(arr[0]);
	int arr_size = sizeof(arr[0]);
	qsort(arr, arr_num, arr_size, campare_arr);
	print_this(arr, arr_num);
}
//错的：Struct s
struct Ds
{
	char name[3];
	int age;
};
	
int struct_tmp(const void* e1, const void* e2)
{
	//错了：未指定比较name还是age	return (*(struct Ds*)e1 - *(struct Ds*)e2);
	//错了：return (*(struct Ds*)e1->name - *(struct Ds*)e2->name));
	//return ((struct Ds*)e1)->age - ((struct Ds*)e2)->age;
	//错了字符串比较不能相加相减return ((struct Ds*)e1)->name - ((struct Ds*)e2)->name;
	return strcmp(((struct Ds*)e1)->name, ((struct Ds*)e2)->name);
}

void struct_test()
{
	struct Ds tmp[2] = {
		{"z",23},
		{"b",18},	
	};
	int structDs_tmp_size = sizeof(tmp[0]);	//8
	int structDs_tmp_num = sizeof(tmp) / sizeof(tmp[0]);	//2
	printf("num=%d	size=%d\n", structDs_tmp_num, structDs_tmp_size);
	qsort(tmp, structDs_tmp_num, structDs_tmp_size, struct_tmp);
}




int main()
{

	int_arr();
	struct_test();
	return 0;
}