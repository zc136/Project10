//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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
	//дһ�δ���������ǻ������ֽ���ʲô ���Ż���
	//����1��С�ˣ�����0�Ǵ��
	int ret = check_s();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");

	}
	return 0;
}




