#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown - s - t 60");
again:
	printf("���Խ���һ���Ӻ�ػ����������:����С�󣬾�ֹͣ�ػ���\n������:>");
	scanf("%s", input);
	if (0 == strcmp(input, "����С��"))
	{
		system("shutdown - a");
	}
	else
	{
		goto again;
	}
	return 0;
}