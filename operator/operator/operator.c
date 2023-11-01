#define _CRT_SECURE_NO_WARNINGS


/*内存中存的是补码，整型提升对应的是原码，但是打印的是原码*/
//达不到整型的才需要整型提升，即short-2,char-1
//有符号的，正数补0，负数补1
//无符号的，统一补0
#include <stdio.h>

//int main(void)
//{
//	char a = 3;	
//	//0b000000000000000000000000 0000 0011	整型提升
//	//0b0000 0011-a
//	char b = 127;
//	//0b000000000000000000000000 0111 1111	整型提升
//	//0b0111 1111-b
//	char c = a + b;
//	//0b000000000000000000000000 1000 0010	//截断1000 0010-c	//此时char符号位-1-负数
//	
//	//截断1000 0010-c	//此时char符号位-1-负数
//	//整型提升111111111111111111111111 1000 0010
//	//反码111111111111111111111111 1000 0001
//	//原码100000000000000000000000 0111 1110	//-126
//	printf("%d", c);	//-126
//	//-126
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)	//在此时发生了整型提升，所以打印不出来
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");	//只能打印出c
//	return 0;
//}

int main(void)
{
	char a = 1;
	printf("sizeof(a)=%d\n", sizeof(a));
	printf("sizeof(+a)=%d\n", sizeof(+a));
	printf("sizeof(-a)=%d", sizeof(-a));
	printf("sizeof(-a)=%d", sizeof(!a)); //也应该是4，用gcc的话
	  /*sizeof(a) = 1
		sizeof(+a) = 4
		sizeof(-a) = 4*/
	return 0;
}