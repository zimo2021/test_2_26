#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//ָ������
//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 4,5,6 };
//	int arr3[3] = { 7,8,9 };
//	int* p[3] = { arr1,arr2,arr3 };//p[3]Ϊָ������
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ",*( p[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//����ָ��
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int(*p)[3] = &arr;//������ ��̫����
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", (*p)[i]);//1 2 3
//		printf("%d ", *(*p + i));//1 2 3    *p��arr��Ч
//		printf("%d ", *(arr + i));//1 2 3
//	}
//	return 0;
//}
//ֱ��������
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int* p = arr;//arr������Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(p + i));//1 2 3
//	}
//	return 0;
//}
//void print1(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", *(p[i] + j));
//			//printf("%d ", p[i][j]);
//			//printf("%d ",(*(p + i))[j]); //���ķ�����
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}����������������������������������������������������
//��ά���鴫��
//void test(int arr[3][3])
//{}
//void test(int (*p)[3])//���յ�һ�� 
//{}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	test(arr);//arr �����һ��Ԫ�صĵ�ַ
//	return 0;
//}��������������������������������������������
//����ʹ�ö���ָ����յ����
//void test(int** ret)
//{}
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int* pp = &p;
//	test(pp);
//	test(&p);
//	int* arr[10];
//	test(arr);
//	return 0;
//}����������������������������������������
//����ָ��
//void add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int(*p)(int, int) = add;//����ָ��  ��������Ϊint(*)(int,int); ֻ��ȥ����������[]����
//	int ret = (*p)(2, 3);//*p����ú���
//	printf("%d ", ret);
//	return 0;
//}��������������������������������������������
//void print(char* arr)
//{
//	printf("%s\n", arr);
//}
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hallo");
//	return 0;
//}
//����ָ����ʹ��typedef
/*
���к���void(*signal(int,void(*)(int)))(int)  ����void(*)(int) �ɼ�Ϊfun
ʵ�ֲ��裺typedef void(*fun)(int);  �볣���typedef��ͬ  fun����*����
*/
//����ָ������
//int add(int x, int y)
//{
//	return x+y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x*y;
//}
//int DIV(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*p[4])(int, int) = { add,sub,mul,DIV};//Сдdiv�Ͳ���  ��֪Ϊ��
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", p[i](2, 4));
//	}
//	return 0;
//}������������������������������������������������
