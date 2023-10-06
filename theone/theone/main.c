//查看字符串的字符个数
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = "get";
//	//['g'],['e'],['t'],['\0']
//	printf("strlen原始个数：%d\n", strlen(arr));	//3
//	printf("正确个数：%d\n", strlen(arr) + 1);	//3+1=4
//	return 0;
//}


/*获取数组元素个数*/
//数组名为第一个元素的地址，则字符串数组的数组名为第一个字符的地址
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "get";
//	printf("%d", my_strlen(arr));
//}

int my_strlen(char* str)
{
	if(*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "get";
	printf("%d", my_strlen(arr));
}