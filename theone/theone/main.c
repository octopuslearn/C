//�鿴�ַ������ַ�����
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = "get";
//	//['g'],['e'],['t'],['\0']
//	printf("strlenԭʼ������%d\n", strlen(arr));	//3
//	printf("��ȷ������%d\n", strlen(arr) + 1);	//3+1=4
//	return 0;
//}


/*��ȡ����Ԫ�ظ���*/
//������Ϊ��һ��Ԫ�صĵ�ַ�����ַ��������������Ϊ��һ���ַ��ĵ�ַ
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