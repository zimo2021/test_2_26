#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//指针数组
//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 4,5,6 };
//	int arr3[3] = { 7,8,9 };
//	int* p[3] = { arr1,arr2,arr3 };//p[3]为指针数组
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
//数组指针
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int(*p)[3] = &arr;//可以用 但太啰嗦
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", (*p)[i]);//1 2 3
//		printf("%d ", *(*p + i));//1 2 3    *p与arr等效
//		printf("%d ", *(arr + i));//1 2 3
//	}
//	return 0;
//}
//直接这样用
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int* p = arr;//arr代表首元素地址
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
//			//printf("%d ",(*(p + i))[j]); //此四法均可
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
//}——————————————————————————
//二维数组传参
//void test(int arr[3][3])
//{}
//void test(int (*p)[3])//接收第一行 
//{}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	test(arr);//arr 代表第一行元素的地址
//	return 0;
//}——————————————————————
//几种使用二级指针接收的情况
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
//}————————————————————
//函数指针
//void add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int(*p)(int, int) = add;//函数指针  它的类型为int(*)(int,int); 只需去掉函数名和[]即可
//	int ret = (*p)(2, 3);//*p则调用函数
//	printf("%d ", ret);
//	return 0;
//}——————————————————————
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
//函数指针中使用typedef
/*
如有函数void(*signal(int,void(*)(int)))(int)  其中void(*)(int) 可简化为fun
实现步骤：typedef void(*fun)(int);  与常规的typedef不同  fun放在*后面
*/
//函数指针数组
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
//	int (*p[4])(int, int) = { add,sub,mul,DIV};//小写div就不行  div是函数关键字
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", p[i](2, 4));
//	}
//	return 0;
//}————————————————————————
