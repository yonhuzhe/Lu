#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//int main()
//{
//	int day = 0;
//	int n = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if (day== 1)
//			printf("haha\n");
//	case 2:	
//	case 3:	
//		printf("工作日\n");
//		break;
//	case 4:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//
//	}
//	return 0;
// }
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;//m=3
//    case 2:
//        n++;//n=2
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;//m=4
//            n++;//n=3
//            break;//n结束，m不结束
//        }
//    case 4:
//        m++;//m=5
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <=15)
//	{
//
//		i++;
//		if (i == 12)
//		{
//			continue;
//		}
//		printf("%d", i);
//		
//		
//	}
//	return 0;
//}
////int main()
////{
////	int ret = 0;
////	char password[] = { 0 };
////	printf("请输入密码:");
////		scanf("%d", password);
////	printf("请确认");
////	ret = getchar();
////	ret = getchar();
////	if (ret == 'y')
////		printf("确认成功");
//	else
//		printf("确认失败");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char ch = '\0';
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch > '9')
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}
//int main()
//{
//	int i;
//	int n = 0;
//	int mul = 1;
//	scanf("%d" ,&n);
//	for (i = 1; i <= n; i++)
//	{
//		mul = mul * i;
//	}
//	printf("%d", mul);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i < 5; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("阶乘的和为sum%d", sum);
//	return 0;
//}
//int main()
//{
//	int k = 7;
//	int arr[] = { 1,2,5,7,9,0,4 };
//	int sz= sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			
//			printf("要查找数的下标是%d", i);
//			
//		}
//	/*	else
//			printf("不存在");*/
//		
//	}
//	
//	return 0;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	int k = 7;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		if (arr[mid] > k)
//			right = mid -1;
//		if (arr[mid] == k)
//		{
//			printf("已找到且下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("未找到");
//	}
//	return 0;
//}
#include<windows.h>
//int main()
//{
//	char arr1[] = "I LOVE Tongtong!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
#include<string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("输入正确\n");
//			break;
//		}
//		if (i == 2)
//		{
//			printf("密码错误，退出程序\n");
//		}
//	}
//	return 0;
//}
//当然，我可以帮你编写一个使用C语言的钻戒代码。这是一个简单的示例：


//#include <stdio.h>

//int main() {
//    int i, j, n;
//
//    printf("请输入钻戒的大小（1-9）：");
//    scanf("%d", &n);
//
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    for (i = n - 1; i >= 1; i--) {
//        for (j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
//
//
////这段代码会根据用户输入的大小，打印出一个钻戒形状。钻戒的大小范围是1到9，你可以根据需要修改代码来适应更大或更小的范围。希望这能满足你的需求！
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m ,& n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d\t", year);
//			count++;
//		}
//	}
//	printf("count=%d\n",count);
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2 ;j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//	 if (i == j)
//	{
//		printf("%d\n", j);
//		count++;
//	}
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()
//{
//	 double  i= 0;
//	 double sum = 0;
//	 int t = 1;
//	for ( i = 1; i <= 2; i++)
//	{
//		
//		sum += 1 / i*t;
//		t = -t;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]) ;
//	int max = arr[0];
//	for (int i = 0; i <= sz;i++)
//	{
//		if (arr[i]  >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}
//int main()
//{
//	int mul = 0;
//	int j = 0;
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			mul = i * j;
//			printf("%d*%d=%d\t", i, j, mul);
//
//			if (i == j)
//				printf("\n");
//		}
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{ 
//	char input[20] = {0};
//	system("shutdown - s - t 60");
//again:
//	printf("电脑将在一分钟后关机，如果输入:我是小丑，就停止关机！\n请输入:>");
//	scanf("%s", input);
//	if (0==strcmp(input, "我是小丑"))
//	{
//		system("shutdown - a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
////}
////#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("################################\n");
//	printf("## 1:继续游戏  0：退出游戏######\n");
//	printf("################################\n");
//
//
//}
//void game()
//{
//	int random_num = rand() / 100 + 1;
//	int i = 0;
//	while (1)
//	{
//		printf("请输入猜测的数字\n");
//		scanf("%d", &i);
//		if (random_num > i)
//		{
//			printf("输入小了\n");
//		}
//		else if (random_num < i)
//		{
//			printf("输入大了\n");
//		}
//		else
//		{
//			printf("恭喜你通关\n");
//			break;
//		}
//
//
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '#', 3);
//	printf("%s", arr);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//int	max=get_max( b,  a);
////get_max(100, 2000);
//printf("%d\n", max);
//
//return 0;
//}
// void swap(int* pa, int* pb)
//{
//	int tem = 0;
//	tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int* a = 10;
//	//int* b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n - 1; i++)
//	{
//		if (n % i == 0)
//			return 0;
//		
//	}
//	
//		return 1;
//}
//int binar_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left<=right)
//	{
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left=mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int  k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret= binar_search(arr, k, sz);
//
//	if (-1 == ret)
//	{
//		printf("找不到了\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", ret);
//	}
//
//		return 0;
//}
//int main()
//{
//	printf("hello word");
//	return 0;
//}