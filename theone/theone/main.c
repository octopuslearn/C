//�Ѿ�����Ϊhtml�ʼǣ�������ʼ�
//�ѵ�����⣬ִ�й��̣��������
#include <stdio.h>

void gaige(int a)
{
	if(a > 9)	//�ж��Ƿ�Ϊ1λ��
	{
		gaige(a / 10);
	}
	printf("%d	", a%10);
}

int main()
{
	gaige(1234);
	return 0;
}


///*�ݹ�*/
//int main()
//{
//	printf("jejeje\n");
//	main();
//	return 0;
//}