//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//利用qsort对结构体进行排序
//struct stdudent
//{	
//	char name[10];
//	int age;
//	char xb[10];
//};
//int cmp(const void *e1,const void *e2)
//{
//	return ((struct stdudent*)e1)->age -((struct stdudent*)e1)->age;
//}
//int main()
//{
//	struct stdudent s[3] = { {"小孩",15,"女"},{"老男人",22,"男"},{"仙女",16,"男"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("name:%s  age:%d\n", s[i].name,s[i].age);
//	}
//}
//
//#include<stdio.h>
//void paixun(int *a, int x)
//{
//	int i, j;
//	for (i = 0; i < x -1; i++)
//	{
//		for (j = 0; j < x -1- i; j++)
//		{
//			if (a[j] > a[j+1])
//			{
//				int b;
//				b = a[j+1];
//				a[j+1] = a[j];
//				a[j] = b;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,3,63,6,7,91,2,34,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	paixun(arr, sz);
//	for (int i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//#include<stdio.h>
//int add(int x,int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("#####1.add  2.sub  3.mul  4.div  0.ext#####");
//}
//int main()
//{
//	int x, y;
//	int input;
//	int(*a[5])(int, int) = { 0,add,sub,mul,div };
//	int sz = sizeof(a) / sizeof(a[0]);
//	do
//	{
//		menu();
//		printf("请输入-》");
//		scanf("%d", &input);
//		if (input > 0 && input < sz)
//		{
//			printf("请输入俩个数-》");
//			scanf("%d%d", &x, &y);
//			printf("%d", a[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出");
//			break;
//		}
//		else
//		{
//			printf("选择错误");
//			printf("请重新选择");
//		}
//
//	} while (input);
//}


#include<stdio.h>
#include<stdlib.h>
//利用qsort对浮点数进行排序
//int cmp(const void*e1, const void*e2)
//{
//	return (int)((float*)e1 - (float*)e2);
//}
//void test1()
//{
//	float a[] = { 1,5,2,6,76,86,12 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%.2f ", a[i]);
//	}
//}

int cmp(const void*e1, const void*e2)
{
	return *(char*)e1 - *(char*)e2;
}
void test2()
{
	char a[] = { 1,3,2,67,87,121,3 };
	int sz = sizeof(a) / sizeof(a[0]);
	qsort(a, sz, sizeof(a[0]), cmp);
	for (int i = 0; i < sz; i++)
			{
				printf("%d ", a[i]);
			}
}
int main()
{
	//test1();
	test2();
	return 0;
}