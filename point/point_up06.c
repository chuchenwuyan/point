//指向数组元素的指针
#include <stdio.h>

int main()
{
	//利用指针遍历数组

	//1.定义数组
	int arr[] = {10,20,30,40,50};
	int len = sizeof(arr) / sizeof(int);

	//2.获取数组的指针
	//实际上获取的是数组的首地址
	int* p1 = arr;
	//int* p2 = &arr[0];
	printf("%p\n",p1);
	//printf("%p\n", p2);

	printf("%d\n", *p1);	//保存的是首地址，所以打印输出的结果就是0索引的值，也就是10
	printf("%d\n", *(p1 + 1));

	//3.利用循环和指针遍历数组
	for (int i = 0;i < len;i++)
	{
		printf("%d\n", *(p1 + i));		//我写的
		//printf("%d\n", *p1++);		老师写的
		//不同在有无i,但好像没什么区别。		我的理解就是i还是在循环一次就加一，只不过在第二种不参与循环了
	}

	return 0;
}