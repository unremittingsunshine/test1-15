//#include<stdio.h>
//#include<string.h>
////���ûص��������мӼ��˳�����
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
//	printf("��������������-��");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("��ѡ��-��");
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
//			printf("�˳�-��");
//			break;
//		default:
//			printf("ѡ�����-��\n");
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
		printf("������-��\n");
		scanf("%d", &input);
		if (input >= 1 && input < (sizeof(p) / sizeof(p[0])))
		{
			int x, y;
			printf("������������-��\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", p[input](x, y));
		}
		else if (input == 0)
		{
			printf("�˳�-��\n");
			break;
		}
		else
		{
			printf("�������,����������-��\n");
			input = 1;
		}
			
	} while (input);

}