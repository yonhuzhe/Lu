#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int count = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < sz; j++)
//		{
//			 //count = 0;
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//	}
//		if (count == 1)
//		{
//			printf("唯一的数为:%d", arr[i]);
//			break;
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("唯一的一个值为：%d", ret);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//	char id[];
//};
//int main()
//{
//	struct stu s1 = { "张三",20,"2021230028" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	return 0;
//}