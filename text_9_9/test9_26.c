#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int a = 0x112233;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
//        *(p+i) = 1;
//
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\t", arr[i]);
//    }
//    
//    
//    return 0;
//}
//int str_len(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return (end - start);
//}
//int main()
//{
//
//	char arr[] = "luzhichao";
//	int ret = 0;
//	ret=str_len(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	a = 20;
//	printf("%d", **ppa);
//	return 0;
//}
//int main()//指针数组
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* arr[] = { pa,pb,pc };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\t",*arr[i]);
//	}
//}
//int count;
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//		//count++;
//
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr[i]);
//		//printf("%d", count);
//	} 
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int temp = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		 temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & n-1;
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//
//}
//int get_differ(int m, int n)
//{
//	int temp = m ^ n;
//	int count = 0;
//	while (temp)
//	{
//		temp = temp & temp - 1;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int ret=get_differ(m, n);
//	printf("count=%d", ret);
//	return 0;
//}
//int get_differ(int m, int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((m & 1) != (n & 1))
//		{
//			count++;
//		}
//		m >>= 1;
//		n >>=1;
//	}
//	return count;
//}
//int main()
//{
//	int n = 9;
//	int m = 5;
//	int ret=get_differ(m, n);
//	printf("%d", ret);
//	return 0;
//}
//void print(int n)
//{
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", n>>i & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//
//	return 0;
//}
//void print(int n)
//{
//	int c = 0;
//	while (n != 0)
//	{
//		c = n % 10;
//		printf("%d\t", c);
//		n = n / 10;
//	}
//}
//int main()
//{
//	int n = 123;
//	print(n);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	print(num);
//	printf("\n");
//	system("pause");
//	return 0;
//}
// 
//int  single_sum(int n)
//{
//	//int c = 0;
//	if (n > 9)
//		return single_sum(n / 10)+ n % 10;
//	
//	//printf("%d", c);
//}
//int main()
// 
//{
//	int n = 0;
//	scanf("%d", &n);
//	 int ret=single_sum(n);
//	printf("%d\n", ret);
//	return 0;
// }
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//void change_w(char arr[])
//{
//	int len = 0;
//	len=my_strlen(arr);
//	int temp = arr[0];
//	arr[0]=arr[len-1];
//	arr[len-1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		change_w( arr+1);
//	arr[len-1] = temp;
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//arr = "abedef";
//	//double ret = 0;
//	change_w(arr);
//	printf("%s", arr);
//	return 0;
//}
double pow(int n, int k)
{
	if (k == 0)
		return 1.0;
	else if (k >=0)
		return n * pow(n, k - 1);
	else 
		return (1.0/ (pow(n, -k)));
}

int main()
{
	int n = 0; 
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = pow(n, k);
	printf("%lf", ret);
	return 0;
}