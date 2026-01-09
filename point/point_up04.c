//没有类型的指针
//void* p；		不表示任何类型
//特点：无法获取数据，无法计算，可以任意接收地址
#include <stdio.h>

void exchange(int* p1, int* p2);
void swap(void* p1, void* p2, int len);

int main()
{
	int a = 10;
	short b = 20;
	//定义两指针
	int* p1 = &a;
	short* p2 = &b;

	printf("%d\n",*p1);
	printf("%d\n", *p2);

	//不同类型的指针是不能赋值的
	//void不同
	void* p3 = p1;
	void* p4 = p2;
	//缺点：不能获取数据，不能进行加，减的运算
	//printf("%d\n", *p3);		报错

	//调用函数
	int c = 100;
	int d = 200;
	swap(&c,&d,4);
	printf("c = %d,d = %d", c, d);

	return 0;
}

//函数：交换两指针记录的数据
void exchange(int* p1,int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}
//修改函数，具有通用性，现在的函数只能传入int类型
void swap(void* p1, void* p2, int len)
{
	//void类型转换成char
	char* pc1 = p1;
	char* pc2 = p2;
	char temp = 0;

	//以字节为单位一个一个交换
	for(int i = 0;i < len;i++)
	{
		temp = *pc1;
		*pc1 = *pc2;
		*pc2 = temp;

		pc1++;
		pc2++;
	}

}
//不理解这个函数，以字节为单位一个一个交换是如何进行的
//假设一个数据占用了四个格子，用char循环四次，每次搬运一个格子，那么这四个char格子可以看作这个数据
//计算机的内存大楼里“int型房间”或“double型房间”。
// 所有的内存其实都是一模一样的、只有 1 字节（8位二进制）大小的小格子

//pc1++ 和 pc2++ 的作用是什么？
//挪动指针，指向下一个格子

//函数中for循环的“i < len”就是人为规定的类型，循环几次就是对应的类型