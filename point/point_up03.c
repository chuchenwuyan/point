//野指针：指针指向的空间未分配
//悬空指针：指针指向的空间已分配但被释放了
#include <stdio.h>

int* method();

int main()
{
	//野指针
	int a = 10;
	int* p1 = &a;
	printf("%p\n",p1);

	int* p2 = p1 + 10;	//p1+10这个空间目前未分配
	printf("%p\n", p2);
	printf("%d\n", *p2);	//ERROR
	//一些想法，内存空间就是一栋大楼，内存地址是房间号，房间号是一直存在的，但房间内不一定有东西

	//悬空指针
	int* p3 = method();

	printf("拖点时间\n");

	printf("%p\n", p3);
	printf("%d\n", *p3);
	//没理解悬空指针


	return 0;
}
int* method()
{
	int num = 10;
	int* p = &num;
	return p;
}

//如何防止野指针和悬空指针？
//定义时初始化为 NULL：
//int* p = NULL; （哪怕不知道指向哪，先给它个空地址，防止它乱指）。
//释放后立刻置空：
//如果你之后学了 free(p)，释放完内存后，一定要加一句 p = NULL; 。
//逻辑：退房后立刻把钥匙扔了，省得自己记错了又回去开门。