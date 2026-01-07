//Pointer_Arithmetic
//无意义的操作
//指针和整数相乘除		原因：此时指针指向不明
#include <stdio.h>

int main()
{
	//前提：内存空间是连续的
	int arr[] = {1,2,3,4,5,6,7,8,9,10};

	//获取0索引的内存地址
	int* p1 = &arr[0];
	printf("%d\n",*p1);	// 1
	printf("%d\n", *(p1 + 1));	// 2

	//获取5索引的内存地址
	int* p2 = &arr[5];
	printf("%d\n", *p2);
	printf("%d\n",p2 - p1);
}