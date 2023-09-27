#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown - s - t 60");
again:
	printf("电脑将在一分钟后关机，如果输入:我是小丑，就停止关机！\n请输入:>");
	scanf("%s", input);
	if (0 == strcmp(input, "我是小丑"))
	{
		system("shutdown - a");
	}
	else
	{
		goto again;
	}
	return 0;
}