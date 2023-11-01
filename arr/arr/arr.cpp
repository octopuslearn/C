#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

/*数组初始化*/
//int main(void)
//{
//	int arr1[3] = { 1,2,3 };	//完全初始化
//	int arr2[3] = { 0 };	//不完全初始化，只是把第一个元素初始化为1，其余的元素默认为1
//							//这和int arr2[3]={0,0,0};将所有元素初始化为0不同
//	int arr3[] = { 1,2,3 };	//相当于int arr1[3] = { 1,2,3 };
//
//	char ch1[5] = { 'a','b','c' };	//字符数组
//	char ch2[] = { 'a','b','c' };
//
//	//字符串只能存在字符数组中
//	char ch3[5] = "bit";	//前4个‘b' 'i' 't' '\0',最后一个是不完全初始化是'\0' ？？？0的ASCII码
//	
//	//ch4和ch5开辟空间，ch4只知道b i t \0,ch5只知道b i t，ch4和ch5都不知道相应的前后到底有啥
//	char ch4[] = "bit";
//	char ch5[] = { 'b','i','t' };	
//
//	printf("%s\n",ch4);
//	printf("%s\n", ch5);	//找到'\0'后停止打印，所以有烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫贴 - 蟷 ?
//	//bit
//	//bit烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫贴 - 蟷 ?
//
//	printf("%d\n", strlen(ch4));
//	printf("%d\n", strlen(ch5));	//由于没有找到'\0',所以strlen算出的数组长度是随机的
//	//3
//	//42	
//	return 0;
//}



//int main(void)
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}


/*数组元素地址是连续的,且地址从低到高*/
//int main(void)
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);	//%p-按地址的格式打印-十六进制的打印
//		//	000000F4056FF988
//		//	000000F4056FF98C
//		//	000000F4056FF990
//		//	000000F4056FF994
//		//	000000F4056FF998
//		//	000000F4056FF99C
//		//	000000F4056FF9A0
//		//	000000F4056FF9A4
//		//	000000F4056FF9A8
//		//	000000F4056FF9AC
//	}
//	return 0;
//}


//int main(void)
//{
//	int arr[10] = { 1 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t", *p);
//		p++;
//	}
//
//	return 0;
//}












///*二维数组*/
//int main(void)
//{
//	//创建
//	//int arr[3][4];
//	//初始化：创建的时候赋值
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr1[3][4] = { 1,2,3,4,5};	//不完全初始化
//	int arr2[3][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//	int arr3[][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//	return 0;
//}


///*二维数组使用*/
//int main(void)
//{
//	int arr3[][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr3[%d][%d]=%p\n",i, j, &arr3[i][j]);
//			//	& arr3[0][0] = 0000007DE0AFF718
//			//	& arr3[0][1] = 0000007DE0AFF71C
//			//	& arr3[0][2] = 0000007DE0AFF720
//			//	& arr3[0][3] = 0000007DE0AFF724
//			//	& arr3[1][0] = 0000007DE0AFF728
//			//	& arr3[1][1] = 0000007DE0AFF72C
//			//	& arr3[1][2] = 0000007DE0AFF730
//			//	& arr3[1][3] = 0000007DE0AFF734
//			//	& arr3[2][0] = 0000007DE0AFF738
//			//	& arr3[2][1] = 0000007DE0AFF73C
//			//	& arr3[2][2] = 0000007DE0AFF740
//			//	& arr3[2][3] = 0000007DE0AFF744
//		}
//		
//	}
//	return 0;
//}


//int main(void)
//{
//	int arr3[][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//
//	/*注意二维数组有个&*/
//	int* p = &arr3[0][0];
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//	return 0;
//}



////冒泡排序法：每两个尽心比较，将大的往后移
////n个元素要n-1轮，每轮比较个数n-2
//void bubble_sort(int arr[], int sz)
//{
//	//解释：首个元素地址，由于64位-8，数组类型int-4个字节-8/4=2;
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr[0]));
//	//	8
//	//	4
//	//数组名-数组首个元素地址,所以像下面这样写不对
//	//int sz = sizeof(arr) / sizeof(arr[0]);	//2 ???
//	int i = 0;
//	for (i = 0; i < sz-1; i++)	//轮数
//	{
//		int j = 0;
//		for (j = 0; j < sz-1; j++)	//每轮比较个数
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	int arr3[10] = { 10,9,8,7,6,5,4,3,2,1};
//
//	int sz = sizeof(arr3) / sizeof(arr3[0]);
//	bubble_sort(arr3, sz);
//
//	return 0;
//}


/*数组名是？*/
//数组名是元素首地址，但有例外：
//1.sizeof(数组名)-整个数组的大小
//2.&数组名-整个数组的地址
int main(void)
{
	int arr3[10] = { 10,9,8,7,6,5,4,3,2,1 };

	printf("%d\n", sizeof(arr3));
	printf("%d\n", sizeof(arr3[0]));
	//	40
	//	4

	printf("%p\n", &arr3[0]);	
	printf("%p\n", &arr3);	//&表示整个数组的地址
	printf("%p\n", arr3);	//数组名是首个元素的地址
	//	0000005658CFF7D8
	//	0000005658CFF7D8
	//	0000005658CFF7D8
	//	0000005658CFF7D8
	printf("\n");

	printf("%p\n", &arr3);	//&表示整个数组的地址
	printf("%p\n", &arr3+1);//&表示整个数组的地址
	printf("%p\n", arr3);	//数组名是首个元素的地址
	printf("%p\n", arr3+1);	//数组名是首个元素的地址
	//	000000AB3DEFFC88	//+40
	//	000000AB3DEFFCB0
	//	000000AB3DEFFC88	//+4
	//	000000AB3DEFFC8C
	return 0;
}