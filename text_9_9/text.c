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
//		printf("������\n");
//		break;
//	case 4:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;//m=4
//            n++;//n=3
//            break;//n������m������
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
////	printf("����������:");
////		scanf("%d", password);
////	printf("��ȷ��");
////	ret = getchar();
////	ret = getchar();
////	if (ret == 'y')
////		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
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
//	printf("�׳˵ĺ�Ϊsum%d", sum);
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
//			printf("Ҫ���������±���%d", i);
//			
//		}
//	/*	else
//			printf("������");*/
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
//			printf("���ҵ����±�Ϊ%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("δ�ҵ�");
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
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		if (i == 2)
//		{
//			printf("��������˳�����\n");
//		}
//	}
//	return 0;
//}
//��Ȼ���ҿ��԰����дһ��ʹ��C���Ե������롣����һ���򵥵�ʾ����


//#include <stdio.h>

//int main() {
//    int i, j, n;
//
//    printf("���������Ĵ�С��1-9����");
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
////��δ��������û�����Ĵ�С����ӡ��һ�������״�����Ĵ�С��Χ��1��9������Ը�����Ҫ�޸Ĵ�������Ӧ������С�ķ�Χ��ϣ�����������������
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
//	printf("���Խ���һ���Ӻ�ػ����������:����С�󣬾�ֹͣ�ػ���\n������:>");
//	scanf("%s", input);
//	if (0==strcmp(input, "����С��"))
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
//	printf("## 1:������Ϸ  0���˳���Ϸ######\n");
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
//		printf("������²������\n");
//		scanf("%d", &i);
//		if (random_num > i)
//		{
//			printf("����С��\n");
//		}
//		else if (random_num < i)
//		{
//			printf("�������\n");
//		}
//		else
//		{
//			printf("��ϲ��ͨ��\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("�����������������\n");
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
//		printf("�Ҳ�����\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
//	}
//
//		return 0;
//}
//int main()
//{
//	printf("hello word");
//	return 0;
//}