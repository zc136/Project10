//写一段代码告诉我们当前机器的字节序是什么
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}
#include<stdio.h>
int check_s()
{
	int a = 1;
	char* p = (char*)&a;
	if(*p==1)
	return 1;
	else
	return 0;
}
int main()
{
	//写一段代码告诉我们机器的字节是什么 （优化）
	//返回1是小端，返回0是大端
	int ret = check_s();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");

	}
	return 0;
}




