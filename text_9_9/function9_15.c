//ָ��������ʹ��utf-8�ַ���
//
//#include <stdio.h>
//#include <locale.h>

//int main()
//{
//	setlocale(LC_ALL, "en_US.utf8"); //�����ַ���Ϊutf-8
//	//��������
//	return 0;
//}

#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//void move(char A, char C, int n)
//{
//	printf("move disk %d from %c to %c.\n", n, A, C);
//}
//
//void hanota(char A, char B, char C, int n)
//{
//	if (n == 1)
//	{
//		move(A, C, n);
//	}
//	else
//	{
//		hanota(A, C, B, n - 1);
//		move(A, C, n);
//		hanota(B, A, C, n - 1);
//
//	}
//}
//int main()
//{
//	//setlocale(LC_ALL, "en_US.utf8"); //�����ַ���Ϊutf-8
//	//��������
//	int n = 0;
//	printf("������A׮�ϵ���Ŀ:>");
//	scanf("%d", &n);
//	hanota('A', 'B', 'C', n);
//
//	return 0;
//}
////int main()
////{
////	int a = 10;
////	int b = 20;
////	int sum = 0;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d\t", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return (1 + my_strlen(str + 1));
//	else
//		return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	if (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char* arr = "bit";
//int ret=	my_strlen(arr);
//printf("ret=%d\n", ret);
//	return 0;
//}
//int fac1(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
// 
//}


//
//int count = 0;
//int fac2(int n)
//{
//	
//	if (n == 3)
//	{
//		count++;
//	}
//	
//	if (n <= 2)
//	{
//		return 1;
//		
//	}
//	else
//		return fac2(n - 1) + fac2(n - 2);
//}
//int fac3(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (;n>2; n--)
//	{
//		c = a + b;
//		a=b;
//		b=c;
//	}
//	return c;
//}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);	
//	ret = fac3(n);
//	printf("%d��쳲�����=%d\n", n, ret);
//	return 0;
//}
////#include <stdio.h>
//
////void move(int n, char A, char B, char C) {
////    if (n == 1) {
////        printf("Move disk 1 from %c to %c\n", A, C);
////    }
////    else {
////        move(n - 1, A, C, B);
////        printf("Move disk %d from %c to %c\n", n, A, C);
////        move(n - 1, B, A, C);
////    }
////}
////
////int main() {
////    int n;
////    printf("Enter the number of disks: ");
////    scanf("%d", &n);
////    move(n, 'A', 'B', 'C');
////    return 0;
////}
//void pubble_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//
//			{
//				int temp = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//		int sz = sizeof(arr)/sizeof(arr[0]);
//	pubble_sort(arr, sz);
//	for ( int i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%p\n", *arr);
//	printf("%p\n", arr);
//
//}
//#include <stdio.h>
//
//int count;
//
//void move(char A, char C, int n) {
//    printf("�ѵ�%d��Բ�̴�%c->%c\n", n, A, C);
//    count++;
//}
//
//void Hanno(char A, char B, char C, int n) {
//    if (n == 1) {
//        move(A, C, n);
//    }
//    else {
//        Hanno(A, C, B, n - 1);  // ��n-1��Բ�̴�A��������C���ƶ���B����
//        move(A, C, n);  // ��A�������һ��Բ���ƶ���C����
//        Hanno(B, A, C, n - 1);  // ��n-1��Բ�̴�B��������A���ƶ���C����
//    }
//}
//
//int main() {
//    int n = 0;
//    printf("����A�����ϵ�Բ�̸�����");
//    scanf("%d", &n);
//
//    count = 0;
//    Hanno('A', 'B', 'C', n);
//
//    printf("һ���ƶ���%d��Բ��\n", count);
//    return 0;
//}

//#include <stdio.h>
//
//void hanoi(int n, char A, char B, char C)
//{
//    if (n == 1)
//    {
//        printf("Move disk 1 from %c to %c.\n", A, C);
//        return;
//    }
//    hanoi(n - 1, A, C, B);
//    printf("Move disk %d from %c to %c.\n", n, A, C);
//    hanoi(n - 1, B, A, C);
//}
//
//int main()
//{
//    int n;
//    printf("Enter the number of disks: ");
//    scanf("%d", &n);
//    hanoi(n, 'A', 'B', 'C');
//    return 0;
//}

//#include <stdio.h>
//
//void move(char a, char c, int n)
//{
//    printf("Move disk %d from %c to %c.\n", n, a, c);
//}

//void hanota(char* a, char* b, char* c, int n)
//{
//    if (n == 1)
//    {
//        move(*a, *c, n);
//        return;
//    }
//    else
//    {
//        hanota(a, c, b, n - 1);
//        move(*a, *c, n);
//        hanota(b, a, c, n - 1);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    printf("Enter the number of disks: ");
//    scanf("%d", &n);
//    hanota("A", "B", "C", n);
//    return 0;
int frog_step(int n)
{
	if (n <=2)
	{
		return n;
	}
	if (n > 2)
	{
		return frog_step(n - 2) + frog_step(n - 1);
	}
}



int main()
{
	int n = 0;
	printf("������̨������>");
	scanf("%d", &n);
	int ret=frog_step(n);
	printf("������%d��̨����%d�ַ���", n, ret);
	return 0;
}