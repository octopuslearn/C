//已经导出为html笔记，具体见笔记
//难点在理解，执行过程，代码调用
#include <stdio.h>

void gaige(int a)
{
	if(a > 9)	//判断是否为1位数
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


///*递归*/
//int main()
//{
//	printf("jejeje\n");
//	main();
//	return 0;
//}