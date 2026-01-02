//指针的作用一，细节
	//不想函数里的变量被回收，可以变量前加static关键字
#include <stdio.h>

int* method();

int main()
{//调用method，使用变量a
	int* p = method();
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("%d\n",*p); //多加几行 printf("\n") 并不是缩短了生命周期，而是触发了“覆盖（Overwrite）”。
	//加入static关键字后，就可以一直用了

	return 0;
}

int* method()
{
	static int a = 10;//加入static关键字，不管多几行代码，都可以继续使用
	return &a;
}

//为什么 static 就能用了？
//静态局部变量（加了 static）： 存在静态存储区（Data Segment）。
