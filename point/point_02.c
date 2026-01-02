//指针的作用
//1，可以操作其他函数的变量
//2，函数返回多个值
//3，函数的结果和计算状态分开
//方便地操纵数组和函数

//#include <stdio.h>
//
////void swap(int* p1, int* p2);
//
//int main()
//{//定义两个变量
//int a = 10;
//int b = 20;
//
//	swap(&a, &b);
//	printf("%d %d", a, b);
//
//	int a[] = { 10, 20, 30 };
//	int* p = a;
//	printf("%d\n", *(p++));
//	printf("%d\n", (*p)++);
//	printf("%d\n", *(++p));
//	return 0;
//}
//
//void swap(int* p1,int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}