//#include<stdio.h>
//#include<string.h>
////利用回调函数进行加减乘除运算
//void menu()
//{
//	printf("########################\n");
//	printf("##1.add          2.sub##\n");
//	printf("##3.mul          4.div##\n");
//	printf("#######  0.exit  #######\n");
//	printf("########################\n");
//}
//int add(int x, int y)
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
//void calx(int(*p)(int, int))
//{
//	int x, y;
//	printf("请输入两个数字-》");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("请选择-》");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calx(add);
//			break;
//		case 2:
//			calx(sub);
//			break;
//		case 3:
//			calx(mul);
//			break;
//		case 4:
//			calx(div);
//			break;
//		case 0:
//			printf("退出-》");
//			break;
//		default:
//			printf("选择错误-》\n");
//			break;
//		}
//
//
//
//	} while (input);
//}
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("########################\n");
	printf("##1.add          2.sub##\n");
	printf("##3.mul          4.div##\n");
	printf("#######  0.exit  #######\n");
	printf("########################\n");
}
int main()
{
	int(*p[])(int, int) = { 0,add,sub,mul,div };
	int input;
	int a = (sizeof(p) / sizeof(p[0]));
	do
	{
		menu();
		printf("请输入-》\n");
		scanf("%d", &input);
		if (input >= 1 && input < (sizeof(p) / sizeof(p[0])))
		{
			int x, y;
			printf("输入两个数字-》\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", p[input](x, y));
		}
		else if (input == 0)
		{
			printf("退出-》\n");
			break;
		}
		else
		{
			printf("输入错误,请重新输入-》\n");
			input = 1;
		}
			
	} while (input);

}